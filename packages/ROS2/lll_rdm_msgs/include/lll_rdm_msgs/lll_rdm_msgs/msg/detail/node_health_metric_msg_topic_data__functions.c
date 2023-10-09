// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgTopicData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/node_health_metric_msg_topic_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `topic_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `sender_rate`
// Member `receiver_rate`
// Member `delay`
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__functions.h"

bool
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__init(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * msg)
{
  if (!msg) {
    return false;
  }
  // topic_id
  if (!rosidl_runtime_c__String__init(&msg->topic_id)) {
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(msg);
    return false;
  }
  // timeout
  // time_since_last_msg
  // sender_rate
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__init(&msg->sender_rate)) {
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(msg);
    return false;
  }
  // receiver_rate
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__init(&msg->receiver_rate)) {
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(msg);
    return false;
  }
  // delay
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__init(&msg->delay)) {
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * msg)
{
  if (!msg) {
    return;
  }
  // topic_id
  rosidl_runtime_c__String__fini(&msg->topic_id);
  // timeout
  // time_since_last_msg
  // sender_rate
  lll_rdm_msgs__msg__SignalAverageMsgData__fini(&msg->sender_rate);
  // receiver_rate
  lll_rdm_msgs__msg__SignalAverageMsgData__fini(&msg->receiver_rate);
  // delay
  lll_rdm_msgs__msg__SignalAverageMsgData__fini(&msg->delay);
}

bool
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__are_equal(const lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * lhs, const lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // topic_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->topic_id), &(rhs->topic_id)))
  {
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
  // sender_rate
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__are_equal(
      &(lhs->sender_rate), &(rhs->sender_rate)))
  {
    return false;
  }
  // receiver_rate
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__are_equal(
      &(lhs->receiver_rate), &(rhs->receiver_rate)))
  {
    return false;
  }
  // delay
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__are_equal(
      &(lhs->delay), &(rhs->delay)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__copy(
  const lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * input,
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * output)
{
  if (!input || !output) {
    return false;
  }
  // topic_id
  if (!rosidl_runtime_c__String__copy(
      &(input->topic_id), &(output->topic_id)))
  {
    return false;
  }
  // timeout
  output->timeout = input->timeout;
  // time_since_last_msg
  output->time_since_last_msg = input->time_since_last_msg;
  // sender_rate
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__copy(
      &(input->sender_rate), &(output->sender_rate)))
  {
    return false;
  }
  // receiver_rate
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__copy(
      &(input->receiver_rate), &(output->receiver_rate)))
  {
    return false;
  }
  // delay
  if (!lll_rdm_msgs__msg__SignalAverageMsgData__copy(
      &(input->delay), &(output->delay)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData *
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * msg = (lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData));
  bool success = lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__destroy(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__init(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__fini(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * array)
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
      lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence *
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * array = (lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__destroy(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__are_equal(const lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * lhs, const lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence__copy(
  const lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * input,
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * data =
      (lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
