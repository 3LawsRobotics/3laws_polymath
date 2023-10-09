// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsgData.idl
// generated code does not contain a copyright notice
#include "lll_rdm_msgs/msg/detail/process_health_metric_msg_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__init(lll_rdm_msgs__msg__ProcessHealthMetricMsgData * msg)
{
  if (!msg) {
    return false;
  }
  // cpu_usage
  // cpu_usage_total
  // ram_usage
  // n_threads
  // process_up_time
  // process_run_time
  // io_total_read
  // io_total_write
  // io_disk_read
  // io_disk_write
  return true;
}

void
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__fini(lll_rdm_msgs__msg__ProcessHealthMetricMsgData * msg)
{
  if (!msg) {
    return;
  }
  // cpu_usage
  // cpu_usage_total
  // ram_usage
  // n_threads
  // process_up_time
  // process_run_time
  // io_total_read
  // io_total_write
  // io_disk_read
  // io_disk_write
}

bool
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__are_equal(const lll_rdm_msgs__msg__ProcessHealthMetricMsgData * lhs, const lll_rdm_msgs__msg__ProcessHealthMetricMsgData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // cpu_usage
  if (lhs->cpu_usage != rhs->cpu_usage) {
    return false;
  }
  // cpu_usage_total
  if (lhs->cpu_usage_total != rhs->cpu_usage_total) {
    return false;
  }
  // ram_usage
  if (lhs->ram_usage != rhs->ram_usage) {
    return false;
  }
  // n_threads
  if (lhs->n_threads != rhs->n_threads) {
    return false;
  }
  // process_up_time
  if (lhs->process_up_time != rhs->process_up_time) {
    return false;
  }
  // process_run_time
  if (lhs->process_run_time != rhs->process_run_time) {
    return false;
  }
  // io_total_read
  if (lhs->io_total_read != rhs->io_total_read) {
    return false;
  }
  // io_total_write
  if (lhs->io_total_write != rhs->io_total_write) {
    return false;
  }
  // io_disk_read
  if (lhs->io_disk_read != rhs->io_disk_read) {
    return false;
  }
  // io_disk_write
  if (lhs->io_disk_write != rhs->io_disk_write) {
    return false;
  }
  return true;
}

bool
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__copy(
  const lll_rdm_msgs__msg__ProcessHealthMetricMsgData * input,
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData * output)
{
  if (!input || !output) {
    return false;
  }
  // cpu_usage
  output->cpu_usage = input->cpu_usage;
  // cpu_usage_total
  output->cpu_usage_total = input->cpu_usage_total;
  // ram_usage
  output->ram_usage = input->ram_usage;
  // n_threads
  output->n_threads = input->n_threads;
  // process_up_time
  output->process_up_time = input->process_up_time;
  // process_run_time
  output->process_run_time = input->process_run_time;
  // io_total_read
  output->io_total_read = input->io_total_read;
  // io_total_write
  output->io_total_write = input->io_total_write;
  // io_disk_read
  output->io_disk_read = input->io_disk_read;
  // io_disk_write
  output->io_disk_write = input->io_disk_write;
  return true;
}

lll_rdm_msgs__msg__ProcessHealthMetricMsgData *
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData * msg = (lll_rdm_msgs__msg__ProcessHealthMetricMsgData *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ProcessHealthMetricMsgData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(lll_rdm_msgs__msg__ProcessHealthMetricMsgData));
  bool success = lll_rdm_msgs__msg__ProcessHealthMetricMsgData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__destroy(lll_rdm_msgs__msg__ProcessHealthMetricMsgData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    lll_rdm_msgs__msg__ProcessHealthMetricMsgData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__init(lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData * data = NULL;

  if (size) {
    data = (lll_rdm_msgs__msg__ProcessHealthMetricMsgData *)allocator.zero_allocate(size, sizeof(lll_rdm_msgs__msg__ProcessHealthMetricMsgData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = lll_rdm_msgs__msg__ProcessHealthMetricMsgData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        lll_rdm_msgs__msg__ProcessHealthMetricMsgData__fini(&data[i - 1]);
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
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__fini(lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * array)
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
      lll_rdm_msgs__msg__ProcessHealthMetricMsgData__fini(&array->data[i]);
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

lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence *
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * array = (lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence *)allocator.allocate(sizeof(lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__destroy(lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__are_equal(const lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * lhs, const lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!lll_rdm_msgs__msg__ProcessHealthMetricMsgData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence__copy(
  const lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * input,
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(lll_rdm_msgs__msg__ProcessHealthMetricMsgData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    lll_rdm_msgs__msg__ProcessHealthMetricMsgData * data =
      (lll_rdm_msgs__msg__ProcessHealthMetricMsgData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!lll_rdm_msgs__msg__ProcessHealthMetricMsgData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          lll_rdm_msgs__msg__ProcessHealthMetricMsgData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!lll_rdm_msgs__msg__ProcessHealthMetricMsgData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
