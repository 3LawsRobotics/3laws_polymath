// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ProcessHealthMetricMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__ProcessHealthMetricMsgData
{
  double cpu_usage;
  double cpu_usage_total;
  uint64_t ram_usage;
  uint64_t n_threads;
  double process_up_time;
  double process_run_time;
  uint64_t io_total_read;
  uint64_t io_total_write;
  uint64_t io_disk_read;
  uint64_t io_disk_write;
} lll_rdm_msgs__msg__ProcessHealthMetricMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__ProcessHealthMetricMsgData.
typedef struct lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence
{
  lll_rdm_msgs__msg__ProcessHealthMetricMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__ProcessHealthMetricMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__STRUCT_H_
