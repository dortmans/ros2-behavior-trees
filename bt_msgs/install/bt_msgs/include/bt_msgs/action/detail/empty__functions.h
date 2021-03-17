// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from bt_msgs:action/Empty.idl
// generated code does not contain a copyright notice

#ifndef BT_MSGS__ACTION__DETAIL__EMPTY__FUNCTIONS_H_
#define BT_MSGS__ACTION__DETAIL__EMPTY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "bt_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "bt_msgs/action/detail/empty__struct.h"

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_Goal
 * )) before or use
 * bt_msgs__action__Empty_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_Goal__init(bt_msgs__action__Empty_Goal * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Goal__fini(bt_msgs__action__Empty_Goal * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_Goal *
bt_msgs__action__Empty_Goal__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Goal__destroy(bt_msgs__action__Empty_Goal * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_Goal__Sequence__init(bt_msgs__action__Empty_Goal__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Goal__Sequence__fini(bt_msgs__action__Empty_Goal__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_Goal__Sequence *
bt_msgs__action__Empty_Goal__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Goal__Sequence__destroy(bt_msgs__action__Empty_Goal__Sequence * array);

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_Result
 * )) before or use
 * bt_msgs__action__Empty_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_Result__init(bt_msgs__action__Empty_Result * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Result__fini(bt_msgs__action__Empty_Result * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_Result *
bt_msgs__action__Empty_Result__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Result__destroy(bt_msgs__action__Empty_Result * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_Result__Sequence__init(bt_msgs__action__Empty_Result__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Result__Sequence__fini(bt_msgs__action__Empty_Result__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_Result__Sequence *
bt_msgs__action__Empty_Result__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Result__Sequence__destroy(bt_msgs__action__Empty_Result__Sequence * array);

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_Feedback
 * )) before or use
 * bt_msgs__action__Empty_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_Feedback__init(bt_msgs__action__Empty_Feedback * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Feedback__fini(bt_msgs__action__Empty_Feedback * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_Feedback *
bt_msgs__action__Empty_Feedback__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Feedback__destroy(bt_msgs__action__Empty_Feedback * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_Feedback__Sequence__init(bt_msgs__action__Empty_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Feedback__Sequence__fini(bt_msgs__action__Empty_Feedback__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_Feedback__Sequence *
bt_msgs__action__Empty_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_Feedback__Sequence__destroy(bt_msgs__action__Empty_Feedback__Sequence * array);

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_SendGoal_Request
 * )) before or use
 * bt_msgs__action__Empty_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_SendGoal_Request__init(bt_msgs__action__Empty_SendGoal_Request * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Request__fini(bt_msgs__action__Empty_SendGoal_Request * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_SendGoal_Request *
bt_msgs__action__Empty_SendGoal_Request__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Request__destroy(bt_msgs__action__Empty_SendGoal_Request * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_SendGoal_Request__Sequence__init(bt_msgs__action__Empty_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Request__Sequence__fini(bt_msgs__action__Empty_SendGoal_Request__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_SendGoal_Request__Sequence *
bt_msgs__action__Empty_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Request__Sequence__destroy(bt_msgs__action__Empty_SendGoal_Request__Sequence * array);

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_SendGoal_Response
 * )) before or use
 * bt_msgs__action__Empty_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_SendGoal_Response__init(bt_msgs__action__Empty_SendGoal_Response * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Response__fini(bt_msgs__action__Empty_SendGoal_Response * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_SendGoal_Response *
bt_msgs__action__Empty_SendGoal_Response__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Response__destroy(bt_msgs__action__Empty_SendGoal_Response * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_SendGoal_Response__Sequence__init(bt_msgs__action__Empty_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Response__Sequence__fini(bt_msgs__action__Empty_SendGoal_Response__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_SendGoal_Response__Sequence *
bt_msgs__action__Empty_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_SendGoal_Response__Sequence__destroy(bt_msgs__action__Empty_SendGoal_Response__Sequence * array);

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_GetResult_Request
 * )) before or use
 * bt_msgs__action__Empty_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_GetResult_Request__init(bt_msgs__action__Empty_GetResult_Request * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Request__fini(bt_msgs__action__Empty_GetResult_Request * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_GetResult_Request *
bt_msgs__action__Empty_GetResult_Request__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Request__destroy(bt_msgs__action__Empty_GetResult_Request * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_GetResult_Request__Sequence__init(bt_msgs__action__Empty_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Request__Sequence__fini(bt_msgs__action__Empty_GetResult_Request__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_GetResult_Request__Sequence *
bt_msgs__action__Empty_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Request__Sequence__destroy(bt_msgs__action__Empty_GetResult_Request__Sequence * array);

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_GetResult_Response
 * )) before or use
 * bt_msgs__action__Empty_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_GetResult_Response__init(bt_msgs__action__Empty_GetResult_Response * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Response__fini(bt_msgs__action__Empty_GetResult_Response * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_GetResult_Response *
bt_msgs__action__Empty_GetResult_Response__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Response__destroy(bt_msgs__action__Empty_GetResult_Response * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_GetResult_Response__Sequence__init(bt_msgs__action__Empty_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Response__Sequence__fini(bt_msgs__action__Empty_GetResult_Response__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_GetResult_Response__Sequence *
bt_msgs__action__Empty_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_GetResult_Response__Sequence__destroy(bt_msgs__action__Empty_GetResult_Response__Sequence * array);

/// Initialize action/Empty message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * bt_msgs__action__Empty_FeedbackMessage
 * )) before or use
 * bt_msgs__action__Empty_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_FeedbackMessage__init(bt_msgs__action__Empty_FeedbackMessage * msg);

/// Finalize action/Empty message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_FeedbackMessage__fini(bt_msgs__action__Empty_FeedbackMessage * msg);

/// Create action/Empty message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * bt_msgs__action__Empty_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_FeedbackMessage *
bt_msgs__action__Empty_FeedbackMessage__create();

/// Destroy action/Empty message.
/**
 * It calls
 * bt_msgs__action__Empty_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_FeedbackMessage__destroy(bt_msgs__action__Empty_FeedbackMessage * msg);


/// Initialize array of action/Empty messages.
/**
 * It allocates the memory for the number of elements and calls
 * bt_msgs__action__Empty_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bool
bt_msgs__action__Empty_FeedbackMessage__Sequence__init(bt_msgs__action__Empty_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_FeedbackMessage__Sequence__fini(bt_msgs__action__Empty_FeedbackMessage__Sequence * array);

/// Create array of action/Empty messages.
/**
 * It allocates the memory for the array and calls
 * bt_msgs__action__Empty_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
bt_msgs__action__Empty_FeedbackMessage__Sequence *
bt_msgs__action__Empty_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Empty messages.
/**
 * It calls
 * bt_msgs__action__Empty_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_bt_msgs
void
bt_msgs__action__Empty_FeedbackMessage__Sequence__destroy(bt_msgs__action__Empty_FeedbackMessage__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // BT_MSGS__ACTION__DETAIL__EMPTY__FUNCTIONS_H_