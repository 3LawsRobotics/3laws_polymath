// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/planning_consistency_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `acceleration_inconsistency_values`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lll_rdm_msgs__msg__PlanningConsistencyMsgData__init(lll_rdm_msgs__msg__PlanningConsistencyMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // consistent_lengths
  // consistent_state_size
  // consistent_input_size
  // strictly_sorted_time
  // acceleration_inconsistency
  // acceleration_inconsistency_values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->acceleration_inconsistency_values, 0)) {
    lll_rdm_msgs__msg__PlanningConsistencyMsgData__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__PlanningConsistencyMsgData__fini(lll_rdm_msgs__msg__PlanningConsistencyMsgData * msg)
{
  if (!msg) {
    return;
  }
  // consistent_lengths
  // consistent_state_size
  // consistent_input_size
  // strictly_sorted_time
  // acceleration_inconsistency
  // acceleration_inconsistency_values
  rosidl_runtime_c__double__Sequence__fini(&msg->acceleration_inconsistency_values);
}

bool
lll_rdm_msgs__msg__PlanningConsistencyMsgData__are_equal(const lll_rdm_msgs__msg__PlanningConsistencyMsgData * lhs, const lll_rdm_msgs__msg__PlanningConsistencyMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // consistent_lengths
  if (lhs->consistent_lengths != rhs->consistent_lengths) {
    return false;
  }
  // consistent_state_size
  if (lhs->consistent_state_size != rhs->consistent_state_size) {
    return false;
  }
  // consistent_input_size
  if (lhs->consistent_input_size != rhs->consistent_input_size) {
    return false;
  }
  // strictly_sorted_time
  if (lhs->strictly_sorted_time != rhs->strictly_sorted_time) {
    return false;
  }
  // acceleration_inconsistency
  if (lhs->acceleration_inconsistency != rhs->acceleration_inconsistency) {
    return false;
  }
  // acceleration_inconsistency_values
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->acceleration_inconsistency_values), &(rhs->acceleration_inconsistency_values)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__PlanningConsistencyMsgData__copy(
  const lll_rdm_msgs__msg__PlanningConsistencyMsgData * input,
  lll_rdm_msgs__msg__PlanningConsistencyMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // consistent_lengths
  output->consistent_lengths = input->consistent_lengths;
  // consistent_state_size
  output->consistent_state_size = input->consistent_state_size;
  // consistent_input_size
  output->consistent_input_size = input->consistent_input_size;
  // strictly_sorted_time
  output->strictly_sorted_time = input->strictly_sorted_time;
  // acceleration_inconsistency
  output->acceleration_inconsistency = input->acceleration_inconsistency;
  // acceleration_inconsistency_values
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->acceleration_inconsistency_values), &(output->acceleration_inconsistency_values)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__PlanningConsistencyMsgData *
lll_rdm_msgs__msg__PlanningConsistencyMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__PlanningConsistencyMsgData * msg = (lll_rdm_msgs__msg__PlanningConsistencyMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__PlanningConsistencyMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__PlanningConsistencyMsgData));
  bool success = lll_rdm_msgs__msg__PlanningConsistencyMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__PlanningConsistencyMsgData__destroy(lll_rdm_msgs__msg__PlanningConsistencyMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__PlanningConsistencyMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__init(lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__PlanningConsistencyMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__PlanningConsistencyMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__PlanningConsistencyMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__PlanningConsistencyMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__PlanningConsistencyMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__fini(lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__PlanningConsistencyMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence *
lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * array = (lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__destroy(lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * lhs, const lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__PlanningConsistencyMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * input,
  lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__PlanningConsistencyMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__PlanningConsistencyMsgData * data =
      (lll_rdm_msgs__msg__PlanningConsistencyMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__PlanningConsistencyMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__PlanningConsistencyMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__PlanningConsistencyMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
