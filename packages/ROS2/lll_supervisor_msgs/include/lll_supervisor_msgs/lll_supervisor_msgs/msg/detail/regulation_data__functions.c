// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_supervisor_msgs:msg/RegulationData.idl
// generated code does not contain a copyright notice
#include "lll_supervisor_msgs/msg/detail/regulation_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `input_cstr`
#include "lll_supervisor_msgs/msg/detail/input_constraints__functions.h"
// Member `lfh`
// Member `lgh`
// Member `dh_dt`
// Member `safety_val`
// Member `failsafe_input`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lll_supervisor_msgs__msg__RegulationData__init(lll_supervisor_msgs__msg__RegulationData * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
    return false;
  }
  // t
  // nu
  // n_safety_cstr
  // n_failsafes
  // input_cstr
  if (!lll_supervisor_msgs__msg__InputConstraints__init(&msg->input_cstr)) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
    return false;
  }
  // lfh
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lfh, 0)) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
    return false;
  }
  // lgh
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lgh, 0)) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
    return false;
  }
  // dh_dt
  if (!rosidl_runtime_c__double__Sequence__init(&msg->dh_dt, 0)) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
    return false;
  }
  // safety_val
  if (!rosidl_runtime_c__double__Sequence__init(&msg->safety_val, 0)) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
    return false;
  }
  // failsafe_input
  if (!rosidl_runtime_c__double__Sequence__init(&msg->failsafe_input, 0)) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
    return false;
  }
  return true;
}

void
lll_supervisor_msgs__msg__RegulationData__fini(lll_supervisor_msgs__msg__RegulationData * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // t
  // nu
  // n_safety_cstr
  // n_failsafes
  // input_cstr
  lll_supervisor_msgs__msg__InputConstraints__fini(&msg->input_cstr);
  // lfh
  rosidl_runtime_c__double__Sequence__fini(&msg->lfh);
  // lgh
  rosidl_runtime_c__double__Sequence__fini(&msg->lgh);
  // dh_dt
  rosidl_runtime_c__double__Sequence__fini(&msg->dh_dt);
  // safety_val
  rosidl_runtime_c__double__Sequence__fini(&msg->safety_val);
  // failsafe_input
  rosidl_runtime_c__double__Sequence__fini(&msg->failsafe_input);
}

bool
lll_supervisor_msgs__msg__RegulationData__are_equal(const lll_supervisor_msgs__msg__RegulationData * lhs, const lll_supervisor_msgs__msg__RegulationData * rhs)
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
  // t
  if (lhs->t != rhs->t) {
    return false;
  }
  // nu
  if (lhs->nu != rhs->nu) {
    return false;
  }
  // n_safety_cstr
  if (lhs->n_safety_cstr != rhs->n_safety_cstr) {
    return false;
  }
  // n_failsafes
  if (lhs->n_failsafes != rhs->n_failsafes) {
    return false;
  }
  // input_cstr
  if (!lll_supervisor_msgs__msg__InputConstraints__are_equal(
      &(lhs->input_cstr), &(rhs->input_cstr)))
  {
    return false;
  }
  // lfh
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lfh), &(rhs->lfh)))
  {
    return false;
  }
  // lgh
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lgh), &(rhs->lgh)))
  {
    return false;
  }
  // dh_dt
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->dh_dt), &(rhs->dh_dt)))
  {
    return false;
  }
  // safety_val
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->safety_val), &(rhs->safety_val)))
  {
    return false;
  }
  // failsafe_input
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->failsafe_input), &(rhs->failsafe_input)))
  {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__msg__RegulationData__copy(
  const lll_supervisor_msgs__msg__RegulationData * input,
  lll_supervisor_msgs__msg__RegulationData * output)
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
  // t
  output->t = input->t;
  // nu
  output->nu = input->nu;
  // n_safety_cstr
  output->n_safety_cstr = input->n_safety_cstr;
  // n_failsafes
  output->n_failsafes = input->n_failsafes;
  // input_cstr
  if (!lll_supervisor_msgs__msg__InputConstraints__copy(
      &(input->input_cstr), &(output->input_cstr)))
  {
    return false;
  }
  // lfh
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lfh), &(output->lfh)))
  {
    return false;
  }
  // lgh
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lgh), &(output->lgh)))
  {
    return false;
  }
  // dh_dt
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->dh_dt), &(output->dh_dt)))
  {
    return false;
  }
  // safety_val
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->safety_val), &(output->safety_val)))
  {
    return false;
  }
  // failsafe_input
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->failsafe_input), &(output->failsafe_input)))
  {
    return false;
  }
  return true;
}

lll_supervisor_msgs__msg__RegulationData *
lll_supervisor_msgs__msg__RegulationData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__RegulationData * msg = (lll_supervisor_msgs__msg__RegulationData *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__RegulationData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__msg__RegulationData));
  bool success = lll_supervisor_msgs__msg__RegulationData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__msg__RegulationData__destroy(lll_supervisor_msgs__msg__RegulationData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__msg__RegulationData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__msg__RegulationData__Sequence__init(lll_supervisor_msgs__msg__RegulationData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__RegulationData * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__msg__RegulationData *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__msg__RegulationData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__msg__RegulationData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__msg__RegulationData__fini(&data[i - 1]);
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
lll_supervisor_msgs__msg__RegulationData__Sequence__fini(lll_supervisor_msgs__msg__RegulationData__Sequence * array)
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
      lll_supervisor_msgs__msg__RegulationData__fini(&array->data[i]);
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

lll_supervisor_msgs__msg__RegulationData__Sequence *
lll_supervisor_msgs__msg__RegulationData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__RegulationData__Sequence * array = (lll_supervisor_msgs__msg__RegulationData__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__RegulationData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__msg__RegulationData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__msg__RegulationData__Sequence__destroy(lll_supervisor_msgs__msg__RegulationData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__msg__RegulationData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__msg__RegulationData__Sequence__are_equal(const lll_supervisor_msgs__msg__RegulationData__Sequence * lhs, const lll_supervisor_msgs__msg__RegulationData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__msg__RegulationData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__msg__RegulationData__Sequence__copy(
  const lll_supervisor_msgs__msg__RegulationData__Sequence * input,
  lll_supervisor_msgs__msg__RegulationData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__msg__RegulationData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__msg__RegulationData * data =
      (lll_supervisor_msgs__msg__RegulationData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__msg__RegulationData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__msg__RegulationData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__msg__RegulationData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
