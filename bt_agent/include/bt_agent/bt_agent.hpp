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

#ifndef BT_AGENT__BT_AGENT_HPP_
#define BT_AGENT__BT_AGENT_HPP_

#include <memory>
#include <string>
#include <vector>

#include "nav2_util/lifecycle_node.hpp"

#include "bt_agent/bt_action_server.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "tf2_ros/buffer.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/create_timer_ros.h"

namespace bt_agent
{
/**
 * @class bt_agent::BtAgent
 * @brief An action server that uses a behavior tree for implementation of the action.
 */
template<class ActionT>
class BtAgent : public nav2_util::LifecycleNode
{
public:

  using Goal = typename ActionT::Goal::ConstSharedPtr;
  using Feedback =typename ActionT::Feedback;

  /**
   * @brief A constructor for bt_agent::BtAgent class
   */
  BtAgent(const std::string & agent_name, const std::string & action_name);
  /**
   * @brief A destructor for bt_agent::BtAgent class
   */
  ~BtAgent();

protected:
  /**
   * @brief Configures member variables
   *
   * Initializes action server and builds behavior tree from xml file.
   * @param state Reference to LifeCycle node state
   * @return SUCCESS or FAILURE
   */
  nav2_util::CallbackReturn on_configure(const rclcpp_lifecycle::State & state) override;
  /**
   * @brief Activates action server
   * @param state Reference to LifeCycle node state
   * @return SUCCESS or FAILURE
   */
  nav2_util::CallbackReturn on_activate(const rclcpp_lifecycle::State & state) override;
  /**
   * @brief Deactivates action server
   * @param state Reference to LifeCycle node state
   * @return SUCCESS or FAILURE
   */
  nav2_util::CallbackReturn on_deactivate(const rclcpp_lifecycle::State & state) override;
  /**
   * @brief Resets member variables
   * @param state Reference to LifeCycle node state
   * @return SUCCESS or FAILURE
   */
  nav2_util::CallbackReturn on_cleanup(const rclcpp_lifecycle::State & state) override;
  /**
   * @brief Called when in shutdown state
   * @param state Reference to LifeCycle node state
   * @return SUCCESS or FAILURE
   */
  nav2_util::CallbackReturn on_shutdown(const rclcpp_lifecycle::State & state) override;

  /**
   * @brief A callback to be called when a new goal is received by the BT action server
   * Can be used to check if goal is valid and put values on
   * the blackboard which depend on the received goal
   */
  bool onGoalReceived(Goal goal);

  /**
   * @brief A callback that defines execution that happens on one iteration through the BT
   * Can be used to publish action feedback
   */
  void onLoop();

  /**
   * @brief A callback that is called when a preempt is requested
   */
  void onPreempt();

  /**
   * @brief Goal initialization on the blackboard
   */
  void initializeGoal(Goal goal);

   // BtActionServer
  std::unique_ptr<nav2_behavior_tree::BtActionServer<ActionT>> bt_action_server_;

	// Action name
  std::string action_name_;
  
  // Metrics for feedback
  rclcpp::Time start_time_;

  // Spinning transform that can be used by the BT nodes
  std::shared_ptr<tf2_ros::Buffer> tf_;
  std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
};

}  // namespace bt_agent

#include <bt_agent/bt_agent_impl.hpp>  // NOLINT(build/include_order)
#endif  // BT_AGENT__BT_AGENT_HPP_
