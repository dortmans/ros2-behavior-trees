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

#include <memory>
#include <string>
#include <sstream>

#include "bt_agent/plugins/action/fibonacci_action.hpp"

namespace nav2_behavior_tree
{

FibonacciAction::FibonacciAction(
  const std::string & xml_tag_name,
  const std::string & action_name,
  const BT::NodeConfiguration & conf)
: BtActionNode<bt_msgs::action::Fibonacci>(xml_tag_name, action_name, conf)
{
}

void FibonacciAction::on_tick()
{
	// Get input from blackboard and create goal
  getInput<int>("order", goal_.order);
}

BT::NodeStatus FibonacciAction::on_success()
{
	// Process result into output on blackboard
	std::stringstream ss;
	for (auto number : result_.result->sequence) {
	  ss << number << ";";
	}
	//RCLCPP_INFO(node_->get_logger(), "Fibonacci result: %s", ss.str().c_str());
	setOutput<std::string>("sequence", ss.str());
  return BT::NodeStatus::SUCCESS;
}

}  // namespace nav2_behavior_tree


#include "behaviortree_cpp_v3/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  BT::NodeBuilder builder =
    [](const std::string & name, const BT::NodeConfiguration & config)
    {
      return std::make_unique<nav2_behavior_tree::FibonacciAction>(
        name, "fibonacci", config);
    };

  factory.registerBuilder<nav2_behavior_tree::FibonacciAction>(
    "Fibonacci", builder);
}
