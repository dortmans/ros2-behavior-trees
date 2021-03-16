// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bt_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_
#define BT_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_

#include "bt_msgs/msg/detail/empty__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::msg::Empty>()
{
  return "bt_msgs::msg::Empty";
}

template<>
inline const char * name<bt_msgs::msg::Empty>()
{
  return "bt_msgs/msg/Empty";
}

template<>
struct has_fixed_size<bt_msgs::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_msgs::msg::Empty>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_msgs::msg::Empty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BT_MSGS__MSG__DETAIL__EMPTY__TRAITS_HPP_
