// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/SensorObstructionData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"

bool
lll_rdm_msgs__msg__SensorObstructionData__init(lll_rdm_msgs__msg__SensorObstructionData * msg)
{
  if (!msg) {
    return false;
  }
  // start_angle
  // end_angle
  // min_dist
  // max_dist
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    lll_rdm_msgs__msg__SensorObstructionData__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__SensorObstructionData__fini(lll_rdm_msgs__msg__SensorObstructionData * msg)
{
  if (!msg) {
    return;
  }
  // start_angle
  // end_angle
  // min_dist
  // max_dist
  // type
  rosidl_runtime_c__String__fini(&msg->type);
}

bool
lll_rdm_msgs__msg__SensorObstructionData__are_equal(const lll_rdm_msgs__msg__SensorObstructionData * lhs, const lll_rdm_msgs__msg__SensorObstructionData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_angle
  if (lhs->start_angle != rhs->start_angle) {
    return false;
  }
  // end_angle
  if (lhs->end_angle != rhs->end_angle) {
    return false;
  }
  // min_dist
  if (lhs->min_dist != rhs->min_dist) {
    return false;
  }
  // max_dist
  if (lhs->max_dist != rhs->max_dist) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__SensorObstructionData__copy(
  const lll_rdm_msgs__msg__SensorObstructionData * input,
  lll_rdm_msgs__msg__SensorObstructionData * output)
{
  if (!input || !output) {
    return false;
  }
  // start_angle
  output->start_angle = input->start_angle;
  // end_angle
  output->end_angle = input->end_angle;
  // min_dist
  output->min_dist = input->min_dist;
  // max_dist
  output->max_dist = input->max_dist;
  // type
  if (!rosidl_runtime_c__String__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__SensorObstructionData *
lll_rdm_msgs__msg__SensorObstructionData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SensorObstructionData * msg = (lll_rdm_msgs__msg__SensorObstructionData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SensorObstructionData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__SensorObstructionData));
  bool success = lll_rdm_msgs__msg__SensorObstructionData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__SensorObstructionData__destroy(lll_rdm_msgs__msg__SensorObstructionData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__SensorObstructionData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__SensorObstructionData__Sequence__init(lll_rdm_msgs__msg__SensorObstructionData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SensorObstructionData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__SensorObstructionData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__SensorObstructionData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__SensorObstructionData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__SensorObstructionData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__SensorObstructionData__Sequence__fini(lll_rdm_msgs__msg__SensorObstructionData__Sequence * array)
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
      lll_rdm_msgs__msg__SensorObstructionData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__SensorObstructionData__Sequence *
lll_rdm_msgs__msg__SensorObstructionData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SensorObstructionData__Sequence * array = (lll_rdm_msgs__msg__SensorObstructionData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SensorObstructionData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__SensorObstructionData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__SensorObstructionData__Sequence__destroy(lll_rdm_msgs__msg__SensorObstructionData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__SensorObstructionData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__SensorObstructionData__Sequence__are_equal(const lll_rdm_msgs__msg__SensorObstructionData__Sequence * lhs, const lll_rdm_msgs__msg__SensorObstructionData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__SensorObstructionData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__SensorObstructionData__Sequence__copy(
  const lll_rdm_msgs__msg__SensorObstructionData__Sequence * input,
  lll_rdm_msgs__msg__SensorObstructionData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__SensorObstructionData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__SensorObstructionData * data =
      (lll_rdm_msgs__msg__SensorObstructionData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__SensorObstructionData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__SensorObstructionData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__SensorObstructionData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
