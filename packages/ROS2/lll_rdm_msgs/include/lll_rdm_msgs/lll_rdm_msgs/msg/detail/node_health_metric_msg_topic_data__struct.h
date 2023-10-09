// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/NodeHealthMetricMsgTopicData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'topic_id'
#include "rosidl_runtime_c/string.h"
// Member 'sender_rate'
// Member 'receiver_rate'
// Member 'delay'
#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__struct.h"

/// Struct defined in msg/NodeHealthMetricMsgTopicData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData
{
  rosidl_runtime_c__String topic_id;
  bool timeout;
  int64_t time_since_last_msg;
  lll_rdm_msgs__msg__SignalAverageMsgData sender_rate;
  lll_rdm_msgs__msg__SignalAverageMsgData receiver_rate;
  lll_rdm_msgs__msg__SignalAverageMsgData delay;
} lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData;

// Struct for a sequence of lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData.
typedef struct lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence
{
  lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__NodeHealthMetricMsgTopicData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__NODE_HEALTH_METRIC_MSG_TOPIC_DATA__STRUCT_H_
