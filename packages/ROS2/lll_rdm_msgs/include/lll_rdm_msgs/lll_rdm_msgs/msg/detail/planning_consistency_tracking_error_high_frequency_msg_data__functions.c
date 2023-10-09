// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tracking_error`
// Member `desired`
// Member `actual`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__init(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // tracking_error
  if (!rosidl_runtime_c__double__Sequence__init(&msg->tracking_error, 0)) {
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(msg);
    return false;
  }
  // desired
  if (!rosidl_runtime_c__double__Sequence__init(&msg->desired, 0)) {
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(msg);
    return false;
  }
  // actual
  if (!rosidl_runtime_c__double__Sequence__init(&msg->actual, 0)) {
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * msg)
{
  if (!msg) {
    return;
  }
  // tracking_error
  rosidl_runtime_c__double__Sequence__fini(&msg->tracking_error);
  // desired
  rosidl_runtime_c__double__Sequence__fini(&msg->desired);
  // actual
  rosidl_runtime_c__double__Sequence__fini(&msg->actual);
}

bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__are_equal(const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * lhs, const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tracking_error
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->tracking_error), &(rhs->tracking_error)))
  {
    return false;
  }
  // desired
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->desired), &(rhs->desired)))
  {
    return false;
  }
  // actual
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->actual), &(rhs->actual)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__copy(
  const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * input,
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // tracking_error
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->tracking_error), &(output->tracking_error)))
  {
    return false;
  }
  // desired
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->desired), &(output->desired)))
  {
    return false;
  }
  // actual
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->actual), &(output->actual)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData *
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * msg = (lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData));
  bool success = lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__destroy(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__init(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__fini(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence *
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * array = (lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__destroy(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * lhs, const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * input,
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * data =
      (lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
