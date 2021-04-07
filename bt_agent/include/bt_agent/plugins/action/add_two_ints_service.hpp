// Copyright (c) 2019 Samsung Research America
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

#ifndef BT_AGENT__PLUGINS__ACTION__ADD_TWO_INTS_SERVICE_HPP_
#define BT_AGENT__PLUGINS__ACTION__ADD_TWO_INTS_SERVICE_HPP_

#include <string>

#include "bt_agent/bt_service_node.hpp"

#include "bt_msgs/srv/add_two_ints.hpp"


namespace nav2_behavior_tree
{

class AddTwoIntsService : public BtServiceNode<bt_msgs::srv::AddTwoInts>
{
public:
  AddTwoIntsService(
    const std::string & service_node_name,
    const std::string & service_name,
    const BT::NodeConfiguration & conf);

  void on_tick() override;
  
  BT::NodeStatus on_success() override;

  static BT::PortsList providedPorts()
  {
    return providedBasicPorts(
      {
        BT::InputPort("a", "First operand"),
        BT::InputPort("b", "Second operand"),
        BT::OutputPort("sum", "Sum of operands"),
      });
  }
};

}  // namespace nav2_behavior_tree

#endif  // BT_AGENT__PLUGINS__ACTION__ADD_TWO_INTS_SERVICE_HPP_
