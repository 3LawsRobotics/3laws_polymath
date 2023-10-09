// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_supervisor_msgs:msg/InputFilteringResult.idl
// generated code does not contain a copyright notice
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `input_desired`
// Member `input_filtered`
// Member `input_failsafe`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lll_supervisor_msgs__msg__InputFilteringResult__init(lll_supervisor_msgs__msg__InputFilteringResult * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lll_supervisor_msgs__msg__InputFilteringResult__fini(msg);
    return false;
  }
  // t_input_desired
  // t_regulation_data
  // nu
  // return_code
  // input_desired
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input_desired, 0)) {
    lll_supervisor_msgs__msg__InputFilteringResult__fini(msg);
    return false;
  }
  // input_filtered
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input_filtered, 0)) {
    lll_supervisor_msgs__msg__InputFilteringResult__fini(msg);
    return false;
  }
  // input_failsafe
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input_failsafe, 0)) {
    lll_supervisor_msgs__msg__InputFilteringResult__fini(msg);
    return false;
  }
  return true;
}

void
lll_supervisor_msgs__msg__InputFilteringResult__fini(lll_supervisor_msgs__msg__InputFilteringResult * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // t_input_desired
  // t_regulation_data
  // nu
  // return_code
  // input_desired
  rosidl_runtime_c__double__Sequence__fini(&msg->input_desired);
  // input_filtered
  rosidl_runtime_c__double__Sequence__fini(&msg->input_filtered);
  // input_failsafe
  rosidl_runtime_c__double__Sequence__fini(&msg->input_failsafe);
}

bool
lll_supervisor_msgs__msg__InputFilteringResult__are_equal(const lll_supervisor_msgs__msg__InputFilteringResult * lhs, const lll_supervisor_msgs__msg__InputFilteringResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // t_input_desired
  if (lhs->t_input_desired != rhs->t_input_desired) {
    return false;
  }
  // t_regulation_data
  if (lhs->t_regulation_data != rhs->t_regulation_data) {
    return false;
  }
  // nu
  if (lhs->nu != rhs->nu) {
    return false;
  }
  // return_code
  if (lhs->return_code != rhs->return_code) {
    return false;
  }
  // input_desired
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input_desired), &(rhs->input_desired)))
  {
    return false;
  }
  // input_filtered
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input_filtered), &(rhs->input_filtered)))
  {
    return false;
  }
  // input_failsafe
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input_failsafe), &(rhs->input_failsafe)))
  {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__msg__InputFilteringResult__copy(
  const lll_supervisor_msgs__msg__InputFilteringResult * input,
  lll_supervisor_msgs__msg__InputFilteringResult * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // t_input_desired
  output->t_input_desired = input->t_input_desired;
  // t_regulation_data
  output->t_regulation_data = input->t_regulation_data;
  // nu
  output->nu = input->nu;
  // return_code
  output->return_code = input->return_code;
  // input_desired
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input_desired), &(output->input_desired)))
  {
    return false;
  }
  // input_filtered
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input_filtered), &(output->input_filtered)))
  {
    return false;
  }
  // input_failsafe
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input_failsafe), &(output->input_failsafe)))
  {
    return false;
  }
  return true;
}

lll_supervisor_msgs__msg__InputFilteringResult *
lll_supervisor_msgs__msg__InputFilteringResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__InputFilteringResult * msg = (lll_supervisor_msgs__msg__InputFilteringResult *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__InputFilteringResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__msg__InputFilteringResult));
  bool success = lll_supervisor_msgs__msg__InputFilteringResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__msg__InputFilteringResult__destroy(lll_supervisor_msgs__msg__InputFilteringResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__msg__InputFilteringResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__msg__InputFilteringResult__Sequence__init(lll_supervisor_msgs__msg__InputFilteringResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__InputFilteringResult * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__msg__InputFilteringResult *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__msg__InputFilteringResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__msg__InputFilteringResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__msg__InputFilteringResult__fini(&data[i - 1]);
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
lll_supervisor_msgs__msg__InputFilteringResult__Sequence__fini(lll_supervisor_msgs__msg__InputFilteringResult__Sequence * array)
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
      lll_supervisor_msgs__msg__InputFilteringResult__fini(&array->data[i]);
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

lll_supervisor_msgs__msg__InputFilteringResult__Sequence *
lll_supervisor_msgs__msg__InputFilteringResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__InputFilteringResult__Sequence * array = (lll_supervisor_msgs__msg__InputFilteringResult__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__InputFilteringResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__msg__InputFilteringResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__msg__InputFilteringResult__Sequence__destroy(lll_supervisor_msgs__msg__InputFilteringResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__msg__InputFilteringResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__msg__InputFilteringResult__Sequence__are_equal(const lll_supervisor_msgs__msg__InputFilteringResult__Sequence * lhs, const lll_supervisor_msgs__msg__InputFilteringResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__msg__InputFilteringResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__msg__InputFilteringResult__Sequence__copy(
  const lll_supervisor_msgs__msg__InputFilteringResult__Sequence * input,
  lll_supervisor_msgs__msg__InputFilteringResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__msg__InputFilteringResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__msg__InputFilteringResult * data =
      (lll_supervisor_msgs__msg__InputFilteringResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__msg__InputFilteringResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__msg__InputFilteringResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__msg__InputFilteringResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
