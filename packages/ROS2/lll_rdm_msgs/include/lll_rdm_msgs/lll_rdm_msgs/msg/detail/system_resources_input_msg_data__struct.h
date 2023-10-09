// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from lll_rdm_msgs:msg/SystemResourcesInputMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__STRUCT_H_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'system_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/SystemResourcesInputMsgData in the package lll_rdm_msgs.
typedef struct lll_rdm_msgs__msg__SystemResourcesInputMsgData
{
  rosidl_runtime_c__String system_id;
  double cpu_load;
  double ram_usage;
  double disk_usage;
  double network_read;
  double network_write;
  uint32_t cpu_nb;
  uint32_t procs_nb;
} lll_rdm_msgs__msg__SystemResourcesInputMsgData;

// Struct for a sequence of lll_rdm_msgs__msg__SystemResourcesInputMsgData.
typedef struct lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence
{
  lll_rdm_msgs__msg__SystemResourcesInputMsgData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} lll_rdm_msgs__msg__SystemResourcesInputMsgData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__STRUCT_H_
