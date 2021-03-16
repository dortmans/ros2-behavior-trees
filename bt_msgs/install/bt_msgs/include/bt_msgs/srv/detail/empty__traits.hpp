// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bt_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_
#define BT_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_

#include "bt_msgs/srv/detail/empty__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::srv::Empty_Request>()
{
  return "bt_msgs::srv::Empty_Request";
}

template<>
inline const char * name<bt_msgs::srv::Empty_Request>()
{
  return "bt_msgs/srv/Empty_Request";
}

template<>
struct has_fixed_size<bt_msgs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_msgs::srv::Empty_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_msgs::srv::Empty_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::srv::Empty_Response>()
{
  return "bt_msgs::srv::Empty_Response";
}

template<>
inline const char * name<bt_msgs::srv::Empty_Response>()
{
  return "bt_msgs/srv/Empty_Response";
}

template<>
struct has_fixed_size<bt_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_msgs::srv::Empty_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_msgs::srv::Empty_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::srv::Empty>()
{
  return "bt_msgs::srv::Empty";
}

template<>
inline const char * name<bt_msgs::srv::Empty>()
{
  return "bt_msgs/srv/Empty";
}

template<>
struct has_fixed_size<bt_msgs::srv::Empty>
  : std::integral_constant<
    bool,
    has_fixed_size<bt_msgs::srv::Empty_Request>::value &&
    has_fixed_size<bt_msgs::srv::Empty_Response>::value
  >
{
};

template<>
struct has_bounded_size<bt_msgs::srv::Empty>
  : std::integral_constant<
    bool,
    has_bounded_size<bt_msgs::srv::Empty_Request>::value &&
    has_bounded_size<bt_msgs::srv::Empty_Response>::value
  >
{
};

template<>
struct is_service<bt_msgs::srv::Empty>
  : std::true_type
{
};

template<>
struct is_service_request<bt_msgs::srv::Empty_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bt_msgs::srv::Empty_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BT_MSGS__SRV__DETAIL__EMPTY__TRAITS_HPP_
