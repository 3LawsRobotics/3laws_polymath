// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SignalAverageMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SignalAverageMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SignalAverageMsgData
{
  double average;
  double min;
  double max;
} lll_rdm_msgs__msg__SignalAverageMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__SignalAverageMsgData.
typedef struct lll_rdm_msgs__msg__SignalAverageMsgData__Sequence
{
  lll_rdm_msgs__msg__SignalAverageMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SignalAverageMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__STRUCT_H_
