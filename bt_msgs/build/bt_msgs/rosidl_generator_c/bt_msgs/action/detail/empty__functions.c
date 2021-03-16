// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bt_msgs:action/Empty.idl
// generated code does not contain a copyright notice
#include "bt_msgs/action/detail/empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
bt_msgs__action__Empty_Goal__init(bt_msgs__action__Empty_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bt_msgs__action__Empty_Goal__fini(bt_msgs__action__Empty_Goal * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bt_msgs__action__Empty_Goal *
bt_msgs__action__Empty_Goal__create()
{
  bt_msgs__action__Empty_Goal * msg = (bt_msgs__action__Empty_Goal *)malloc(sizeof(bt_msgs__action__Empty_Goal));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_Goal));
  bool success = bt_msgs__action__Empty_Goal__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_Goal__destroy(bt_msgs__action__Empty_Goal * msg)
{
  if (msg) {
    bt_msgs__action__Empty_Goal__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_Goal__Sequence__init(bt_msgs__action__Empty_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_Goal * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_Goal *)calloc(size, sizeof(bt_msgs__action__Empty_Goal));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_Goal__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_Goal__Sequence__fini(bt_msgs__action__Empty_Goal__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_Goal__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_Goal__Sequence *
bt_msgs__action__Empty_Goal__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_Goal__Sequence * array = (bt_msgs__action__Empty_Goal__Sequence *)malloc(sizeof(bt_msgs__action__Empty_Goal__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_Goal__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_Goal__Sequence__destroy(bt_msgs__action__Empty_Goal__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_Goal__Sequence__fini(array);
  }
  free(array);
}


bool
bt_msgs__action__Empty_Result__init(bt_msgs__action__Empty_Result * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bt_msgs__action__Empty_Result__fini(bt_msgs__action__Empty_Result * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bt_msgs__action__Empty_Result *
bt_msgs__action__Empty_Result__create()
{
  bt_msgs__action__Empty_Result * msg = (bt_msgs__action__Empty_Result *)malloc(sizeof(bt_msgs__action__Empty_Result));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_Result));
  bool success = bt_msgs__action__Empty_Result__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_Result__destroy(bt_msgs__action__Empty_Result * msg)
{
  if (msg) {
    bt_msgs__action__Empty_Result__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_Result__Sequence__init(bt_msgs__action__Empty_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_Result * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_Result *)calloc(size, sizeof(bt_msgs__action__Empty_Result));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_Result__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_Result__Sequence__fini(bt_msgs__action__Empty_Result__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_Result__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_Result__Sequence *
bt_msgs__action__Empty_Result__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_Result__Sequence * array = (bt_msgs__action__Empty_Result__Sequence *)malloc(sizeof(bt_msgs__action__Empty_Result__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_Result__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_Result__Sequence__destroy(bt_msgs__action__Empty_Result__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_Result__Sequence__fini(array);
  }
  free(array);
}


bool
bt_msgs__action__Empty_Feedback__init(bt_msgs__action__Empty_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bt_msgs__action__Empty_Feedback__fini(bt_msgs__action__Empty_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bt_msgs__action__Empty_Feedback *
bt_msgs__action__Empty_Feedback__create()
{
  bt_msgs__action__Empty_Feedback * msg = (bt_msgs__action__Empty_Feedback *)malloc(sizeof(bt_msgs__action__Empty_Feedback));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_Feedback));
  bool success = bt_msgs__action__Empty_Feedback__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_Feedback__destroy(bt_msgs__action__Empty_Feedback * msg)
{
  if (msg) {
    bt_msgs__action__Empty_Feedback__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_Feedback__Sequence__init(bt_msgs__action__Empty_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_Feedback * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_Feedback *)calloc(size, sizeof(bt_msgs__action__Empty_Feedback));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_Feedback__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_Feedback__Sequence__fini(bt_msgs__action__Empty_Feedback__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_Feedback__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_Feedback__Sequence *
bt_msgs__action__Empty_Feedback__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_Feedback__Sequence * array = (bt_msgs__action__Empty_Feedback__Sequence *)malloc(sizeof(bt_msgs__action__Empty_Feedback__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_Feedback__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_Feedback__Sequence__destroy(bt_msgs__action__Empty_Feedback__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_Feedback__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"

bool
bt_msgs__action__Empty_SendGoal_Request__init(bt_msgs__action__Empty_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    bt_msgs__action__Empty_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!bt_msgs__action__Empty_Goal__init(&msg->goal)) {
    bt_msgs__action__Empty_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
bt_msgs__action__Empty_SendGoal_Request__fini(bt_msgs__action__Empty_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  bt_msgs__action__Empty_Goal__fini(&msg->goal);
}

bt_msgs__action__Empty_SendGoal_Request *
bt_msgs__action__Empty_SendGoal_Request__create()
{
  bt_msgs__action__Empty_SendGoal_Request * msg = (bt_msgs__action__Empty_SendGoal_Request *)malloc(sizeof(bt_msgs__action__Empty_SendGoal_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_SendGoal_Request));
  bool success = bt_msgs__action__Empty_SendGoal_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_SendGoal_Request__destroy(bt_msgs__action__Empty_SendGoal_Request * msg)
{
  if (msg) {
    bt_msgs__action__Empty_SendGoal_Request__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_SendGoal_Request__Sequence__init(bt_msgs__action__Empty_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_SendGoal_Request * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_SendGoal_Request *)calloc(size, sizeof(bt_msgs__action__Empty_SendGoal_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_SendGoal_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_SendGoal_Request__Sequence__fini(bt_msgs__action__Empty_SendGoal_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_SendGoal_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_SendGoal_Request__Sequence *
bt_msgs__action__Empty_SendGoal_Request__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_SendGoal_Request__Sequence * array = (bt_msgs__action__Empty_SendGoal_Request__Sequence *)malloc(sizeof(bt_msgs__action__Empty_SendGoal_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_SendGoal_Request__Sequence__destroy(bt_msgs__action__Empty_SendGoal_Request__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_SendGoal_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bt_msgs__action__Empty_SendGoal_Response__init(bt_msgs__action__Empty_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    bt_msgs__action__Empty_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
bt_msgs__action__Empty_SendGoal_Response__fini(bt_msgs__action__Empty_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bt_msgs__action__Empty_SendGoal_Response *
bt_msgs__action__Empty_SendGoal_Response__create()
{
  bt_msgs__action__Empty_SendGoal_Response * msg = (bt_msgs__action__Empty_SendGoal_Response *)malloc(sizeof(bt_msgs__action__Empty_SendGoal_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_SendGoal_Response));
  bool success = bt_msgs__action__Empty_SendGoal_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_SendGoal_Response__destroy(bt_msgs__action__Empty_SendGoal_Response * msg)
{
  if (msg) {
    bt_msgs__action__Empty_SendGoal_Response__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_SendGoal_Response__Sequence__init(bt_msgs__action__Empty_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_SendGoal_Response * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_SendGoal_Response *)calloc(size, sizeof(bt_msgs__action__Empty_SendGoal_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_SendGoal_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_SendGoal_Response__Sequence__fini(bt_msgs__action__Empty_SendGoal_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_SendGoal_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_SendGoal_Response__Sequence *
bt_msgs__action__Empty_SendGoal_Response__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_SendGoal_Response__Sequence * array = (bt_msgs__action__Empty_SendGoal_Response__Sequence *)malloc(sizeof(bt_msgs__action__Empty_SendGoal_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_SendGoal_Response__Sequence__destroy(bt_msgs__action__Empty_SendGoal_Response__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_SendGoal_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
bt_msgs__action__Empty_GetResult_Request__init(bt_msgs__action__Empty_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    bt_msgs__action__Empty_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
bt_msgs__action__Empty_GetResult_Request__fini(bt_msgs__action__Empty_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bt_msgs__action__Empty_GetResult_Request *
bt_msgs__action__Empty_GetResult_Request__create()
{
  bt_msgs__action__Empty_GetResult_Request * msg = (bt_msgs__action__Empty_GetResult_Request *)malloc(sizeof(bt_msgs__action__Empty_GetResult_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_GetResult_Request));
  bool success = bt_msgs__action__Empty_GetResult_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_GetResult_Request__destroy(bt_msgs__action__Empty_GetResult_Request * msg)
{
  if (msg) {
    bt_msgs__action__Empty_GetResult_Request__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_GetResult_Request__Sequence__init(bt_msgs__action__Empty_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_GetResult_Request * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_GetResult_Request *)calloc(size, sizeof(bt_msgs__action__Empty_GetResult_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_GetResult_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_GetResult_Request__Sequence__fini(bt_msgs__action__Empty_GetResult_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_GetResult_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_GetResult_Request__Sequence *
bt_msgs__action__Empty_GetResult_Request__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_GetResult_Request__Sequence * array = (bt_msgs__action__Empty_GetResult_Request__Sequence *)malloc(sizeof(bt_msgs__action__Empty_GetResult_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_GetResult_Request__Sequence__destroy(bt_msgs__action__Empty_GetResult_Request__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_GetResult_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `result`
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"

bool
bt_msgs__action__Empty_GetResult_Response__init(bt_msgs__action__Empty_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!bt_msgs__action__Empty_Result__init(&msg->result)) {
    bt_msgs__action__Empty_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
bt_msgs__action__Empty_GetResult_Response__fini(bt_msgs__action__Empty_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  bt_msgs__action__Empty_Result__fini(&msg->result);
}

bt_msgs__action__Empty_GetResult_Response *
bt_msgs__action__Empty_GetResult_Response__create()
{
  bt_msgs__action__Empty_GetResult_Response * msg = (bt_msgs__action__Empty_GetResult_Response *)malloc(sizeof(bt_msgs__action__Empty_GetResult_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_GetResult_Response));
  bool success = bt_msgs__action__Empty_GetResult_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_GetResult_Response__destroy(bt_msgs__action__Empty_GetResult_Response * msg)
{
  if (msg) {
    bt_msgs__action__Empty_GetResult_Response__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_GetResult_Response__Sequence__init(bt_msgs__action__Empty_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_GetResult_Response * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_GetResult_Response *)calloc(size, sizeof(bt_msgs__action__Empty_GetResult_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_GetResult_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_GetResult_Response__Sequence__fini(bt_msgs__action__Empty_GetResult_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_GetResult_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_GetResult_Response__Sequence *
bt_msgs__action__Empty_GetResult_Response__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_GetResult_Response__Sequence * array = (bt_msgs__action__Empty_GetResult_Response__Sequence *)malloc(sizeof(bt_msgs__action__Empty_GetResult_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_GetResult_Response__Sequence__destroy(bt_msgs__action__Empty_GetResult_Response__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_GetResult_Response__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "bt_msgs/action/detail/empty__functions.h"

bool
bt_msgs__action__Empty_FeedbackMessage__init(bt_msgs__action__Empty_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    bt_msgs__action__Empty_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!bt_msgs__action__Empty_Feedback__init(&msg->feedback)) {
    bt_msgs__action__Empty_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
bt_msgs__action__Empty_FeedbackMessage__fini(bt_msgs__action__Empty_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  bt_msgs__action__Empty_Feedback__fini(&msg->feedback);
}

bt_msgs__action__Empty_FeedbackMessage *
bt_msgs__action__Empty_FeedbackMessage__create()
{
  bt_msgs__action__Empty_FeedbackMessage * msg = (bt_msgs__action__Empty_FeedbackMessage *)malloc(sizeof(bt_msgs__action__Empty_FeedbackMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__action__Empty_FeedbackMessage));
  bool success = bt_msgs__action__Empty_FeedbackMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__action__Empty_FeedbackMessage__destroy(bt_msgs__action__Empty_FeedbackMessage * msg)
{
  if (msg) {
    bt_msgs__action__Empty_FeedbackMessage__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__action__Empty_FeedbackMessage__Sequence__init(bt_msgs__action__Empty_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__action__Empty_FeedbackMessage * data = NULL;
  if (size) {
    data = (bt_msgs__action__Empty_FeedbackMessage *)calloc(size, sizeof(bt_msgs__action__Empty_FeedbackMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__action__Empty_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__action__Empty_FeedbackMessage__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
bt_msgs__action__Empty_FeedbackMessage__Sequence__fini(bt_msgs__action__Empty_FeedbackMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__action__Empty_FeedbackMessage__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

bt_msgs__action__Empty_FeedbackMessage__Sequence *
bt_msgs__action__Empty_FeedbackMessage__Sequence__create(size_t size)
{
  bt_msgs__action__Empty_FeedbackMessage__Sequence * array = (bt_msgs__action__Empty_FeedbackMessage__Sequence *)malloc(sizeof(bt_msgs__action__Empty_FeedbackMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__action__Empty_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__action__Empty_FeedbackMessage__Sequence__destroy(bt_msgs__action__Empty_FeedbackMessage__Sequence * array)
{
  if (array) {
    bt_msgs__action__Empty_FeedbackMessage__Sequence__fini(array);
  }
  free(array);
}
