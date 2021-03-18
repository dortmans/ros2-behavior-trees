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

#ifndef BT_AGENT__PLUGINS__ACTION__PRINT_ACTION_HPP_
#define BT_AGENT__PLUGINS__ACTION__PRINT_ACTION_HPP_

#include <string>

#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp_v3/action_node.h"

namespace nav2_behavior_tree
{

class PrintAction: public BT::SyncActionNode
{
public:
  PrintAction(
    const std::string & xml_tag_name,
    const BT::NodeConfiguration & conf);

  BT::NodeStatus tick() override;

  static BT::PortsList providedPorts()
  {
    return { BT::InputPort<std::string>("message") };
  }

private:
  rclcpp::Node::SharedPtr node_;
};

}  // namespace nav2_behavior_tree

#endif  // BT_AGENT__PLUGINS__ACTION__PRINT_ACTION_HPP_
