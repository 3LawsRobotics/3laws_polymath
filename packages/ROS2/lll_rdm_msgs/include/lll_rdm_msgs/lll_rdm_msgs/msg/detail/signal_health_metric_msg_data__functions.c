// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/SignalHealthMetricMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/signal_health_metric_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `norm_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `values`
// Member `rates`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lll_rdm_msgs__msg__SignalHealthMetricMsgData__init(lll_rdm_msgs__msg__SignalHealthMetricMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // timeout
  // time_since_last_msg
  // wrong_size
  // bad_timestamp
  // has_nan
  // has_infinity
  // has_zero
  // has_subnormal
  // norm_type
  if (!rosidl_runtime_c__String__init(&msg->norm_type)) {
    lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(msg);
    return false;
  }
  // norm
  // values
  if (!rosidl_runtime_c__double__Sequence__init(&msg->values, 0)) {
    lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(msg);
    return false;
  }
  // rates
  if (!rosidl_runtime_c__double__Sequence__init(&msg->rates, 0)) {
    lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(msg);
    return false;
  }
  return true;
}

void
lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(lll_rdm_msgs__msg__SignalHealthMetricMsgData * msg)
{
  if (!msg) {
    return;
  }
  // timeout
  // time_since_last_msg
  // wrong_size
  // bad_timestamp
  // has_nan
  // has_infinity
  // has_zero
  // has_subnormal
  // norm_type
  rosidl_runtime_c__String__fini(&msg->norm_type);
  // norm
  // values
  rosidl_runtime_c__double__Sequence__fini(&msg->values);
  // rates
  rosidl_runtime_c__double__Sequence__fini(&msg->rates);
}

bool
lll_rdm_msgs__msg__SignalHealthMetricMsgData__are_equal(const lll_rdm_msgs__msg__SignalHealthMetricMsgData * lhs, const lll_rdm_msgs__msg__SignalHealthMetricMsgData * rhs)
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
  // wrong_size
  if (lhs->wrong_size != rhs->wrong_size) {
    return false;
  }
  // bad_timestamp
  if (lhs->bad_timestamp != rhs->bad_timestamp) {
    return false;
  }
  // has_nan
  if (lhs->has_nan != rhs->has_nan) {
    return false;
  }
  // has_infinity
  if (lhs->has_infinity != rhs->has_infinity) {
    return false;
  }
  // has_zero
  if (lhs->has_zero != rhs->has_zero) {
    return false;
  }
  // has_subnormal
  if (lhs->has_subnormal != rhs->has_subnormal) {
    return false;
  }
  // norm_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->norm_type), &(rhs->norm_type)))
  {
    return false;
  }
  // norm
  if (lhs->norm != rhs->norm) {
    return false;
  }
  // values
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->values), &(rhs->values)))
  {
    return false;
  }
  // rates
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->rates), &(rhs->rates)))
  {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__SignalHealthMetricMsgData__copy(
  const lll_rdm_msgs__msg__SignalHealthMetricMsgData * input,
  lll_rdm_msgs__msg__SignalHealthMetricMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // timeout
  output->timeout = input->timeout;
  // time_since_last_msg
  output->time_since_last_msg = input->time_since_last_msg;
  // wrong_size
  output->wrong_size = input->wrong_size;
  // bad_timestamp
  output->bad_timestamp = input->bad_timestamp;
  // has_nan
  output->has_nan = input->has_nan;
  // has_infinity
  output->has_infinity = input->has_infinity;
  // has_zero
  output->has_zero = input->has_zero;
  // has_subnormal
  output->has_subnormal = input->has_subnormal;
  // norm_type
  if (!rosidl_runtime_c__String__copy(
      &(input->norm_type), &(output->norm_type)))
  {
    return false;
  }
  // norm
  output->norm = input->norm;
  // values
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->values), &(output->values)))
  {
    return false;
  }
  // rates
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->rates), &(output->rates)))
  {
    return false;
  }
  return true;
}

lll_rdm_msgs__msg__SignalHealthMetricMsgData *
lll_rdm_msgs__msg__SignalHealthMetricMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SignalHealthMetricMsgData * msg = (lll_rdm_msgs__msg__SignalHealthMetricMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SignalHealthMetricMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__SignalHealthMetricMsgData));
  bool success = lll_rdm_msgs__msg__SignalHealthMetricMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__SignalHealthMetricMsgData__destroy(lll_rdm_msgs__msg__SignalHealthMetricMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__init(lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SignalHealthMetricMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__SignalHealthMetricMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__SignalHealthMetricMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__SignalHealthMetricMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__fini(lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence *
lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * array = (lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__destroy(lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * lhs, const lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__SignalHealthMetricMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * input,
  lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__SignalHealthMetricMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__SignalHealthMetricMsgData * data =
      (lll_rdm_msgs__msg__SignalHealthMetricMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__SignalHealthMetricMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__SignalHealthMetricMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__SignalHealthMetricMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
