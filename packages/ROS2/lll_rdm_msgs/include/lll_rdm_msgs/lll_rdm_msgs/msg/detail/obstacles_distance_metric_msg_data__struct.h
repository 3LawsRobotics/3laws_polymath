// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/ObstaclesDistanceMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'min_dist_sensor_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ObstaclesDistanceMetricMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData
{
  bool timeout;
  int64_t time_since_last_msg;
  double min_dist;
  rosidl_runtime_c__String min_dist_sensor_id;
} lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData.
typedef struct lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence
{
  lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__ObstaclesDistanceMetricMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__OBSTACLES_DISTANCE_METRIC_MSG_DATA__STRUCT_H_
