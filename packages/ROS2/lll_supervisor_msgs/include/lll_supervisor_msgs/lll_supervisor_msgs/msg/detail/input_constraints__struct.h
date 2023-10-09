// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_supervisor_msgs:msg/InputConstraints.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__STRUCT_H_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lb'
// Member 'm'
// Member 'ub'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/InputConstraints in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__msg__InputConstraints
{
  /// Number of inputs
  uint64_t nu;
  /// Number of input constraints
  uint64_t n_cstr;
  /// Lower bounds
  rosidl_runtime_c__double__Sequence lb;
  /// Transfrom matrix
  rosidl_runtime_c__double__Sequence m;
  /// Upper bounds
  rosidl_runtime_c__double__Sequence ub;
} lll_supervisor_msgs__msg__InputConstraints;

// Struct for a sequence of lll_supervisor_msgs__msg__InputConstraints.
typedef struct lll_supervisor_msgs__msg__InputConstraints__Sequence
{
  lll_supervisor_msgs__msg__InputConstraints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__msg__InputConstraints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_CONSTRAINTS__STRUCT_H_
