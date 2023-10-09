// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_supervisor_msgs:msg/InputFilteringResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__rosidl_typesupport_introspection_c.h"
#include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__functions.h"
#include "lll_supervisor_msgs/msg/detail/input_filtering_result__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `input_desired`
// Member `input_filtered`
// Member `input_failsafe`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_supervisor_msgs__msg__InputFilteringResult__init(message_memory);
}

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_fini_function(void * message_memory)
{
  lll_supervisor_msgs__msg__InputFilteringResult__fini(message_memory);
}

size_t lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__size_function__InputFilteringResult__input_desired(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_desired(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_desired(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__fetch_function__InputFilteringResult__input_desired(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_desired(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__assign_function__InputFilteringResult__input_desired(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_desired(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__resize_function__InputFilteringResult__input_desired(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__size_function__InputFilteringResult__input_filtered(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_filtered(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_filtered(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__fetch_function__InputFilteringResult__input_filtered(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_filtered(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__assign_function__InputFilteringResult__input_filtered(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_filtered(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__resize_function__InputFilteringResult__input_filtered(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__size_function__InputFilteringResult__input_failsafe(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_failsafe(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_failsafe(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__fetch_function__InputFilteringResult__input_failsafe(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_failsafe(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__assign_function__InputFilteringResult__input_failsafe(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_failsafe(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__resize_function__InputFilteringResult__input_failsafe(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_input_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, t_input_desired),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_regulation_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, t_regulation_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, nu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "return_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, return_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_desired",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, input_desired),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__size_function__InputFilteringResult__input_desired,  // size() function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_desired,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_desired,  // get(index) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__fetch_function__InputFilteringResult__input_desired,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__assign_function__InputFilteringResult__input_desired,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__resize_function__InputFilteringResult__input_desired  // resize(index) function pointer
  },
  {
    "input_filtered",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, input_filtered),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__size_function__InputFilteringResult__input_filtered,  // size() function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_filtered,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_filtered,  // get(index) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__fetch_function__InputFilteringResult__input_filtered,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__assign_function__InputFilteringResult__input_filtered,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__resize_function__InputFilteringResult__input_filtered  // resize(index) function pointer
  },
  {
    "input_failsafe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputFilteringResult, input_failsafe),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__size_function__InputFilteringResult__input_failsafe,  // size() function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_const_function__InputFilteringResult__input_failsafe,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__get_function__InputFilteringResult__input_failsafe,  // get(index) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__fetch_function__InputFilteringResult__input_failsafe,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__assign_function__InputFilteringResult__input_failsafe,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__resize_function__InputFilteringResult__input_failsafe  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_members = {
  "lll_supervisor_msgs__msg",  // message namespace
  "InputFilteringResult",  // message name
  8,  // number of fields
  sizeof(lll_supervisor_msgs__msg__InputFilteringResult),
  lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_member_array,  // message members
  lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_type_support_handle = {
  0,
  &lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, InputFilteringResult)() {
  lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_type_support_handle.typesupport_identifier) {
    lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_supervisor_msgs__msg__InputFilteringResult__rosidl_typesupport_introspection_c__InputFilteringResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
