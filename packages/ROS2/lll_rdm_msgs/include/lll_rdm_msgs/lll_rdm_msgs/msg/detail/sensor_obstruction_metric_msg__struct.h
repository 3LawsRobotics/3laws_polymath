// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "lll_rdm_msgs/msg/detail/msg_header__struct.h"
// Member 'data'
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg_data__struct.h"
// Member 'tags'
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__struct.h"

/// Struct defined in msg/SensorObstructionMetricMsg in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SensorObstructionMetricMsg
{
  lll_rdm_msgs__msg__MsgHeader header;
  lll_rdm_msgs__msg__SensorObstructionMetricMsgData data;
  lll_rdm_msgs__msg__MetricTagsMsgData__Sequence tags;
} lll_rdm_msgs__msg__SensorObstructionMetricMsg;

// Struct for a sequence of lll_rdm_msgs__msg__SensorObstructionMetricMsg.
typedef struct lll_rdm_msgs__msg__SensorObstructionMetricMsg__Sequence
{
  lll_rdm_msgs__msg__SensorObstructionMetricMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SensorObstructionMetricMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG__STRUCT_H_
