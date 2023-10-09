// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tracking_error'
// Member 'desired'
// Member 'actual'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData
{
  rosidl_runtime_c__double__Sequence tracking_error;
  rosidl_runtime_c__double__Sequence desired;
  rosidl_runtime_c__double__Sequence actual;
} lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData.
typedef struct lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence
{
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG_DATA__STRUCT_H_
