// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bt_msgs:action/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__ACTION__DETAIL__EMPTY__TRAITS_HPP_
#define BT_MSGS__ACTION__DETAIL__EMPTY__TRAITS_HPP_

#include "bt_msgs/action/detail/empty__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_Goal>()
{
  return "bt_msgs::action::Empty_Goal";
}

template<>
inline const char * name<bt_msgs::action::Empty_Goal>()
{
  return "bt_msgs/action/Empty_Goal";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_Goal>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_msgs::action::Empty_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_Result>()
{
  return "bt_msgs::action::Empty_Result";
}

template<>
inline const char * name<bt_msgs::action::Empty_Result>()
{
  return "bt_msgs/action/Empty_Result";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_msgs::action::Empty_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_Feedback>()
{
  return "bt_msgs::action::Empty_Feedback";
}

template<>
inline const char * name<bt_msgs::action::Empty_Feedback>()
{
  return "bt_msgs/action/Empty_Feedback";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bt_msgs::action::Empty_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "bt_msgs/action/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_SendGoal_Request>()
{
  return "bt_msgs::action::Empty_SendGoal_Request";
}

template<>
inline const char * name<bt_msgs::action::Empty_SendGoal_Request>()
{
  return "bt_msgs/action/Empty_SendGoal_Request";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<bt_msgs::action::Empty_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<bt_msgs::action::Empty_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bt_msgs::action::Empty_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_SendGoal_Response>()
{
  return "bt_msgs::action::Empty_SendGoal_Response";
}

template<>
inline const char * name<bt_msgs::action::Empty_SendGoal_Response>()
{
  return "bt_msgs/action/Empty_SendGoal_Response";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<bt_msgs::action::Empty_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_SendGoal>()
{
  return "bt_msgs::action::Empty_SendGoal";
}

template<>
inline const char * name<bt_msgs::action::Empty_SendGoal>()
{
  return "bt_msgs/action/Empty_SendGoal";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<bt_msgs::action::Empty_SendGoal_Request>::value &&
    has_fixed_size<bt_msgs::action::Empty_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<bt_msgs::action::Empty_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<bt_msgs::action::Empty_SendGoal_Request>::value &&
    has_bounded_size<bt_msgs::action::Empty_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<bt_msgs::action::Empty_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<bt_msgs::action::Empty_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bt_msgs::action::Empty_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_GetResult_Request>()
{
  return "bt_msgs::action::Empty_GetResult_Request";
}

template<>
inline const char * name<bt_msgs::action::Empty_GetResult_Request>()
{
  return "bt_msgs/action/Empty_GetResult_Request";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bt_msgs::action::Empty_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "bt_msgs/action/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_GetResult_Response>()
{
  return "bt_msgs::action::Empty_GetResult_Response";
}

template<>
inline const char * name<bt_msgs::action::Empty_GetResult_Response>()
{
  return "bt_msgs/action/Empty_GetResult_Response";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<bt_msgs::action::Empty_Result>::value> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<bt_msgs::action::Empty_Result>::value> {};

template<>
struct is_message<bt_msgs::action::Empty_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_GetResult>()
{
  return "bt_msgs::action::Empty_GetResult";
}

template<>
inline const char * name<bt_msgs::action::Empty_GetResult>()
{
  return "bt_msgs/action/Empty_GetResult";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<bt_msgs::action::Empty_GetResult_Request>::value &&
    has_fixed_size<bt_msgs::action::Empty_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<bt_msgs::action::Empty_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<bt_msgs::action::Empty_GetResult_Request>::value &&
    has_bounded_size<bt_msgs::action::Empty_GetResult_Response>::value
  >
{
};

template<>
struct is_service<bt_msgs::action::Empty_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<bt_msgs::action::Empty_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<bt_msgs::action::Empty_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "bt_msgs/action/detail/empty__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<bt_msgs::action::Empty_FeedbackMessage>()
{
  return "bt_msgs::action::Empty_FeedbackMessage";
}

template<>
inline const char * name<bt_msgs::action::Empty_FeedbackMessage>()
{
  return "bt_msgs/action/Empty_FeedbackMessage";
}

template<>
struct has_fixed_size<bt_msgs::action::Empty_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<bt_msgs::action::Empty_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<bt_msgs::action::Empty_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<bt_msgs::action::Empty_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<bt_msgs::action::Empty_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<bt_msgs::action::Empty>
  : std::true_type
{
};

template<>
struct is_action_goal<bt_msgs::action::Empty_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<bt_msgs::action::Empty_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<bt_msgs::action::Empty_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // BT_MSGS__ACTION__DETAIL__EMPTY__TRAITS_HPP_
