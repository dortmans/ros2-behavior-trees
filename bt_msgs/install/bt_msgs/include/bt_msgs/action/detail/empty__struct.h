// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bt_msgs:action/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__ACTION__DETAIL__EMPTY__STRUCT_H_
#define BT_MSGS__ACTION__DETAIL__EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_Goal
{
  uint8_t structure_needs_at_least_one_member;
} bt_msgs__action__Empty_Goal;

// Struct for a sequence of bt_msgs__action__Empty_Goal.
typedef struct bt_msgs__action__Empty_Goal__Sequence
{
  bt_msgs__action__Empty_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_Goal__Sequence;


// Constants defined in the message

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_Result
{
  uint8_t structure_needs_at_least_one_member;
} bt_msgs__action__Empty_Result;

// Struct for a sequence of bt_msgs__action__Empty_Result.
typedef struct bt_msgs__action__Empty_Result__Sequence
{
  bt_msgs__action__Empty_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_Result__Sequence;


// Constants defined in the message

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_Feedback
{
  uint8_t structure_needs_at_least_one_member;
} bt_msgs__action__Empty_Feedback;

// Struct for a sequence of bt_msgs__action__Empty_Feedback.
typedef struct bt_msgs__action__Empty_Feedback__Sequence
{
  bt_msgs__action__Empty_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "bt_msgs/action/detail/empty__struct.h"

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  bt_msgs__action__Empty_Goal goal;
} bt_msgs__action__Empty_SendGoal_Request;

// Struct for a sequence of bt_msgs__action__Empty_SendGoal_Request.
typedef struct bt_msgs__action__Empty_SendGoal_Request__Sequence
{
  bt_msgs__action__Empty_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} bt_msgs__action__Empty_SendGoal_Response;

// Struct for a sequence of bt_msgs__action__Empty_SendGoal_Response.
typedef struct bt_msgs__action__Empty_SendGoal_Response__Sequence
{
  bt_msgs__action__Empty_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} bt_msgs__action__Empty_GetResult_Request;

// Struct for a sequence of bt_msgs__action__Empty_GetResult_Request.
typedef struct bt_msgs__action__Empty_GetResult_Request__Sequence
{
  bt_msgs__action__Empty_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_GetResult_Response
{
  int8_t status;
  bt_msgs__action__Empty_Result result;
} bt_msgs__action__Empty_GetResult_Response;

// Struct for a sequence of bt_msgs__action__Empty_GetResult_Response.
typedef struct bt_msgs__action__Empty_GetResult_Response__Sequence
{
  bt_msgs__action__Empty_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"

// Struct defined in action/Empty in the package bt_msgs.
typedef struct bt_msgs__action__Empty_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  bt_msgs__action__Empty_Feedback feedback;
} bt_msgs__action__Empty_FeedbackMessage;

// Struct for a sequence of bt_msgs__action__Empty_FeedbackMessage.
typedef struct bt_msgs__action__Empty_FeedbackMessage__Sequence
{
  bt_msgs__action__Empty_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__action__Empty_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BT_MSGS__ACTION__DETAIL__EMPTY__STRUCT_H_
