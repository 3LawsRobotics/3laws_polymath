// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_supervisor_msgs:msg/RegulationData.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__STRUCT_H_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__STRUCT_H_

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
// Member 'input_cstr'
#include "lll_supervisor_msgs/msg/detail/input_constraints__struct.h"
// Member 'lfh'
// Member 'lgh'
// Member 'dh_dt'
// Member 'safety_val'
// Member 'failsafe_input'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/RegulationData in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__msg__RegulationData
{
  std_msgs__msg__Header header;
  int64_t t;
  uint64_t nu;
  uint64_t n_safety_cstr;
  uint64_t n_failsafes;
  lll_supervisor_msgs__msg__InputConstraints input_cstr;
  rosidl_runtime_c__double__Sequence lfh;
  rosidl_runtime_c__double__Sequence lgh;
  rosidl_runtime_c__double__Sequence dh_dt;
  rosidl_runtime_c__double__Sequence safety_val;
  rosidl_runtime_c__double__Sequence failsafe_input;
} lll_supervisor_msgs__msg__RegulationData;

// Struct for a sequence of lll_supervisor_msgs__msg__RegulationData.
typedef struct lll_supervisor_msgs__msg__RegulationData__Sequence
{
  lll_supervisor_msgs__msg__RegulationData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__msg__RegulationData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__STRUCT_H_
