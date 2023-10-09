// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'acceleration_inconsistency_values'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/PlanningConsistencyMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__PlanningConsistencyMsgData
{
  bool consistent_lengths;
  bool consistent_state_size;
  bool consistent_input_size;
  bool strictly_sorted_time;
  double acceleration_inconsistency;
  rosidl_runtime_c__double__Sequence acceleration_inconsistency_values;
} lll_rdm_msgs__msg__PlanningConsistencyMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__PlanningConsistencyMsgData.
typedef struct lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence
{
  lll_rdm_msgs__msg__PlanningConsistencyMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__PlanningConsistencyMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PLANNING_CONSISTENCY_MSG_DATA__STRUCT_H_
