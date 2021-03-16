// Copyright (c) 2020 Sarthak Mittal
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

#ifndef NAV2_BEHAVIOR_TREE__BT_ACTION_SERVER_HPP_
#define NAV2_BEHAVIOR_TREE__BT_ACTION_SERVER_HPP_

#include <memory>
#include <string>
#include <vector>

#include "bt_agent/behavior_tree_engine.hpp"
#include "bt_agent/ros_topic_logger.hpp"
#include "nav2_util/lifecycle_node.hpp"
#include "nav2_util/simple_action_server.hpp"

namespace nav2_behavior_tree
{
/**
 * @class nav2_behavior_tree::BtActionServer
 * @brief An action server that uses behavior tree to execute an action
 */
template<class ActionT>
class BtActionServer
{
public:
  using ActionServer = nav2_util::SimpleActionServer<ActionT>;

  typedef std::function<bool (typename ActionT::Goal::ConstSharedPtr)> OnGoalReceivedCallback;
  typedef std::function<void ()> OnLoopCallback;
  typedef std::function<void ()> OnPreemptCallback;

  /**
   * @brief A constructor for nav2_behavior_tree::BtActionServer class
   */
  explicit BtActionServer(
    const rclcpp_lifecycle::LifecycleNode::WeakPtr & parent,
    const std::string & action_name,
    const std::vector<std::string> & plugin_lib_names,
    OnGoalReceivedCallback on_goal_received_callback,
    OnLoopCallback on_loop_callback,
    OnPreemptCallback on_preempt_callback = nullptr);

  /**
   * @brief A destructor for nav2_behavior_tree::BtActionServer class
   */
  ~BtActionServer();

  /**
   * @brief Configures member variables
   *
   * Initializes action server for, builds behavior tree from xml file,
   * and calls user-defined onConfigure.
   * @return true on SUCCESS and false on FAILURE
   */
  bool on_configure();

  /**
   * @brief Activates action server
   * @return true on SUCCESS and false on FAILURE
   */
  bool on_activate();

  /**
   * @brief Deactivates action server
   * @return true on SUCCESS and false on FAILURE
   */
  bool on_deactivate();

  /**
   * @brief Resets member variables
   * @return true on SUCCESS and false on FAILURE
   */
  bool on_cleanup();

  /**
   * @brief Called when in shutdown state
   * @return true on SUCCESS and false on FAILURE
   */
  bool on_shutdown();

  /**
   * @brief Replace current BT with another one
   * @param bt_xml_filename The file containing the new BT, uses default filename if empty
   * @return true if the resulting BT correspond to the one in bt_xml_filename. false
   * if something went wrong, and previous BT is maintained
   */
  bool loadBehaviorTree(const std::string & bt_xml_filename = "");

  /**
   * @brief Getter function for BT Blackboard
   * @return shared pointer to current BT blackboard
   */
  BT::Blackboard::Ptr getBlackboard() const
  {
    return blackboard_;
  }

  /**
   * @brief Getter function for current BT XML filename
   * @return string
   */
  std::string getCurrentBTFilename() const
  {
    return current_bt_xml_filename_;
  }

  /**
   * @brief Wrapper function to accept pending goal if a preempt has been requested
   */
  const std::shared_ptr<const typename ActionT::Goal> acceptPendingGoal()
  {
    return action_server_->accept_pending_goal();
  }

  /**
   * @brief Wrapper function to get current goal
   */
  const std::shared_ptr<const typename ActionT::Goal> getCurrentGoal() const
  {
    return action_server_->get_current_goal();
  }

  /**
   * @brief Wrapper function to publish action feedback
   */
  void publishFeedback(typename std::shared_ptr<typename ActionT::Feedback> feedback)
  {
    action_server_->publish_feedback(feedback);
  }

protected:
  /**
   * @brief Action server callback
   */
  void executeCallback();

  // Action name
  std::string action_name_;

  // Our action server implements the template action
  std::shared_ptr<ActionServer> action_server_;

  // Behavior Tree to be executed when goal is received
  BT::Tree tree_;

  // The blackboard shared by all of the nodes in the tree
  BT::Blackboard::Ptr blackboard_;

  // The XML file that cointains the Behavior Tree to create
  std::string current_bt_xml_filename_;
  std::string default_bt_xml_filename_;

  // The wrapper class for the BT functionality
  std::unique_ptr<nav2_behavior_tree::BehaviorTreeEngine> bt_;

  // Libraries to pull plugins (BT Nodes) from
  std::vector<std::string> plugin_lib_names_;

  // A regular, non-spinning ROS node that we can use for calls to the action client
  rclcpp::Node::SharedPtr client_node_;

  // Parent node
  rclcpp_lifecycle::LifecycleNode::WeakPtr node_;

  // Clock
  rclcpp::Clock::SharedPtr clock_;

  // Logger
  rclcpp::Logger logger_{rclcpp::get_logger("BtActionServer")};

  // To publish BT logs
  std::unique_ptr<RosTopicLogger> topic_logger_;

  // Parameters for Groot monitoring
  bool enable_groot_monitoring_;
  int groot_zmq_publisher_port_;
  int groot_zmq_server_port_;

  // User-provided callbacks
  OnGoalReceivedCallback on_goal_received_callback_;
  OnLoopCallback on_loop_callback_;
  OnPreemptCallback on_preempt_callback_;
};

}  // namespace nav2_behavior_tree

#include <bt_agent/bt_action_server_impl.hpp>  // NOLINT(build/include_order)
#endif  // NAV2_BEHAVIOR_TREE__BT_ACTION_SERVER_HPP_
