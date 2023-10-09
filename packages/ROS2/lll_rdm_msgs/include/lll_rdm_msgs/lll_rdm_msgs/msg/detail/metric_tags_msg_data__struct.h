// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/MetricTagsMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__METRIC_TAGS_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__METRIC_TAGS_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MetricTagsMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__MetricTagsMsgData
{
  rosidl_runtime_c__String key;
  rosidl_runtime_c__String value;
} lll_rdm_msgs__msg__MetricTagsMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__MetricTagsMsgData.
typedef struct lll_rdm_msgs__msg__MetricTagsMsgData__Sequence
{
  lll_rdm_msgs__msg__MetricTagsMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__MetricTagsMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__METRIC_TAGS_MSG_DATA__STRUCT_H_
