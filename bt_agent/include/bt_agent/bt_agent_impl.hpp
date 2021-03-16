// Copyright (c) 2018 Intel Corporation
// Copyright (c) 2021 Eric Dortmans
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "bt_agent/bt_agent.hpp"

#include <memory>
#include <string>
#include <utility>
#include <set>
#include <vector>

#include "bt_agent/bt_conversions.hpp"

namespace bt_agent
{

template<class ActionT>
BtAgent<ActionT>::BtAgent(const std::string & agent_name, const std::string & action_name)
: nav2_util::LifecycleNode(agent_name, "", false),
	action_name_(action_name),
  start_time_(0)
{
  RCLCPP_INFO(get_logger(), "Creating");

  const std::vector<std::string> plugin_libs = {
  };

  declare_parameter("plugin_lib_names", plugin_libs);
}

template<class ActionT>
BtAgent<ActionT>::~BtAgent()
{
}

template<class ActionT>
nav2_util::CallbackReturn
BtAgent<ActionT>::on_configure(const rclcpp_lifecycle::State & /*state*/)
{
  RCLCPP_INFO(get_logger(), "Configuring");

  tf_ = std::make_shared<tf2_ros::Buffer>(get_clock());
  auto timer_interface = std::make_shared<tf2_ros::CreateTimerROS>(
    get_node_base_interface(), get_node_timers_interface());
  tf_->setCreateTimerInterface(timer_interface);
  tf_->setUsingDedicatedThread(true);
  tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_, this, false);

  // Libraries to pull plugins (BT Nodes) from
  auto plugin_lib_names = get_parameter("plugin_lib_names").as_string_array();

  bt_action_server_ = std::make_unique<nav2_behavior_tree::BtActionServer<ActionT>>(
    shared_from_this(),
    action_name_,
    plugin_lib_names,
    std::bind(&BtAgent::onGoalReceived, this, std::placeholders::_1),
    std::bind(&BtAgent::onLoop, this),
    std::bind(&BtAgent::onPreempt, this));

  if (!bt_action_server_->on_configure()) {
    return nav2_util::CallbackReturn::FAILURE;
  }

  auto blackboard = bt_action_server_->getBlackboard();
  blackboard->template set<std::shared_ptr<tf2_ros::Buffer>>("tf_buffer", tf_);  // NOLINT
  blackboard->template set<int>("number_recoveries", 0);  // NOLINT

  return nav2_util::CallbackReturn::SUCCESS;
}

template<class ActionT>
nav2_util::CallbackReturn
BtAgent<ActionT>::on_activate(const rclcpp_lifecycle::State & /*state*/)
{
  RCLCPP_INFO(get_logger(), "Activating");

  if (!bt_action_server_->on_activate()) {
    return nav2_util::CallbackReturn::FAILURE;
  }

  // create bond connection
  //createBond();

  return nav2_util::CallbackReturn::SUCCESS;
}

template<class ActionT>
nav2_util::CallbackReturn
BtAgent<ActionT>::on_deactivate(const rclcpp_lifecycle::State & /*state*/)
{
  RCLCPP_INFO(get_logger(), "Deactivating");

  if (!bt_action_server_->on_deactivate()) {
    return nav2_util::CallbackReturn::FAILURE;
  }

  // destroy bond connection
  //destroyBond();

  return nav2_util::CallbackReturn::SUCCESS;
}

template<class ActionT>
nav2_util::CallbackReturn
BtAgent<ActionT>::on_cleanup(const rclcpp_lifecycle::State & /*state*/)
{
  RCLCPP_INFO(get_logger(), "Cleaning up");

  // Reset the listener before the buffer
  tf_listener_.reset();
  tf_.reset();

  if (!bt_action_server_->on_cleanup()) {
    return nav2_util::CallbackReturn::FAILURE;
  }

  RCLCPP_INFO(get_logger(), "Completed Cleaning up");
  return nav2_util::CallbackReturn::SUCCESS;
}

template<class ActionT>
nav2_util::CallbackReturn
BtAgent<ActionT>::on_shutdown(const rclcpp_lifecycle::State & /*state*/)
{
  RCLCPP_INFO(get_logger(), "Shutting down");

  if (!bt_action_server_->on_shutdown()) {
    return nav2_util::CallbackReturn::FAILURE;
  }

  return nav2_util::CallbackReturn::SUCCESS;
}

template<class ActionT>
bool 
BtAgent<ActionT>::onGoalReceived(Goal goal)
{
  auto bt_xml_filename = goal->behavior_tree;

  if (!bt_action_server_->loadBehaviorTree(bt_xml_filename)) {
    RCLCPP_ERROR(
      get_logger(), "BT file not found: %s. Action canceled.",
      bt_xml_filename.c_str());
    return false;
  }

  initializeGoal(goal);

  return true;
}

template<class ActionT>
void
BtAgent<ActionT>::onLoop()
{
  // provide action server feedback
  auto feedback_msg = std::make_shared<Feedback>();
  auto blackboard = bt_action_server_->getBlackboard();
  int recovery_count = 0;
  blackboard->template get<int>("number_recoveries", recovery_count);
  //TODO: appropiate feedback using variables defined in action
  //feedback_msg->number_of_recoveries = recovery_count;
  //feedback_msg->running_time = now() - start_time_;
  bt_action_server_->publishFeedback(feedback_msg);
}

template<class ActionT>
void
BtAgent<ActionT>::onPreempt()
{
  RCLCPP_INFO(get_logger(), "Received goal preemption request");
  initializeGoal(bt_action_server_->acceptPendingGoal());
}

template<class ActionT>
void
BtAgent<ActionT>::initializeGoal(Goal goal)
{
  // Reset state
  start_time_ = now();
  
  // Store goal on blackboard
  auto blackboard = bt_action_server_->getBlackboard();
  blackboard->template set<int>("number_recoveries", 0);  // NOLINT
  blackboard->template set<Goal>("goal", goal); 
}


}  // namespace bt_agent
