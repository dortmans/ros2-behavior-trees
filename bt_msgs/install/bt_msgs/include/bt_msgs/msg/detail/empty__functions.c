// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bt_msgs:msg/Empty.idl
// generated code does not contain a copyright notice
#include "bt_msgs/msg/detail/empty__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
bt_msgs__msg__Empty__init(bt_msgs__msg__Empty * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
bt_msgs__msg__Empty__fini(bt_msgs__msg__Empty * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bt_msgs__msg__Empty *
bt_msgs__msg__Empty__create()
{
  bt_msgs__msg__Empty * msg = (bt_msgs__msg__Empty *)malloc(sizeof(bt_msgs__msg__Empty));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bt_msgs__msg__Empty));
  bool success = bt_msgs__msg__Empty__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
bt_msgs__msg__Empty__destroy(bt_msgs__msg__Empty * msg)
{
  if (msg) {
    bt_msgs__msg__Empty__fini(msg);
  }
  free(msg);
}


bool
bt_msgs__msg__Empty__Sequence__init(bt_msgs__msg__Empty__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  bt_msgs__msg__Empty * data = NULL;
  if (size) {
    data = (bt_msgs__msg__Empty *)calloc(size, sizeof(bt_msgs__msg__Empty));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bt_msgs__msg__Empty__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bt_msgs__msg__Empty__fini(&data[i - 1]);
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
bt_msgs__msg__Empty__Sequence__fini(bt_msgs__msg__Empty__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      bt_msgs__msg__Empty__fini(&array->data[i]);
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

bt_msgs__msg__Empty__Sequence *
bt_msgs__msg__Empty__Sequence__create(size_t size)
{
  bt_msgs__msg__Empty__Sequence * array = (bt_msgs__msg__Empty__Sequence *)malloc(sizeof(bt_msgs__msg__Empty__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = bt_msgs__msg__Empty__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
bt_msgs__msg__Empty__Sequence__destroy(bt_msgs__msg__Empty__Sequence * array)
{
  if (array) {
    bt_msgs__msg__Empty__Sequence__fini(array);
  }
  free(array);
}
