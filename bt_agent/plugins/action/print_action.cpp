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

#include <string>
#include <memory>

#include "bt_agent/plugins/action/print_action.hpp"

namespace bt_agent
{
PrintAction::PrintAction(
  const std::string & xml_tag_name,
  const BT::NodeConfiguration & conf)
: BT::SyncActionNode(xml_tag_name, conf)
{
  node_ = config().blackboard->get<rclcpp::Node::SharedPtr>("node");
}

BT::NodeStatus PrintAction::tick()
{
  auto msg = getInput<std::string>("message");
  if (!msg)
  {
        throw BT::RuntimeError( "Missing required input [message]: ", msg.error() );
  }
  
  //RCLCPP_INFO(node_->get_logger(), "[PrintAction] '%s'", msg.value().c_str());
  std::cout << "[PrintAction] " << msg.value() << std::endl;
    
  return BT::NodeStatus::SUCCESS;
}

}  // namespace bt_agent

#include "behaviortree_cpp_v3/bt_factory.h"
BT_REGISTER_NODES(factory)
{
  factory.registerNodeType<bt_agent::PrintAction>("Print");
}
