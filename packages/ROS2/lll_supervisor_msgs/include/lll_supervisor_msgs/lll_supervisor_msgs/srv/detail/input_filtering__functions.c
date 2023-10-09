// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_supervisor_msgs:srv/InputFiltering.idl
// generated code does not contain a copyright notice
#include "lll_supervisor_msgs/srv/detail/input_filtering__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `input_desired`
#include "lll_msgs/msg/detail/float64_vector_stamped__functions.h"

bool
lll_supervisor_msgs__srv__InputFiltering_Request__init(lll_supervisor_msgs__srv__InputFiltering_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input_desired
  if (!lll_msgs__msg__Float64VectorStamped__init(&msg->input_desired)) {
    lll_supervisor_msgs__srv__InputFiltering_Request__fini(msg);
    return false;
  }
  return true;
}

void
lll_supervisor_msgs__srv__InputFiltering_Request__fini(lll_supervisor_msgs__srv__InputFiltering_Request * msg)
{
  if (!msg) {
    return;
  }
  // input_desired
  lll_msgs__msg__Float64VectorStamped__fini(&msg->input_desired);
}

bool
lll_supervisor_msgs__srv__InputFiltering_Request__are_equal(const lll_supervisor_msgs__srv__InputFiltering_Request * lhs, const lll_supervisor_msgs__srv__InputFiltering_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input_desired
  if (!lll_msgs__msg__Float64VectorStamped__are_equal(
      &(lhs->input_desired), &(rhs->input_desired)))
  {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__srv__InputFiltering_Request__copy(
  const lll_supervisor_msgs__srv__InputFiltering_Request * input,
  lll_supervisor_msgs__srv__InputFiltering_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input_desired
  if (!lll_msgs__msg__Float64VectorStamped__copy(
      &(input->input_desired), &(output->input_desired)))
  {
    return false;
  }
  return true;
}

lll_supervisor_msgs__srv__InputFiltering_Request *
lll_supervisor_msgs__srv__InputFiltering_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__srv__InputFiltering_Request * msg = (lll_supervisor_msgs__srv__InputFiltering_Request *)allocator.allocate(sizeof(lll_supervisor_msgs__srv__InputFiltering_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__srv__InputFiltering_Request));
  bool success = lll_supervisor_msgs__srv__InputFiltering_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__srv__InputFiltering_Request__destroy(lll_supervisor_msgs__srv__InputFiltering_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__srv__InputFiltering_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__init(lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__srv__InputFiltering_Request * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__srv__InputFiltering_Request *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__srv__InputFiltering_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__srv__InputFiltering_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__srv__InputFiltering_Request__fini(&data[i - 1]);
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
lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__fini(lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * array)
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
      lll_supervisor_msgs__srv__InputFiltering_Request__fini(&array->data[i]);
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

lll_supervisor_msgs__srv__InputFiltering_Request__Sequence *
lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * array = (lll_supervisor_msgs__srv__InputFiltering_Request__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__srv__InputFiltering_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__destroy(lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__are_equal(const lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * lhs, const lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__srv__InputFiltering_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__srv__InputFiltering_Request__Sequence__copy(
  const lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * input,
  lll_supervisor_msgs__srv__InputFiltering_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__srv__InputFiltering_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__srv__InputFiltering_Request * data =
      (lll_supervisor_msgs__srv__InputFiltering_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__srv__InputFiltering_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__srv__InputFiltering_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__srv__InputFiltering_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `res`
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__functions.h"

bool
lll_supervisor_msgs__srv__InputFiltering_Response__init(lll_supervisor_msgs__srv__InputFiltering_Response * msg)
{
  if (!msg) {
    return false;
  }
  // ready
  // res
  if (!lll_supervisor_msgs__msg__InputFilteringResult__init(&msg->res)) {
    lll_supervisor_msgs__srv__InputFiltering_Response__fini(msg);
    return false;
  }
  return true;
}

void
lll_supervisor_msgs__srv__InputFiltering_Response__fini(lll_supervisor_msgs__srv__InputFiltering_Response * msg)
{
  if (!msg) {
    return;
  }
  // ready
  // res
  lll_supervisor_msgs__msg__InputFilteringResult__fini(&msg->res);
}

bool
lll_supervisor_msgs__srv__InputFiltering_Response__are_equal(const lll_supervisor_msgs__srv__InputFiltering_Response * lhs, const lll_supervisor_msgs__srv__InputFiltering_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ready
  if (lhs->ready != rhs->ready) {
    return false;
  }
  // res
  if (!lll_supervisor_msgs__msg__InputFilteringResult__are_equal(
      &(lhs->res), &(rhs->res)))
  {
    return false;
  }
  return true;
}

bool
lll_supervisor_msgs__srv__InputFiltering_Response__copy(
  const lll_supervisor_msgs__srv__InputFiltering_Response * input,
  lll_supervisor_msgs__srv__InputFiltering_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // ready
  output->ready = input->ready;
  // res
  if (!lll_supervisor_msgs__msg__InputFilteringResult__copy(
      &(input->res), &(output->res)))
  {
    return false;
  }
  return true;
}

lll_supervisor_msgs__srv__InputFiltering_Response *
lll_supervisor_msgs__srv__InputFiltering_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__srv__InputFiltering_Response * msg = (lll_supervisor_msgs__srv__InputFiltering_Response *)allocator.allocate(sizeof(lll_supervisor_msgs__srv__InputFiltering_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_supervisor_msgs__srv__InputFiltering_Response));
  bool success = lll_supervisor_msgs__srv__InputFiltering_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_supervisor_msgs__srv__InputFiltering_Response__destroy(lll_supervisor_msgs__srv__InputFiltering_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_supervisor_msgs__srv__InputFiltering_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__init(lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__srv__InputFiltering_Response * data = NULL;

  if (size) {
    data = (lll_supervisor_msgs__srv__InputFiltering_Response *)allocator.zero_allocate(size, sizeof(lll_supervisor_msgs__srv__InputFiltering_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_supervisor_msgs__srv__InputFiltering_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_supervisor_msgs__srv__InputFiltering_Response__fini(&data[i - 1]);
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
lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__fini(lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * array)
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
      lll_supervisor_msgs__srv__InputFiltering_Response__fini(&array->data[i]);
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

lll_supervisor_msgs__srv__InputFiltering_Response__Sequence *
lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * array = (lll_supervisor_msgs__srv__InputFiltering_Response__Sequence *)allocator.allocate(sizeof(lll_supervisor_msgs__srv__InputFiltering_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__destroy(lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__are_equal(const lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * lhs, const lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_supervisor_msgs__srv__InputFiltering_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_supervisor_msgs__srv__InputFiltering_Response__Sequence__copy(
  const lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * input,
  lll_supervisor_msgs__srv__InputFiltering_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_supervisor_msgs__srv__InputFiltering_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_supervisor_msgs__srv__InputFiltering_Response * data =
      (lll_supervisor_msgs__srv__InputFiltering_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_supervisor_msgs__srv__InputFiltering_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_supervisor_msgs__srv__InputFiltering_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_supervisor_msgs__srv__InputFiltering_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
