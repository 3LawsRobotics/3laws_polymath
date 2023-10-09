// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `system_status`
// Member `behavior_status`
// Member `hardware_status`
// Member `perception_status`
// Member `control_status`
#include "rosidl_runtime_c/string_functions.h"

bool
lll_rdm_msgs__msg__DomainStatusMetricMsgData__init(lll_rdm_msgs__msg__DomainStatusMetricMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // system_status
  if (!rosidl_runtime_c__String__init(&msg->system_status)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(msg);
    return false;
  }
  // behavior_status
  if (!rosidl_runtime_c__String__init(&msg->behavior_status)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(msg);
    return false;
  }
  // hardware_status
  if (!rosidl_runtime_c__String__init(&msg->hardware_status)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(msg);
    return false;
  }
  // perception_status
  if (!rosidl_runtime_c__String__init(&msg->perception_status)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(msg);
    return false;
  }
  // control_status
  if (!rosidl_runtime_c__String__init(&msg->control_status)) {
    lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(lll_rdm_msgs__msg__DomainStatusMetricMsgData * msg)
{
  if (!msg) {
    return;
  }
  // system_status
  rosidl_runtime_c__String__fini(&msg->system_status);
  // behavior_status
  rosidl_runtime_c__String__fini(&msg->behavior_status);
  // hardware_status
  rosidl_runtime_c__String__fini(&msg->hardware_status);
  // perception_status
  rosidl_runtime_c__String__fini(&msg->perception_status);
  // control_status
  rosidl_runtime_c__String__fini(&msg->control_status);
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsgData__are_equal(const lll_rdm_msgs__msg__DomainStatusMetricMsgData * lhs, const lll_rdm_msgs__msg__DomainStatusMetricMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // system_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->system_status), &(rhs->system_status)))
  {
    return false;
  }
  // behavior_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->behavior_status), &(rhs->behavior_status)))
  {
    return false;
  }
  // hardware_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->hardware_status), &(rhs->hardware_status)))
  {
    return false;
  }
  // perception_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->perception_status), &(rhs->perception_status)))
  {
    return false;
  }
  // control_status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->control_status), &(rhs->control_status)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsgData__copy(
  const lll_rdm_msgs__msg__DomainStatusMetricMsgData * input,
  lll_rdm_msgs__msg__DomainStatusMetricMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // system_status
  if (!rosidl_runtime_c__String__copy(
      &(input->system_status), &(output->system_status)))
  {
    return false;
  }
  // behavior_status
  if (!rosidl_runtime_c__String__copy(
      &(input->behavior_status), &(output->behavior_status)))
  {
    return false;
  }
  // hardware_status
  if (!rosidl_runtime_c__String__copy(
      &(input->hardware_status), &(output->hardware_status)))
  {
    return false;
  }
  // perception_status
  if (!rosidl_runtime_c__String__copy(
      &(input->perception_status), &(output->perception_status)))
  {
    return false;
  }
  // control_status
  if (!rosidl_runtime_c__String__copy(
      &(input->control_status), &(output->control_status)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__DomainStatusMetricMsgData *
lll_rdm_msgs__msg__DomainStatusMetricMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DomainStatusMetricMsgData * msg = (lll_rdm_msgs__msg__DomainStatusMetricMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsgData));
  bool success = lll_rdm_msgs__msg__DomainStatusMetricMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__DomainStatusMetricMsgData__destroy(lll_rdm_msgs__msg__DomainStatusMetricMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__init(lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DomainStatusMetricMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__DomainStatusMetricMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__DomainStatusMetricMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__fini(lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence *
lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * array = (lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__destroy(lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * lhs, const lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__DomainStatusMetricMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * input,
  lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__DomainStatusMetricMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__DomainStatusMetricMsgData * data =
      (lll_rdm_msgs__msg__DomainStatusMetricMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__DomainStatusMetricMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__DomainStatusMetricMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__DomainStatusMetricMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
