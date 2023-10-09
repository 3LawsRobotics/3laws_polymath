// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SignalHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'norm_type'
#include "rosidl_runtime_c/string.h"
// Member 'values'
// Member 'rates'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SignalHealthMetricMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SignalHealthMetricMsgData
{
  bool timeout;
  int64_t time_since_last_msg;
  bool wrong_size;
  bool bad_timestamp;
  bool has_nan;
  bool has_infinity;
  bool has_zero;
  bool has_subnormal;
  rosidl_runtime_c__String norm_type;
  double norm;
  rosidl_runtime_c__double__Sequence values;
  rosidl_runtime_c__double__Sequence rates;
} lll_rdm_msgs__msg__SignalHealthMetricMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__SignalHealthMetricMsgData.
typedef struct lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence
{
  lll_rdm_msgs__msg__SignalHealthMetricMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SignalHealthMetricMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__STRUCT_H_
