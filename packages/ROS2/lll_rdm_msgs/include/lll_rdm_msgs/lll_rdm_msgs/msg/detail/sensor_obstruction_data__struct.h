// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SensorObstructionData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SensorObstructionData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SensorObstructionData
{
  double start_angle;
  double end_angle;
  double min_dist;
  double max_dist;
  rosidl_runtime_c__String type;
} lll_rdm_msgs__msg__SensorObstructionData;

// Struct for a sequence of lll_rdm_msgs__msg__SensorObstructionData.
typedef struct lll_rdm_msgs__msg__SensorObstructionData__Sequence
{
  lll_rdm_msgs__msg__SensorObstructionData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SensorObstructionData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__STRUCT_H_
