// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bt_msgs:action/Empty.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
#include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bt_msgs/action/detail/empty__functions.h"
#include "bt_msgs/action/detail/empty__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_Goal__init(message_memory);
}

void Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_Goal, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_Goal",  // message name
  1,  // number of fields
  sizeof(bt_msgs__action__Empty_Goal),
  Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_member_array,  // message members
  Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_type_support_handle = {
  0,
  &Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_Goal)() {
  if (!Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_type_support_handle.typesupport_identifier) {
    Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_Goal__rosidl_typesupport_introspection_c__Empty_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_Result__init(message_memory);
}

void Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_Result, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_Result",  // message name
  1,  // number of fields
  sizeof(bt_msgs__action__Empty_Result),
  Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_member_array,  // message members
  Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_type_support_handle = {
  0,
  &Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_Result)() {
  if (!Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_type_support_handle.typesupport_identifier) {
    Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_Result__rosidl_typesupport_introspection_c__Empty_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_Feedback__init(message_memory);
}

void Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_Feedback, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_Feedback",  // message name
  1,  // number of fields
  sizeof(bt_msgs__action__Empty_Feedback),
  Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_member_array,  // message members
  Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_type_support_handle = {
  0,
  &Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_Feedback)() {
  if (!Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_type_support_handle.typesupport_identifier) {
    Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_Feedback__rosidl_typesupport_introspection_c__Empty_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "bt_msgs/action/empty.h"
// Member `goal`
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_SendGoal_Request__init(message_memory);
}

void Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(bt_msgs__action__Empty_SendGoal_Request),
  Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_member_array,  // message members
  Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_type_support_handle = {
  0,
  &Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_SendGoal_Request)() {
  Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_Goal)();
  if (!Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_SendGoal_Request__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_SendGoal_Response__init(message_memory);
}

void Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(bt_msgs__action__Empty_SendGoal_Response),
  Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_member_array,  // message members
  Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_type_support_handle = {
  0,
  &Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_SendGoal_Response)() {
  Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_SendGoal_Response__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_service_members = {
  "bt_msgs__action",  // service namespace
  "Empty_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_service_type_support_handle = {
  0,
  &bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_SendGoal)() {
  if (!bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_service_type_support_handle.typesupport_identifier) {
    bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_SendGoal_Response)()->data;
  }

  return &bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_GetResult_Request__init(message_memory);
}

void Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(bt_msgs__action__Empty_GetResult_Request),
  Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_member_array,  // message members
  Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_type_support_handle = {
  0,
  &Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_GetResult_Request)() {
  Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_GetResult_Request__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "bt_msgs/action/empty.h"
// Member `result`
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_GetResult_Response__init(message_memory);
}

void Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(bt_msgs__action__Empty_GetResult_Response),
  Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_member_array,  // message members
  Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_type_support_handle = {
  0,
  &Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_GetResult_Response)() {
  Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_Result)();
  if (!Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_GetResult_Response__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_service_members = {
  "bt_msgs__action",  // service namespace
  "Empty_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_service_type_support_handle = {
  0,
  &bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_GetResult)() {
  if (!bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_service_type_support_handle.typesupport_identifier) {
    bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_GetResult_Response)()->data;
  }

  return &bt_msgs__action__detail__empty__rosidl_typesupport_introspection_c__Empty_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"
// already included above
// #include "bt_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"
// already included above
// #include "bt_msgs/action/detail/empty__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "bt_msgs/action/empty.h"
// Member `feedback`
// already included above
// #include "bt_msgs/action/detail/empty__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bt_msgs__action__Empty_FeedbackMessage__init(message_memory);
}

void Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_fini_function(void * message_memory)
{
  bt_msgs__action__Empty_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bt_msgs__action__Empty_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_members = {
  "bt_msgs__action",  // message namespace
  "Empty_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(bt_msgs__action__Empty_FeedbackMessage),
  Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_member_array,  // message members
  Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_type_support_handle = {
  0,
  &Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bt_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_FeedbackMessage)() {
  Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bt_msgs, action, Empty_Feedback)();
  if (!Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Empty_FeedbackMessage__rosidl_typesupport_introspection_c__Empty_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
