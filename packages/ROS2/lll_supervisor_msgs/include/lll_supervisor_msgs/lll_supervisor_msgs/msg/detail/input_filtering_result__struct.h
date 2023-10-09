// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_supervisor_msgs:msg/InputFilteringResult.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__STRUCT_H_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RC_OK'.
enum
{
  lll_supervisor_msgs__msg__InputFilteringResult__RC_OK = 1l
};

/// Constant 'RC_ERROR'.
enum
{
  lll_supervisor_msgs__msg__InputFilteringResult__RC_ERROR = -1l
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'input_desired'
// Member 'input_filtered'
// Member 'input_failsafe'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/InputFilteringResult in the package lll_supervisor_msgs.
typedef struct lll_supervisor_msgs__msg__InputFilteringResult
{
  std_msgs__msg__Header header;
  int64_t t_input_desired;
  int64_t t_regulation_data;
  uint64_t nu;
  int32_t return_code;
  rosidl_runtime_c__double__Sequence input_desired;
  rosidl_runtime_c__double__Sequence input_filtered;
  rosidl_runtime_c__double__Sequence input_failsafe;
} lll_supervisor_msgs__msg__InputFilteringResult;

// Struct for a sequence of lll_supervisor_msgs__msg__InputFilteringResult.
typedef struct lll_supervisor_msgs__msg__InputFilteringResult__Sequence
{
  lll_supervisor_msgs__msg__InputFilteringResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_supervisor_msgs__msg__InputFilteringResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__INPUT_FILTERING_RESULT__STRUCT_H_
