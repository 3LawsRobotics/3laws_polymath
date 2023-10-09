// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'system_status'
// Member 'behavior_status'
// Member 'hardware_status'
// Member 'perception_status'
// Member 'control_status'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DomainStatusMetricMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__DomainStatusMetricMsgData
{
  rosidl_runtime_c__String system_status;
  rosidl_runtime_c__String behavior_status;
  rosidl_runtime_c__String hardware_status;
  rosidl_runtime_c__String perception_status;
  rosidl_runtime_c__String control_status;
} lll_rdm_msgs__msg__DomainStatusMetricMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__DomainStatusMetricMsgData.
typedef struct lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence
{
  lll_rdm_msgs__msg__DomainStatusMetricMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__DomainStatusMetricMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__STRUCT_H_
