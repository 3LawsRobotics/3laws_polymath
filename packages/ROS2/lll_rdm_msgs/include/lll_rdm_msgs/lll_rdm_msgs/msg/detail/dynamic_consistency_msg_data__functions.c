// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `xdot_difference`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lll_rdm_msgs__msg__DynamicConsistencyMsgData__init(lll_rdm_msgs__msg__DynamicConsistencyMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // state_timeout
  // time_since_last_state_msg
  // input_timeout
  // time_since_last_input_msg
  // input_domain_value
  // state_domain_value
  // xdot_difference
  if (!rosidl_runtime_c__double__Sequence__init(&msg->xdot_difference, 0)) {
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(msg);
    return false;
  }
  // xdot_difference_pdf_value
  // xdot_difference_pdf_value_normalized
  // xdot_difference_norm_1sigma
  // xdot_difference_norm_2sigma
  // xdot_difference_norm_3sigma
  // system_degradation_probability
  return true;
}

void
lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(lll_rdm_msgs__msg__DynamicConsistencyMsgData * msg)
{
  if (!msg) {
    return;
  }
  // state_timeout
  // time_since_last_state_msg
  // input_timeout
  // time_since_last_input_msg
  // input_domain_value
  // state_domain_value
  // xdot_difference
  rosidl_runtime_c__double__Sequence__fini(&msg->xdot_difference);
  // xdot_difference_pdf_value
  // xdot_difference_pdf_value_normalized
  // xdot_difference_norm_1sigma
  // xdot_difference_norm_2sigma
  // xdot_difference_norm_3sigma
  // system_degradation_probability
}

bool
lll_rdm_msgs__msg__DynamicConsistencyMsgData__are_equal(const lll_rdm_msgs__msg__DynamicConsistencyMsgData * lhs, const lll_rdm_msgs__msg__DynamicConsistencyMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state_timeout
  if (lhs->state_timeout != rhs->state_timeout) {
    return false;
  }
  // time_since_last_state_msg
  if (lhs->time_since_last_state_msg != rhs->time_since_last_state_msg) {
    return false;
  }
  // input_timeout
  if (lhs->input_timeout != rhs->input_timeout) {
    return false;
  }
  // time_since_last_input_msg
  if (lhs->time_since_last_input_msg != rhs->time_since_last_input_msg) {
    return false;
  }
  // input_domain_value
  if (lhs->input_domain_value != rhs->input_domain_value) {
    return false;
  }
  // state_domain_value
  if (lhs->state_domain_value != rhs->state_domain_value) {
    return false;
  }
  // xdot_difference
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->xdot_difference), &(rhs->xdot_difference)))
  {
    return false;
  }
  // xdot_difference_pdf_value
  if (lhs->xdot_difference_pdf_value != rhs->xdot_difference_pdf_value) {
    return false;
  }
  // xdot_difference_pdf_value_normalized
  if (lhs->xdot_difference_pdf_value_normalized != rhs->xdot_difference_pdf_value_normalized) {
    return false;
  }
  // xdot_difference_norm_1sigma
  if (lhs->xdot_difference_norm_1sigma != rhs->xdot_difference_norm_1sigma) {
    return false;
  }
  // xdot_difference_norm_2sigma
  if (lhs->xdot_difference_norm_2sigma != rhs->xdot_difference_norm_2sigma) {
    return false;
  }
  // xdot_difference_norm_3sigma
  if (lhs->xdot_difference_norm_3sigma != rhs->xdot_difference_norm_3sigma) {
    return false;
  }
  // system_degradation_probability
  if (lhs->system_degradation_probability != rhs->system_degradation_probability) {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__DynamicConsistencyMsgData__copy(
  const lll_rdm_msgs__msg__DynamicConsistencyMsgData * input,
  lll_rdm_msgs__msg__DynamicConsistencyMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // state_timeout
  output->state_timeout = input->state_timeout;
  // time_since_last_state_msg
  output->time_since_last_state_msg = input->time_since_last_state_msg;
  // input_timeout
  output->input_timeout = input->input_timeout;
  // time_since_last_input_msg
  output->time_since_last_input_msg = input->time_since_last_input_msg;
  // input_domain_value
  output->input_domain_value = input->input_domain_value;
  // state_domain_value
  output->state_domain_value = input->state_domain_value;
  // xdot_difference
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->xdot_difference), &(output->xdot_difference)))
  {
    return false;
  }
  // xdot_difference_pdf_value
  output->xdot_difference_pdf_value = input->xdot_difference_pdf_value;
  // xdot_difference_pdf_value_normalized
  output->xdot_difference_pdf_value_normalized = input->xdot_difference_pdf_value_normalized;
  // xdot_difference_norm_1sigma
  output->xdot_difference_norm_1sigma = input->xdot_difference_norm_1sigma;
  // xdot_difference_norm_2sigma
  output->xdot_difference_norm_2sigma = input->xdot_difference_norm_2sigma;
  // xdot_difference_norm_3sigma
  output->xdot_difference_norm_3sigma = input->xdot_difference_norm_3sigma;
  // system_degradation_probability
  output->system_degradation_probability = input->system_degradation_probability;
  return true;
}

lll_rdm_msgs__msg__DynamicConsistencyMsgData *
lll_rdm_msgs__msg__DynamicConsistencyMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DynamicConsistencyMsgData * msg = (lll_rdm_msgs__msg__DynamicConsistencyMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__DynamicConsistencyMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__DynamicConsistencyMsgData));
  bool success = lll_rdm_msgs__msg__DynamicConsistencyMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__DynamicConsistencyMsgData__destroy(lll_rdm_msgs__msg__DynamicConsistencyMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__init(lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DynamicConsistencyMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__DynamicConsistencyMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__DynamicConsistencyMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__DynamicConsistencyMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__fini(lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence *
lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * array = (lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__destroy(lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * lhs, const lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__DynamicConsistencyMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * input,
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__DynamicConsistencyMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__DynamicConsistencyMsgData * data =
      (lll_rdm_msgs__msg__DynamicConsistencyMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__DynamicConsistencyMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__DynamicConsistencyMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
