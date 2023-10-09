// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricUtcMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/clock_health_metric_utc_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__init(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // has_utc
  // utc_time
  // rtc_time
  // offset_from_utc
  return true;
}

void
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__fini(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * msg)
{
  if (!msg) {
    return;
  }
  // has_utc
  // utc_time
  // rtc_time
  // offset_from_utc
}

bool
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__are_equal(const lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * lhs, const lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // has_utc
  if (lhs->has_utc != rhs->has_utc) {
    return false;
  }
  // utc_time
  if (lhs->utc_time != rhs->utc_time) {
    return false;
  }
  // rtc_time
  if (lhs->rtc_time != rhs->rtc_time) {
    return false;
  }
  // offset_from_utc
  if (lhs->offset_from_utc != rhs->offset_from_utc) {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__copy(
  const lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * input,
  lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // has_utc
  output->has_utc = input->has_utc;
  // utc_time
  output->utc_time = input->utc_time;
  // rtc_time
  output->rtc_time = input->rtc_time;
  // offset_from_utc
  output->offset_from_utc = input->offset_from_utc;
  return true;
}

lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData *
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * msg = (lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData));
  bool success = lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__destroy(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__init(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__fini(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence *
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * array = (lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__destroy(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * lhs, const lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * input,
  lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * data =
      (lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
