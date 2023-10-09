// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricUtcMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ClockHealthMetricUtcMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData
{
  bool has_utc;
  int64_t utc_time;
  int64_t rtc_time;
  int64_t offset_from_utc;
} lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData.
typedef struct lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence
{
  lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__ClockHealthMetricUtcMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__STRUCT_H_
