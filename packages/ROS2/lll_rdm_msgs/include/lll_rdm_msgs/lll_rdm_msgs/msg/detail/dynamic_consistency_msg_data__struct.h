// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'xdot_difference'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/DynamicConsistencyMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__DynamicConsistencyMsgData
{
  bool state_timeout;
  int64_t time_since_last_state_msg;
  bool input_timeout;
  int64_t time_since_last_input_msg;
  double input_domain_value;
  double state_domain_value;
  rosidl_runtime_c__double__Sequence xdot_difference;
  double xdot_difference_pdf_value;
  double xdot_difference_pdf_value_normalized;
  double xdot_difference_norm_1sigma;
  double xdot_difference_norm_2sigma;
  double xdot_difference_norm_3sigma;
  double system_degradation_probability;
} lll_rdm_msgs__msg__DynamicConsistencyMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__DynamicConsistencyMsgData.
typedef struct lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence
{
  lll_rdm_msgs__msg__DynamicConsistencyMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__DynamicConsistencyMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DYNAMIC_CONSISTENCY_MSG_DATA__STRUCT_H_
