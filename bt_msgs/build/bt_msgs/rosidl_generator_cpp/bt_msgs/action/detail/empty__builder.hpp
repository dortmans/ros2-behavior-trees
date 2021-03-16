// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bt_msgs:action/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__ACTION__DETAIL__EMPTY__BUILDER_HPP_
#define BT_MSGS__ACTION__DETAIL__EMPTY__BUILDER_HPP_

#include "bt_msgs/action/detail/empty__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace bt_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_Goal>()
{
  return ::bt_msgs::action::Empty_Goal(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_Result>()
{
  return ::bt_msgs::action::Empty_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_Feedback>()
{
  return ::bt_msgs::action::Empty_Feedback(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_SendGoal_Request_goal
{
public:
  explicit Init_Empty_SendGoal_Request_goal(::bt_msgs::action::Empty_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::bt_msgs::action::Empty_SendGoal_Request goal(::bt_msgs::action::Empty_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_msgs::action::Empty_SendGoal_Request msg_;
};

class Init_Empty_SendGoal_Request_goal_id
{
public:
  Init_Empty_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_SendGoal_Request_goal goal_id(::bt_msgs::action::Empty_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Empty_SendGoal_Request_goal(msg_);
  }

private:
  ::bt_msgs::action::Empty_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_SendGoal_Request>()
{
  return bt_msgs::action::builder::Init_Empty_SendGoal_Request_goal_id();
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_SendGoal_Response_stamp
{
public:
  explicit Init_Empty_SendGoal_Response_stamp(::bt_msgs::action::Empty_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::bt_msgs::action::Empty_SendGoal_Response stamp(::bt_msgs::action::Empty_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_msgs::action::Empty_SendGoal_Response msg_;
};

class Init_Empty_SendGoal_Response_accepted
{
public:
  Init_Empty_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_SendGoal_Response_stamp accepted(::bt_msgs::action::Empty_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Empty_SendGoal_Response_stamp(msg_);
  }

private:
  ::bt_msgs::action::Empty_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_SendGoal_Response>()
{
  return bt_msgs::action::builder::Init_Empty_SendGoal_Response_accepted();
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_GetResult_Request_goal_id
{
public:
  Init_Empty_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bt_msgs::action::Empty_GetResult_Request goal_id(::bt_msgs::action::Empty_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_msgs::action::Empty_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_GetResult_Request>()
{
  return bt_msgs::action::builder::Init_Empty_GetResult_Request_goal_id();
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_GetResult_Response_result
{
public:
  explicit Init_Empty_GetResult_Response_result(::bt_msgs::action::Empty_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::bt_msgs::action::Empty_GetResult_Response result(::bt_msgs::action::Empty_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_msgs::action::Empty_GetResult_Response msg_;
};

class Init_Empty_GetResult_Response_status
{
public:
  Init_Empty_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_GetResult_Response_result status(::bt_msgs::action::Empty_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Empty_GetResult_Response_result(msg_);
  }

private:
  ::bt_msgs::action::Empty_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_GetResult_Response>()
{
  return bt_msgs::action::builder::Init_Empty_GetResult_Response_status();
}

}  // namespace bt_msgs


namespace bt_msgs
{

namespace action
{

namespace builder
{

class Init_Empty_FeedbackMessage_feedback
{
public:
  explicit Init_Empty_FeedbackMessage_feedback(::bt_msgs::action::Empty_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::bt_msgs::action::Empty_FeedbackMessage feedback(::bt_msgs::action::Empty_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bt_msgs::action::Empty_FeedbackMessage msg_;
};

class Init_Empty_FeedbackMessage_goal_id
{
public:
  Init_Empty_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Empty_FeedbackMessage_feedback goal_id(::bt_msgs::action::Empty_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Empty_FeedbackMessage_feedback(msg_);
  }

private:
  ::bt_msgs::action::Empty_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::bt_msgs::action::Empty_FeedbackMessage>()
{
  return bt_msgs::action::builder::Init_Empty_FeedbackMessage_goal_id();
}

}  // namespace bt_msgs

#endif  // BT_MSGS__ACTION__DETAIL__EMPTY__BUILDER_HPP_
