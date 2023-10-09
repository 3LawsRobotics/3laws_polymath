// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/DynamicConsistencyMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/dynamic_consistency_msg_data__struct.h"


// Include directives for member types
// Member `xdot_difference`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__init(message_memory);
}

void lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__fini(message_memory);
}

size_t lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__size_function__DynamicConsistencyMsgData__xdot_difference(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__get_const_function__DynamicConsistencyMsgData__xdot_difference(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__get_function__DynamicConsistencyMsgData__xdot_difference(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__fetch_function__DynamicConsistencyMsgData__xdot_difference(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__get_const_function__DynamicConsistencyMsgData__xdot_difference(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__assign_function__DynamicConsistencyMsgData__xdot_difference(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__get_function__DynamicConsistencyMsgData__xdot_difference(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__resize_function__DynamicConsistencyMsgData__xdot_difference(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_member_array[13] = {
  {
    "state_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, state_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_since_last_state_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, time_since_last_state_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, input_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_since_last_input_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, time_since_last_input_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_domain_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, input_domain_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state_domain_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, state_domain_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference),  // bytes offset in struct
    NULL,  // default value
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__size_function__DynamicConsistencyMsgData__xdot_difference,  // size() function pointer
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__get_const_function__DynamicConsistencyMsgData__xdot_difference,  // get_const(index) function pointer
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__get_function__DynamicConsistencyMsgData__xdot_difference,  // get(index) function pointer
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__fetch_function__DynamicConsistencyMsgData__xdot_difference,  // fetch(index, &value) function pointer
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__assign_function__DynamicConsistencyMsgData__xdot_difference,  // assign(index, value) function pointer
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__resize_function__DynamicConsistencyMsgData__xdot_difference  // resize(index) function pointer
  },
  {
    "xdot_difference_pdf_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_pdf_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_pdf_value_normalized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_pdf_value_normalized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_norm_1sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_norm_1sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_norm_2sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_norm_2sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "xdot_difference_norm_3sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, xdot_difference_norm_3sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "system_degradation_probability",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__DynamicConsistencyMsgData, system_degradation_probability),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "DynamicConsistencyMsgData",  // message name
  13,  // number of fields
  sizeof(lll_rdm_msgs__msg__DynamicConsistencyMsgData),
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_member_array,  // message members
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle = {
  0,
  &lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, DynamicConsistencyMsgData)() {
  if (!lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle.typesupport_identifier) {
    lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_rdm_msgs__msg__DynamicConsistencyMsgData__rosidl_typesupport_introspection_c__DynamicConsistencyMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
