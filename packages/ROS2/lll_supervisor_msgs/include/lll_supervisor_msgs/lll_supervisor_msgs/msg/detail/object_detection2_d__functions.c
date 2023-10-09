// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_supervisor_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice
#include "lll_supervisor_msgs/msg/detail/object_detection2_d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `class_name`
#include "rosidl_runtime_c/string_functions.h"

bool
lll_supervisor_msgs__msg__ObjectDetection2D__init(lll_supervisor_msgs__msg__ObjectDetection2D * msg)
{
  if (!msg) {
    return false;
  }
  // track_id
  // class_name
  if (!rosidl_runtime_c__String__init(&msg->class_name)) {
    lll_supervisor_msgs__msg__ObjectDetection2D__fini(msg);
    return false;
  }
  // x_center
  // y_center
  // x_radius
  // y_radius
  // safety_index
  msg->safety_index = -1.0l;
  return true;
}

void
lll_supervisor_msgs__msg__ObjectDetection2D__fini(lll_supervisor_msgs__msg__ObjectDetection2D * msg)
{
  if (!msg) {
    return;
  }
  // track_id
  // class_name
  rosidl_runtime_c__String__fini(&msg->class_name);
  // x_center
  // y_center
  // x_radius
  // y_radius
  // safety_index
}

bool
lll_supervisor_msgs__msg__ObjectDetection2D__are_equal(const lll_supervisor_msgs__msg__ObjectDetection2D * lhs, const lll_supervisor_msgs__msg__ObjectDetection2D * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // track_id
  if (lhs->track_id != rhs->track_id) {
    return false;
  }
  // class_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->class_name), &(rhs->class_name)))
  {
    return false;
  }
  // x_center
  if (lhs->x_center != rhs->x_center) {
    return false;
  }
  // y_center
  if (lhs->y_center != rhs->y_center) {
    return false;
  }
  // x_radius
  if (lhs->x_radius != rhs->x_radius) {
    return false;
  }
  // y_radius
  if (lhs->y_radius != rhs->y_radius) {
    return false;
  }
  // safety_index
  if (lhs->safety_index != rhs->safety_index) {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__msg__ObjectDetection2D__copy(
  const lll_supervisor_msgs__msg__ObjectDetection2D * input,
  lll_supervisor_msgs__msg__ObjectDetection2D * output)
{
  if (!input || !output) {
    return false;
  }
  // track_id
  output->track_id = input->track_id;
  // class_name
  if (!rosidl_runtime_c__String__copy(
      &(input->class_name), &(output->class_name)))
  {
    return false;
  }
  // x_center
  output->x_center = input->x_center;
  // y_center
  output->y_center = input->y_center;
  // x_radius
  output->x_radius = input->x_radius;
  // y_radius
  output->y_radius = input->y_radius;
  // safety_index
  output->safety_index = input->safety_index;
  return true;
}

lll_supervisor_msgs__msg__ObjectDetection2D *
lll_supervisor_msgs__msg__ObjectDetection2D__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__ObjectDetection2D * msg = (lll_supervisor_msgs__msg__ObjectDetection2D *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__ObjectDetection2D), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__msg__ObjectDetection2D));
  bool success = lll_supervisor_msgs__msg__ObjectDetection2D__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__msg__ObjectDetection2D__destroy(lll_supervisor_msgs__msg__ObjectDetection2D * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__msg__ObjectDetection2D__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__init(lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__ObjectDetection2D * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__msg__ObjectDetection2D *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__msg__ObjectDetection2D), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__msg__ObjectDetection2D__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__msg__ObjectDetection2D__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__fini(lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      lll_supervisor_msgs__msg__ObjectDetection2D__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

lll_supervisor_msgs__msg__ObjectDetection2D__Sequence *
lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * array = (lll_supervisor_msgs__msg__ObjectDetection2D__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__ObjectDetection2D__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__destroy(lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__are_equal(const lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * lhs, const lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__msg__ObjectDetection2D__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__copy(
  const lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * input,
  lll_supervisor_msgs__msg__ObjectDetection2D__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__msg__ObjectDetection2D);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__msg__ObjectDetection2D * data =
      (lll_supervisor_msgs__msg__ObjectDetection2D *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__msg__ObjectDetection2D__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__msg__ObjectDetection2D__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__msg__ObjectDetection2D__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
