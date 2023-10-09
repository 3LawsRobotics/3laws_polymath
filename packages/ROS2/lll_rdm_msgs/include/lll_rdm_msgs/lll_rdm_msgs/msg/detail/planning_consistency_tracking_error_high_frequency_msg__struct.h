// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__STRUCT_H_

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
#include "lll_rdm_msgs/msg/detail/msg_header__struct.h"
// Member 'data'
#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__struct.h"
// Member 'tags'
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__struct.h"

/// Struct defined in msg/PlanningConsistencyTrackingErrorHighFrequencyMsg in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg
{
  lll_rdm_msgs__msg__MsgHeader header;
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData data;
  lll_rdm_msgs__msg__MetricTagsMsgData__Sequence tags;
} lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg;

// Struct for a sequence of lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg.
typedef struct lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence
{
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_TRACKING_ERROR_HIGH_FREQUENCY_MSG__STRUCT_H_
