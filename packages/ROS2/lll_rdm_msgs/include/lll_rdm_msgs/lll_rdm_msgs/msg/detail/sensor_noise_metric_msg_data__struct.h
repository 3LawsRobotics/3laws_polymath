// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SensorNoiseMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'noise_data'
#include "lll_rdm_msgs/msg/detail/sensor_noise_data__struct.h"

/// Struct defined in msg/SensorNoiseMetricMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SensorNoiseMetricMsgData
{
  int64_t time_since_last_msg;
  lll_rdm_msgs__msg__SensorNoiseData noise_data;
} lll_rdm_msgs__msg__SensorNoiseMetricMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__SensorNoiseMetricMsgData.
typedef struct lll_rdm_msgs__msg__SensorNoiseMetricMsgData__Sequence
{
  lll_rdm_msgs__msg__SensorNoiseMetricMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SensorNoiseMetricMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG_DATA__STRUCT_H_
