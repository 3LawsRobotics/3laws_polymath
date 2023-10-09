// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_supervisor_msgs:msg/ObjectDetections.idl
// generated code does not contain a copyright notice
#include "lll_supervisor_msgs/msg/detail/object_detections__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `detections`
#include "lll_supervisor_msgs/msg/detail/object_detection2_d__functions.h"

bool
lll_supervisor_msgs__msg__ObjectDetections__init(lll_supervisor_msgs__msg__ObjectDetections * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lll_supervisor_msgs__msg__ObjectDetections__fini(msg);
    return false;
  }
  // detections
  if (!lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__init(&msg->detections, 0)) {
    lll_supervisor_msgs__msg__ObjectDetections__fini(msg);
    return false;
  }
  return true;
}

void
lll_supervisor_msgs__msg__ObjectDetections__fini(lll_supervisor_msgs__msg__ObjectDetections * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // detections
  lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__fini(&msg->detections);
}

bool
lll_supervisor_msgs__msg__ObjectDetections__are_equal(const lll_supervisor_msgs__msg__ObjectDetections * lhs, const lll_supervisor_msgs__msg__ObjectDetections * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // detections
  if (!lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__are_equal(
      &(lhs->detections), &(rhs->detections)))
  {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__msg__ObjectDetections__copy(
  const lll_supervisor_msgs__msg__ObjectDetections * input,
  lll_supervisor_msgs__msg__ObjectDetections * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // detections
  if (!lll_supervisor_msgs__msg__ObjectDetection2D__Sequence__copy(
      &(input->detections), &(output->detections)))
  {
    return false;
  }
  return true;
}

lll_supervisor_msgs__msg__ObjectDetections *
lll_supervisor_msgs__msg__ObjectDetections__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__ObjectDetections * msg = (lll_supervisor_msgs__msg__ObjectDetections *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__ObjectDetections), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__msg__ObjectDetections));
  bool success = lll_supervisor_msgs__msg__ObjectDetections__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__msg__ObjectDetections__destroy(lll_supervisor_msgs__msg__ObjectDetections * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__msg__ObjectDetections__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__msg__ObjectDetections__Sequence__init(lll_supervisor_msgs__msg__ObjectDetections__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__ObjectDetections * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__msg__ObjectDetections *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__msg__ObjectDetections), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__msg__ObjectDetections__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__msg__ObjectDetections__fini(&data[i - 1]);
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
lll_supervisor_msgs__msg__ObjectDetections__Sequence__fini(lll_supervisor_msgs__msg__ObjectDetections__Sequence * array)
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
      lll_supervisor_msgs__msg__ObjectDetections__fini(&array->data[i]);
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

lll_supervisor_msgs__msg__ObjectDetections__Sequence *
lll_supervisor_msgs__msg__ObjectDetections__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__ObjectDetections__Sequence * array = (lll_supervisor_msgs__msg__ObjectDetections__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__ObjectDetections__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__msg__ObjectDetections__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__msg__ObjectDetections__Sequence__destroy(lll_supervisor_msgs__msg__ObjectDetections__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__msg__ObjectDetections__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__msg__ObjectDetections__Sequence__are_equal(const lll_supervisor_msgs__msg__ObjectDetections__Sequence * lhs, const lll_supervisor_msgs__msg__ObjectDetections__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__msg__ObjectDetections__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__msg__ObjectDetections__Sequence__copy(
  const lll_supervisor_msgs__msg__ObjectDetections__Sequence * input,
  lll_supervisor_msgs__msg__ObjectDetections__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__msg__ObjectDetections);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__msg__ObjectDetections * data =
      (lll_supervisor_msgs__msg__ObjectDetections *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__msg__ObjectDetections__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__msg__ObjectDetections__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__msg__ObjectDetections__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
