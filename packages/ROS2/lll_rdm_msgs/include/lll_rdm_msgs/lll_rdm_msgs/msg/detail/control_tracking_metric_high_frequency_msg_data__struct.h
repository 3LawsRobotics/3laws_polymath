// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/ControlTrackingMetricHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tracking_error'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ControlTrackingMetricHighFrequencyMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData
{
  rosidl_runtime_c__double__Sequence tracking_error;
} lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData.
typedef struct lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData__Sequence
{
  lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__ControlTrackingMetricHighFrequencyMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CONTROL_TRACKING_METRIC_HIGH_FREQUENCY_MSG_DATA__STRUCT_H_
