// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__SRV__DETAIL__EMPTY__BUILDER_HPP_
#define BT_MSGS__SRV__DETAIL__EMPTY__BUILDER_HPP_

#include "bt_msgs/srv/detail/empty__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bt_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::srv::Empty_Request>()
{
  return ::bt_msgs::srv::Empty_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::srv::Empty_Response>()
{
  return ::bt_msgs::srv::Empty_Response(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_msgs

#endif  // BT_MSGS__SRV__DETAIL__EMPTY__BUILDER_HPP_
