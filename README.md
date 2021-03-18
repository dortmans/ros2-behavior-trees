# ROS2 Behavior Trees

This repo contains a couple of ROS2 agents that use [Behavior Trees](https://en.wikipedia.org/wiki/Behavior_tree_(artificial_intelligence,_robotics_and_control)) to implement their behavior. In particular we make use of the [BehaviorTree.CPP](https://github.com/BehaviorTree/BehaviorTree.CPP/) library and its [documentation](https://www.behaviortree.dev/). This is a C++ based library that reads and runs behavior trees [specified in XML](https://www.behaviortree.dev/xml_format/). These XML files can be created using any text editor but also a nice graphical edior is provided, called [Groot](https://github.com/BehaviorTree/Groot).

Our software is partially based on and inspired by the ROS2 [Navigation2](https://github.com/ros-planning/navigation2) stack that also uses the BehaviorTree.CPP library. Some parts of the main branch of the navigation2 stack have been copied into our bt_agent package because they were not available in the ROS2 Foxy distribution. Our bt_agent actually reuses parts of the code of the nav2_bt_navigator package and the behaviortree engine plus several base classes from the nav2_behavior_tree package.

## Installation

We assume you have installed ROS2 (Foxy).

Clone and build the agent source code in your workspace (e.g. ~/ros2_ws):

```
WORKSPACE=~/ros2_ws 
cd $WORKSPACE/src
git clone https://gitlab.com/durablecase/toolbox/ros2-behavior-trees.git
cd $WORKSPACE
sudo apt update
rosdep install --from-paths src --ignore-src --rosdistro $ROS_DISTRO -y -r
colcon build --symlink-install
```

## Create an agent

A behavior tree based agent is implemented as a ROS2 node. It can be constructed from the template 'bt_agent::BtAgent' that is specified in the 'bt_agent/bt_agent.hpp' header file.

```
#include "bt_agent/bt_agent.hpp"
#include "rclcpp/rclcpp.hpp"

// modify to include proper agent action header
#include "bt_msgs/action/play_role.hpp"

int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);

  // modify to use proper agent name
  std::string agent_name = "my_agent";

  // modify to use proper agent action (server) name
  std::string action_name = "play_role";

  // modify to use proper agent action
  using Action = bt_msgs::action::PlayRole;

  using Agent = bt_agent::BtAgent<Action>;
  auto node = std::make_shared<Agent>(agent_name, action_name);
  rclcpp::spin(node->get_node_base_interface());
  rclcpp::shutdown();

  return 0;
}
```

An agent is activated when its action server receives an action (e.g. PlayRole).
The agent retrieves the path to a behavior tree xml file from the action goal. It stores the goal on the blackboard and reads, builds and runs the behavior tree. If no behavior tree is specified in the action goal then a default behavior tree will be used.

## Plugins

The behavior tree control, decorator, condition and action nodes are implemented as C++ plugins. A couple of widely used node plugins are provided by BehaviorTree.CPP. Also various baseclasses are provided to [construct new behavior tree plugins](https://navigation.ros.org/plugin_tutorials/docs/writing_new_bt_plugin.html):

- behaviortree_cpp_v3/control_node.h
- behaviortree_cpp_v3/decorator_node.h
- behaviortree_cpp_v3/condition_node.h
- behaviortree_cpp_v3/action_node.h

The Navigation2 stack added to that some powerful templates to construct action plugins that use ROS2 actions or ROS2 services:

- bt_agent/bt_action_node.hpp (copy of nav2_behavior_tree/bt_action_node.hpp)
- bt_agent/bt_service_node.hpp (copy of nav2_behavior_tree/bt_service_node.hpp)

## Action Servers

BtActionNode based plugins delegate their work via ROS2 actions to BtActionServer ROS2 nodes.
A BtActionServer template is provided in:

- bt_agent/bt_action_server.hpp (copy of nav2_behavior_tree/bt_action_server.hpp)

## Test

In one ROS2 terminal start the bt_agent:
```
WORKSPACE=~/ros2_ws
source $WORKSPACE/install/setup.bash 
ros2 launch bt_agent bringup_launch.py
```

In another ROS2 terminal send a goal with a specific behavior tree to the agent :
```
WORKSPACE=~/ros2_ws
source $WORKSPACE/install/setup.bash 
ros2 action send_goal /play_role bt_msgs/action/PlayRole "{behavior_tree: $(ros2 pkg prefix --share bt_agent)/behavior_trees/specific_bt.xml}"
```

When you send a goal with an empty behavior tree to the agent it should use its default behaviortree (default_bt.xml):
```
WORKSPACE=~/ros2_ws
source $WORKSPACE/install/setup.bash
ros2 action send_goal /play_role bt_msgs/action/PlayRole "{}"
```

You can also add one or more parameters (e.g. num_hello, with value 10) to your goal:
```
source ~/ros2_ws/install/setup.bash 
ros2 action send_goal /play_role bt_msgs/action/PlayRole "{role: agent , params: [{key: num_hello, value: 10}], behavior_tree: $(ros2 pkg prefix --share bt_agent)/behavior_trees/helloworld_bt.xml}"
```


