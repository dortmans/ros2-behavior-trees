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

#include <string>
#include <memory>

#include "bt_agent/plugins/action/add_two_ints_service.hpp"

namespace nav2_behavior_tree
{


AddTwoIntsService::AddTwoIntsService(
  const std::string & service_node_name,
  const std::string & service_name,
  const BT::NodeConfiguration & conf)
: BtServiceNode<bt_msgs::srv::AddTwoInts>(service_node_name, service_name, conf)
{
}

void AddTwoIntsService::on_tick()
{
  getInput<long>("a", request_->a);
  //request_->a = getInput<long>("a").value();
  getInput<long>("b", request_->b);
  //request_->b = getInput<long>("b").value();
}

BT::NodeStatus AddTwoIntsService::on_success()
{
	//RCLCPP_INFO(node_->get_logger(), "AddTwoInts result: %ld", response_->sum);
	setOutput<long>("sum", response_->sum);
  return BT::NodeStatus::SUCCESS;
}

}  // namespace nav2_behavior_tree

#include "behaviortree_cpp_v3/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  BT::NodeBuilder builder =
    [](const std::string & name, const BT::NodeConfiguration & config)
    {
      return std::make_unique<nav2_behavior_tree::AddTwoIntsService>(
        name, "add_two_ints", config);
    };

  factory.registerBuilder<nav2_behavior_tree::AddTwoIntsService>(
    "AddTwoInts", builder);
}
