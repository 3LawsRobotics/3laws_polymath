// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice
#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `input_desired`
// Member `input_actual`
// Member `input_failsafe`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `generation_extras`
// Member `filtering_extras`
#include "rosidl_runtime_c/string_functions.h"

bool
lll_supervisor_msgs__msg__SupervisorMetadata__init(lll_supervisor_msgs__msg__SupervisorMetadata * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lll_supervisor_msgs__msg__SupervisorMetadata__fini(msg);
    return false;
  }
  // t_state
  // t_input
  // input_desired
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input_desired, 0)) {
    lll_supervisor_msgs__msg__SupervisorMetadata__fini(msg);
    return false;
  }
  // input_actual
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input_actual, 0)) {
    lll_supervisor_msgs__msg__SupervisorMetadata__fini(msg);
    return false;
  }
  // input_failsafe
  if (!rosidl_runtime_c__double__Sequence__init(&msg->input_failsafe, 0)) {
    lll_supervisor_msgs__msg__SupervisorMetadata__fini(msg);
    return false;
  }
  // h_distance_current
  // h_current
  // h_predicted
  // input_modification
  // regulation_map_size
  // generation_extras
  if (!rosidl_runtime_c__String__Sequence__init(&msg->generation_extras, 0)) {
    lll_supervisor_msgs__msg__SupervisorMetadata__fini(msg);
    return false;
  }
  // filtering_extras
  if (!rosidl_runtime_c__String__Sequence__init(&msg->filtering_extras, 0)) {
    lll_supervisor_msgs__msg__SupervisorMetadata__fini(msg);
    return false;
  }
  return true;
}

void
lll_supervisor_msgs__msg__SupervisorMetadata__fini(lll_supervisor_msgs__msg__SupervisorMetadata * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // t_state
  // t_input
  // input_desired
  rosidl_runtime_c__double__Sequence__fini(&msg->input_desired);
  // input_actual
  rosidl_runtime_c__double__Sequence__fini(&msg->input_actual);
  // input_failsafe
  rosidl_runtime_c__double__Sequence__fini(&msg->input_failsafe);
  // h_distance_current
  // h_current
  // h_predicted
  // input_modification
  // regulation_map_size
  // generation_extras
  rosidl_runtime_c__String__Sequence__fini(&msg->generation_extras);
  // filtering_extras
  rosidl_runtime_c__String__Sequence__fini(&msg->filtering_extras);
}

bool
lll_supervisor_msgs__msg__SupervisorMetadata__are_equal(const lll_supervisor_msgs__msg__SupervisorMetadata * lhs, const lll_supervisor_msgs__msg__SupervisorMetadata * rhs)
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
  // t_state
  if (lhs->t_state != rhs->t_state) {
    return false;
  }
  // t_input
  if (lhs->t_input != rhs->t_input) {
    return false;
  }
  // input_desired
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input_desired), &(rhs->input_desired)))
  {
    return false;
  }
  // input_actual
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input_actual), &(rhs->input_actual)))
  {
    return false;
  }
  // input_failsafe
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->input_failsafe), &(rhs->input_failsafe)))
  {
    return false;
  }
  // h_distance_current
  if (lhs->h_distance_current != rhs->h_distance_current) {
    return false;
  }
  // h_current
  if (lhs->h_current != rhs->h_current) {
    return false;
  }
  // h_predicted
  if (lhs->h_predicted != rhs->h_predicted) {
    return false;
  }
  // input_modification
  if (lhs->input_modification != rhs->input_modification) {
    return false;
  }
  // regulation_map_size
  if (lhs->regulation_map_size != rhs->regulation_map_size) {
    return false;
  }
  // generation_extras
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->generation_extras), &(rhs->generation_extras)))
  {
    return false;
  }
  // filtering_extras
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->filtering_extras), &(rhs->filtering_extras)))
  {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__msg__SupervisorMetadata__copy(
  const lll_supervisor_msgs__msg__SupervisorMetadata * input,
  lll_supervisor_msgs__msg__SupervisorMetadata * output)
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
  // t_state
  output->t_state = input->t_state;
  // t_input
  output->t_input = input->t_input;
  // input_desired
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input_desired), &(output->input_desired)))
  {
    return false;
  }
  // input_actual
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input_actual), &(output->input_actual)))
  {
    return false;
  }
  // input_failsafe
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->input_failsafe), &(output->input_failsafe)))
  {
    return false;
  }
  // h_distance_current
  output->h_distance_current = input->h_distance_current;
  // h_current
  output->h_current = input->h_current;
  // h_predicted
  output->h_predicted = input->h_predicted;
  // input_modification
  output->input_modification = input->input_modification;
  // regulation_map_size
  output->regulation_map_size = input->regulation_map_size;
  // generation_extras
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->generation_extras), &(output->generation_extras)))
  {
    return false;
  }
  // filtering_extras
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->filtering_extras), &(output->filtering_extras)))
  {
    return false;
  }
  return true;
}

lll_supervisor_msgs__msg__SupervisorMetadata *
lll_supervisor_msgs__msg__SupervisorMetadata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__SupervisorMetadata * msg = (lll_supervisor_msgs__msg__SupervisorMetadata *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__SupervisorMetadata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__msg__SupervisorMetadata));
  bool success = lll_supervisor_msgs__msg__SupervisorMetadata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__msg__SupervisorMetadata__destroy(lll_supervisor_msgs__msg__SupervisorMetadata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__msg__SupervisorMetadata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__init(lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__SupervisorMetadata * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__msg__SupervisorMetadata *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__msg__SupervisorMetadata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__msg__SupervisorMetadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__msg__SupervisorMetadata__fini(&data[i - 1]);
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
lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__fini(lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * array)
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
      lll_supervisor_msgs__msg__SupervisorMetadata__fini(&array->data[i]);
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

lll_supervisor_msgs__msg__SupervisorMetadata__Sequence *
lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * array = (lll_supervisor_msgs__msg__SupervisorMetadata__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__SupervisorMetadata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__destroy(lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__are_equal(const lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * lhs, const lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__msg__SupervisorMetadata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__msg__SupervisorMetadata__Sequence__copy(
  const lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * input,
  lll_supervisor_msgs__msg__SupervisorMetadata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__msg__SupervisorMetadata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__msg__SupervisorMetadata * data =
      (lll_supervisor_msgs__msg__SupervisorMetadata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__msg__SupervisorMetadata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__msg__SupervisorMetadata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__msg__SupervisorMetadata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
