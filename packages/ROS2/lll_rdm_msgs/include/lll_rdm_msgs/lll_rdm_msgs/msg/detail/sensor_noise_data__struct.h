// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorNoiseData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SensorNoiseData
{
  double average_std_error;
  double max_std_error;
  double angle_max_error;
  double percent_of_sigma;
  double p_value;
  bool reject_model;
} lll_rdm_msgs__msg__SensorNoiseData;

// Struct for a sequence of lll_rdm_msgs__msg__SensorNoiseData.
typedef struct lll_rdm_msgs__msg__SensorNoiseData__Sequence
{
  lll_rdm_msgs__msg__SensorNoiseData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SensorNoiseData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__STRUCT_H_
