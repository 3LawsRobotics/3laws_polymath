// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_supervisor_msgs:msg/ObjectDetection2D.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_H_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ObjectDetection2D in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__msg__ObjectDetection2D
{
  uint64_t track_id;
  rosidl_runtime_c__String class_name;
  double x_center;
  double y_center;
  double x_radius;
  double y_radius;
  double safety_index;
} lll_supervisor_msgs__msg__ObjectDetection2D;

// Struct for a sequence of lll_supervisor_msgs__msg__ObjectDetection2D.
typedef struct lll_supervisor_msgs__msg__ObjectDetection2D__Sequence
{
  lll_supervisor_msgs__msg__ObjectDetection2D * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__msg__ObjectDetection2D__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__OBJECT_DETECTION2_D__STRUCT_H_
