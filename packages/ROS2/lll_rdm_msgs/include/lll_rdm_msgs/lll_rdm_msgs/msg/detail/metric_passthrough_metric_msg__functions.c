// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/MetricPassthroughMetricMsg.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "lll_rdm_msgs/msg/detail/msg_header__functions.h"
// Member `data`
#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg_data__functions.h"
// Member `tags`
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__functions.h"

bool
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__init(lll_rdm_msgs__msg__MetricPassthroughMetricMsg * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!lll_rdm_msgs__msg__MsgHeader__init(&msg->header)) {
    lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(msg);
    return false;
  }
  // data
  if (!lll_rdm_msgs__msg__MetricPassthroughMetricMsgData__init(&msg->data)) {
    lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(msg);
    return false;
  }
  // tags
  if (!lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__init(&msg->tags, 0)) {
    lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(lll_rdm_msgs__msg__MetricPassthroughMetricMsg * msg)
{
  if (!msg) {
    return;
  }
  // header
  lll_rdm_msgs__msg__MsgHeader__fini(&msg->header);
  // data
  lll_rdm_msgs__msg__MetricPassthroughMetricMsgData__fini(&msg->data);
  // tags
  lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__fini(&msg->tags);
}

bool
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__are_equal(const lll_rdm_msgs__msg__MetricPassthroughMetricMsg * lhs, const lll_rdm_msgs__msg__MetricPassthroughMetricMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!lll_rdm_msgs__msg__MsgHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // data
  if (!lll_rdm_msgs__msg__MetricPassthroughMetricMsgData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // tags
  if (!lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__are_equal(
      &(lhs->tags), &(rhs->tags)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__copy(
  const lll_rdm_msgs__msg__MetricPassthroughMetricMsg * input,
  lll_rdm_msgs__msg__MetricPassthroughMetricMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!lll_rdm_msgs__msg__MsgHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // data
  if (!lll_rdm_msgs__msg__MetricPassthroughMetricMsgData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // tags
  if (!lll_rdm_msgs__msg__MetricTagsMsgData__Sequence__copy(
      &(input->tags), &(output->tags)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__MetricPassthroughMetricMsg *
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__MetricPassthroughMetricMsg * msg = (lll_rdm_msgs__msg__MetricPassthroughMetricMsg *)allocator.allocate(sizeof(lll_rdm_msgs__msg__MetricPassthroughMetricMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__MetricPassthroughMetricMsg));
  bool success = lll_rdm_msgs__msg__MetricPassthroughMetricMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__destroy(lll_rdm_msgs__msg__MetricPassthroughMetricMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__init(lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__MetricPassthroughMetricMsg * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__MetricPassthroughMetricMsg *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__MetricPassthroughMetricMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__MetricPassthroughMetricMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__fini(lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * array)
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
      lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(&array->data[i]);
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

lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence *
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * array = (lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__destroy(lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__are_equal(const lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * lhs, const lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__MetricPassthroughMetricMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence__copy(
  const lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * input,
  lll_rdm_msgs__msg__MetricPassthroughMetricMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__MetricPassthroughMetricMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__MetricPassthroughMetricMsg * data =
      (lll_rdm_msgs__msg__MetricPassthroughMetricMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__MetricPassthroughMetricMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__MetricPassthroughMetricMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__MetricPassthroughMetricMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}