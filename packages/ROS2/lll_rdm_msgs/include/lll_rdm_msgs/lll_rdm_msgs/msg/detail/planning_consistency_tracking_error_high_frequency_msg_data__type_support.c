// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__functions.h"
#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__struct.h"


// Include directives for member types
// Member `tracking_error`
// Member `desired`
// Member `actual`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__init(message_memory);
}

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__fini(message_memory);
}

size_t lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_member_array[3] = {
  {
    "tracking_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData, tracking_error),  // bytes offset in struct
    NULL,  // default value
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // size() function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // get_const(index) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // get(index) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // fetch(index, &value) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // assign(index, value) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error  // resize(index) function pointer
  },
  {
    "desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData, desired),  // bytes offset in struct
    NULL,  // default value
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // size() function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // get_const(index) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // get(index) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // fetch(index, &value) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // assign(index, value) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired  // resize(index) function pointer
  },
  {
    "actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData, actual),  // bytes offset in struct
    NULL,  // default value
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // size() function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // get_const(index) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // get(index) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // fetch(index, &value) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // assign(index, value) function pointer
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "PlanningConsistencyTrackingErrorHighFrequencyMsgData",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData),
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_member_array,  // message members
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_type_support_handle = {
  0,
  &lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, PlanningConsistencyTrackingErrorHighFrequencyMsgData)() {
  if (!lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_type_support_handle.typesupport_identifier) {
    lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_rdm_msgs__msg__PlanningConsistencyTrackingErrorHighFrequencyMsgData__rosidl_typesupport_introspection_c__PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
