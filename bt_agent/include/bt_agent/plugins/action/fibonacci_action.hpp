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

#ifndef BT_AGENT__PLUGINS__ACTION__FIBONACCI_ACTION_HPP_
#define BT_AGENT__PLUGINS__ACTION__FIBONACCI_ACTION_HPP_

#include <string>

#include "bt_msgs/action/fibonacci.hpp"
#include "bt_agent/bt_action_node.hpp"

namespace nav2_behavior_tree
{

class FibonacciAction : public BtActionNode<bt_msgs::action::Fibonacci>
{
public:
  FibonacciAction(
    const std::string & xml_tag_name,
    const std::string & action_name,
    const BT::NodeConfiguration & conf);

  void on_tick() override;

  BT::NodeStatus on_success() override;

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts(
      {
        BT::InputPort("order", "Required order of the fibonacci sequence"),
        BT::OutputPort("sequence", "Calculated fibonacci sequence"),
      });
  }
};

}  // namespace nav2_behavior_tree

#endif  // BT_AGENT__PLUGINS__ACTION__FIBONACCI_ACTION_HPP_
