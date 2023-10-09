// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/VectorMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__VECTOR_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__VECTOR_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/VectorMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__VectorMsgData
{
  rosidl_runtime_c__String id;
  rosidl_runtime_c__double__Sequence values;
} lll_rdm_msgs__msg__VectorMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__VectorMsgData.
typedef struct lll_rdm_msgs__msg__VectorMsgData__Sequence
{
  lll_rdm_msgs__msg__VectorMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__VectorMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__VECTOR_MSG_DATA__STRUCT_H_
