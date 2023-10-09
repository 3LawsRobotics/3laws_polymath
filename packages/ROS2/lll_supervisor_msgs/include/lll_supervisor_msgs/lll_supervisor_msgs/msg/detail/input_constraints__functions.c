// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_supervisor_msgs:msg/InputConstraints.idl
// generated code does not contain a copyright notice
#include "lll_supervisor_msgs/msg/detail/input_constraints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lb`
// Member `m`
// Member `ub`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
lll_supervisor_msgs__msg__InputConstraints__init(lll_supervisor_msgs__msg__InputConstraints * msg)
{
  if (!msg) {
    return false;
  }
  // nu
  // n_cstr
  // lb
  if (!rosidl_runtime_c__double__Sequence__init(&msg->lb, 0)) {
    lll_supervisor_msgs__msg__InputConstraints__fini(msg);
    return false;
  }
  // m
  if (!rosidl_runtime_c__double__Sequence__init(&msg->m, 0)) {
    lll_supervisor_msgs__msg__InputConstraints__fini(msg);
    return false;
  }
  // ub
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ub, 0)) {
    lll_supervisor_msgs__msg__InputConstraints__fini(msg);
    return false;
  }
  return true;
}

void
lll_supervisor_msgs__msg__InputConstraints__fini(lll_supervisor_msgs__msg__InputConstraints * msg)
{
  if (!msg) {
    return;
  }
  // nu
  // n_cstr
  // lb
  rosidl_runtime_c__double__Sequence__fini(&msg->lb);
  // m
  rosidl_runtime_c__double__Sequence__fini(&msg->m);
  // ub
  rosidl_runtime_c__double__Sequence__fini(&msg->ub);
}

bool
lll_supervisor_msgs__msg__InputConstraints__are_equal(const lll_supervisor_msgs__msg__InputConstraints * lhs, const lll_supervisor_msgs__msg__InputConstraints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // nu
  if (lhs->nu != rhs->nu) {
    return false;
  }
  // n_cstr
  if (lhs->n_cstr != rhs->n_cstr) {
    return false;
  }
  // lb
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->lb), &(rhs->lb)))
  {
    return false;
  }
  // m
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->m), &(rhs->m)))
  {
    return false;
  }
  // ub
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ub), &(rhs->ub)))
  {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__msg__InputConstraints__copy(
  const lll_supervisor_msgs__msg__InputConstraints * input,
  lll_supervisor_msgs__msg__InputConstraints * output)
{
  if (!input || !output) {
    return false;
  }
  // nu
  output->nu = input->nu;
  // n_cstr
  output->n_cstr = input->n_cstr;
  // lb
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->lb), &(output->lb)))
  {
    return false;
  }
  // m
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->m), &(output->m)))
  {
    return false;
  }
  // ub
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ub), &(output->ub)))
  {
    return false;
  }
  return true;
}

lll_supervisor_msgs__msg__InputConstraints *
lll_supervisor_msgs__msg__InputConstraints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__InputConstraints * msg = (lll_supervisor_msgs__msg__InputConstraints *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__InputConstraints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__msg__InputConstraints));
  bool success = lll_supervisor_msgs__msg__InputConstraints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__msg__InputConstraints__destroy(lll_supervisor_msgs__msg__InputConstraints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__msg__InputConstraints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__msg__InputConstraints__Sequence__init(lll_supervisor_msgs__msg__InputConstraints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__InputConstraints * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__msg__InputConstraints *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__msg__InputConstraints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__msg__InputConstraints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__msg__InputConstraints__fini(&data[i - 1]);
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
lll_supervisor_msgs__msg__InputConstraints__Sequence__fini(lll_supervisor_msgs__msg__InputConstraints__Sequence * array)
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
      lll_supervisor_msgs__msg__InputConstraints__fini(&array->data[i]);
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

lll_supervisor_msgs__msg__InputConstraints__Sequence *
lll_supervisor_msgs__msg__InputConstraints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__msg__InputConstraints__Sequence * array = (lll_supervisor_msgs__msg__InputConstraints__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__msg__InputConstraints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__msg__InputConstraints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__msg__InputConstraints__Sequence__destroy(lll_supervisor_msgs__msg__InputConstraints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__msg__InputConstraints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__msg__InputConstraints__Sequence__are_equal(const lll_supervisor_msgs__msg__InputConstraints__Sequence * lhs, const lll_supervisor_msgs__msg__InputConstraints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__msg__InputConstraints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__msg__InputConstraints__Sequence__copy(
  const lll_supervisor_msgs__msg__InputConstraints__Sequence * input,
  lll_supervisor_msgs__msg__InputConstraints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__msg__InputConstraints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__msg__InputConstraints * data =
      (lll_supervisor_msgs__msg__InputConstraints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__msg__InputConstraints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__msg__InputConstraints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__msg__InputConstraints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
