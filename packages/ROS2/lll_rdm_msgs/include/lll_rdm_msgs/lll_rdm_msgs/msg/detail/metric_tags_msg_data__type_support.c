// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/MetricTagsMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__struct.h"


// Include directives for member types
// Member `key`
// Member `value`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__MetricTagsMsgData__init(message_memory);
}

void lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__MetricTagsMsgData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_member_array[2] = {
  {
    "key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__MetricTagsMsgData, key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__MetricTagsMsgData, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "MetricTagsMsgData",  // message name
  2,  // number of fields
  sizeof(lll_rdm_msgs__msg__MetricTagsMsgData),
  lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_member_array,  // message members
  lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_type_support_handle = {
  0,
  &lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, MetricTagsMsgData)() {
  if (!lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_type_support_handle.typesupport_identifier) {
    lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_rdm_msgs__msg__MetricTagsMsgData__rosidl_typesupport_introspection_c__MetricTagsMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
