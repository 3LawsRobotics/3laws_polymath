// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_msgs:msg/Float64VectorStamped.idl
// generated code does not contain a copyright notice

#ifndef LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__STRUCT_H_
#define LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__STRUCT_H_

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
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Float64VectorStamped in the package lll_msgs.
typedef struct lll_msgs__msg__Float64VectorStamped
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__double__Sequence data;
} lll_msgs__msg__Float64VectorStamped;

// Struct for a sequence of lll_msgs__msg__Float64VectorStamped.
typedef struct lll_msgs__msg__Float64VectorStamped__Sequence
{
  lll_msgs__msg__Float64VectorStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_msgs__msg__Float64VectorStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_MSGS__MSG__DETAIL__FLOAT64_VECTOR_STAMPED__STRUCT_H_
