// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from bt_msgs:srv/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__SRV__DETAIL__EMPTY__STRUCT_H_
#define BT_MSGS__SRV__DETAIL__EMPTY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Empty in the package bt_msgs.
typedef struct bt_msgs__srv__Empty_Request
{
  uint8_t structure_needs_at_least_one_member;
} bt_msgs__srv__Empty_Request;

// Struct for a sequence of bt_msgs__srv__Empty_Request.
typedef struct bt_msgs__srv__Empty_Request__Sequence
{
  bt_msgs__srv__Empty_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__srv__Empty_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Empty in the package bt_msgs.
typedef struct bt_msgs__srv__Empty_Response
{
  uint8_t structure_needs_at_least_one_member;
} bt_msgs__srv__Empty_Response;

// Struct for a sequence of bt_msgs__srv__Empty_Response.
typedef struct bt_msgs__srv__Empty_Response__Sequence
{
  bt_msgs__srv__Empty_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} bt_msgs__srv__Empty_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BT_MSGS__SRV__DETAIL__EMPTY__STRUCT_H_
