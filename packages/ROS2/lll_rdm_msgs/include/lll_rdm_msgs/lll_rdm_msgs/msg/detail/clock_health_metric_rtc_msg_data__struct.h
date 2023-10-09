// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricRtcMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ClockHealthMetricRtcMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData
{
  bool timeout;
  int64_t time_since_last_msg;
  int64_t offset_from_rtc;
} lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData.
typedef struct lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence
{
  lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__ClockHealthMetricRtcMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_RTC_MSG_DATA__STRUCT_H_
