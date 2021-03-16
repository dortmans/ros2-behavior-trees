// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bt_msgs:msg/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__MSG__DETAIL__EMPTY__FUNCTIONS_H_
#define BT_MSGS__MSG__DETAIL__EMPTY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bt_msgs/msg/detail/empty__struct.h"

/// Initialize msg/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__msg__Empty
 * )) before or use
 * bt_msgs__msg__Empty__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__msg__Empty__init(bt_msgs__msg__Empty * msg);

/// Finalize msg/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__msg__Empty__fini(bt_msgs__msg__Empty * msg);

/// Create msg/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__msg__Empty__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__msg__Empty *
bt_msgs__msg__Empty__create();

/// Destroy msg/Empty message.
/**
 * It calls
 * bt_msgs__msg__Empty__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__msg__Empty__destroy(bt_msgs__msg__Empty * msg);


/// Initialize array of msg/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__msg__Empty__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__msg__Empty__Sequence__init(bt_msgs__msg__Empty__Sequence * array, size_t size);

/// Finalize array of msg/Empty messages.
/**
 * It calls
 * bt_msgs__msg__Empty__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__msg__Empty__Sequence__fini(bt_msgs__msg__Empty__Sequence * array);

/// Create array of msg/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__msg__Empty__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__msg__Empty__Sequence *
bt_msgs__msg__Empty__Sequence__create(size_t size);

/// Destroy array of msg/Empty messages.
/**
 * It calls
 * bt_msgs__msg__Empty__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__msg__Empty__Sequence__destroy(bt_msgs__msg__Empty__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BT_MSGS__MSG__DETAIL__EMPTY__FUNCTIONS_H_
