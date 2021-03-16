// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bt_msgs:srv/Empty.idl
// generated code does not contain a copyright notice
#include "bt_msgs/srv/detail/empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool
bt_msgs__srv__Empty_Request__init(bt_msgs__srv__Empty_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bt_msgs__srv__Empty_Request__fini(bt_msgs__srv__Empty_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bt_msgs__srv__Empty_Request *
bt_msgs__srv__Empty_Request__create()
{
  bt_msgs__srv__Empty_Request * msg = (bt_msgs__srv__Empty_Request *)malloc(sizeof(bt_msgs__srv__Empty_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__srv__Empty_Request));
  bool success = bt_msgs__srv__Empty_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__srv__Empty_Request__destroy(bt_msgs__srv__Empty_Request * msg)
{
  if (msg) {
    bt_msgs__srv__Empty_Request__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__srv__Empty_Request__Sequence__init(bt_msgs__srv__Empty_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__srv__Empty_Request * data = NULL;
  if (size) {
    data = (bt_msgs__srv__Empty_Request *)calloc(size, sizeof(bt_msgs__srv__Empty_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__srv__Empty_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__srv__Empty_Request__fini(&data[i - 1]);
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
bt_msgs__srv__Empty_Request__Sequence__fini(bt_msgs__srv__Empty_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__srv__Empty_Request__fini(&array->data[i]);
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

bt_msgs__srv__Empty_Request__Sequence *
bt_msgs__srv__Empty_Request__Sequence__create(size_t size)
{
  bt_msgs__srv__Empty_Request__Sequence * array = (bt_msgs__srv__Empty_Request__Sequence *)malloc(sizeof(bt_msgs__srv__Empty_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__srv__Empty_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__srv__Empty_Request__Sequence__destroy(bt_msgs__srv__Empty_Request__Sequence * array)
{
  if (array) {
    bt_msgs__srv__Empty_Request__Sequence__fini(array);
  }
  free(array);
}


bool
bt_msgs__srv__Empty_Response__init(bt_msgs__srv__Empty_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bt_msgs__srv__Empty_Response__fini(bt_msgs__srv__Empty_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bt_msgs__srv__Empty_Response *
bt_msgs__srv__Empty_Response__create()
{
  bt_msgs__srv__Empty_Response * msg = (bt_msgs__srv__Empty_Response *)malloc(sizeof(bt_msgs__srv__Empty_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__srv__Empty_Response));
  bool success = bt_msgs__srv__Empty_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__srv__Empty_Response__destroy(bt_msgs__srv__Empty_Response * msg)
{
  if (msg) {
    bt_msgs__srv__Empty_Response__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__srv__Empty_Response__Sequence__init(bt_msgs__srv__Empty_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__srv__Empty_Response * data = NULL;
  if (size) {
    data = (bt_msgs__srv__Empty_Response *)calloc(size, sizeof(bt_msgs__srv__Empty_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__srv__Empty_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__srv__Empty_Response__fini(&data[i - 1]);
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
bt_msgs__srv__Empty_Response__Sequence__fini(bt_msgs__srv__Empty_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__srv__Empty_Response__fini(&array->data[i]);
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

bt_msgs__srv__Empty_Response__Sequence *
bt_msgs__srv__Empty_Response__Sequence__create(size_t size)
{
  bt_msgs__srv__Empty_Response__Sequence * array = (bt_msgs__srv__Empty_Response__Sequence *)malloc(sizeof(bt_msgs__srv__Empty_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__srv__Empty_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__srv__Empty_Response__Sequence__destroy(bt_msgs__srv__Empty_Response__Sequence * array)
{
  if (array) {
    bt_msgs__srv__Empty_Response__Sequence__fini(array);
  }
  free(array);
}
