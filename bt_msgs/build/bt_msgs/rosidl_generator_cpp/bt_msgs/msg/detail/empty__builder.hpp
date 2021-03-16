// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_
#define BT_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_

#include "bt_msgs/msg/detail/empty__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bt_msgs
{

namespace msg
{


}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::msg::Empty>()
{
  return ::bt_msgs::msg::Empty(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_msgs

#endif  // BT_MSGS__MSG__DETAIL__EMPTY__BUILDER_HPP_
