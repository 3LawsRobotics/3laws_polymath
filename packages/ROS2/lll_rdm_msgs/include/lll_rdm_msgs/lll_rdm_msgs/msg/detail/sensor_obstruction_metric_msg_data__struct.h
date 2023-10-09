// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'obstructions_by_sectors'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'obstructions'
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__struct.h"

/// Struct defined in msg/SensorObstructionMetricMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SensorObstructionMetricMsgData
{
  int64_t time_since_last_msg;
  rosidl_runtime_c__double__Sequence obstructions_by_sectors;
  lll_rdm_msgs__msg__SensorObstructionData__Sequence obstructions;
} lll_rdm_msgs__msg__SensorObstructionMetricMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__SensorObstructionMetricMsgData.
typedef struct lll_rdm_msgs__msg__SensorObstructionMetricMsgData__Sequence
{
  lll_rdm_msgs__msg__SensorObstructionMetricMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SensorObstructionMetricMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__STRUCT_H_
