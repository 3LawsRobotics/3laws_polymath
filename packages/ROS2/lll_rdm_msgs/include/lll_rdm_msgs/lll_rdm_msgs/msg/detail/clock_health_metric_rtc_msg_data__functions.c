// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricRtcMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/clock_health_metric_rtc_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__init(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // timeout
  // time_since_last_msg
  // offset_from_rtc
  return true;
}

void
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__fini(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * msg)
{
  if (!msg) {
    return;
  }
  // timeout
  // time_since_last_msg
  // offset_from_rtc
}

bool
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__are_equal(const lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * lhs, const lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // time_since_last_msg
  if (lhs->time_since_last_msg != rhs->time_since_last_msg) {
    return false;
  }
  // offset_from_rtc
  if (lhs->offset_from_rtc != rhs->offset_from_rtc) {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__copy(
  const lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * input,
  lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // timeout
  output->timeout = input->timeout;
  // time_since_last_msg
  output->time_since_last_msg = input->time_since_last_msg;
  // offset_from_rtc
  output->offset_from_rtc = input->offset_from_rtc;
  return true;
}

lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData *
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * msg = (lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData));
  bool success = lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__destroy(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__init(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__fini(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence *
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * array = (lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__destroy(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * lhs, const lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * input,
  lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * data =
      (lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
