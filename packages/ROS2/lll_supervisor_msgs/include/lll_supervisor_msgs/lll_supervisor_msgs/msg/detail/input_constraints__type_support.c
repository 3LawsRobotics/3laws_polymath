// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_supervisor_msgs:msg/InputConstraints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_supervisor_msgs/msg/detail/input_constraints__rosidl_typesupport_introspection_c.h"
#include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_supervisor_msgs/msg/detail/input_constraints__functions.h"
#include "lll_supervisor_msgs/msg/detail/input_constraints__struct.h"


// Include directives for member types
// Member `lb`
// Member `m`
// Member `ub`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_supervisor_msgs__msg__InputConstraints__init(message_memory);
}

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_fini_function(void * message_memory)
{
  lll_supervisor_msgs__msg__InputConstraints__fini(message_memory);
}

size_t lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__size_function__InputConstraints__lb(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__lb(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__lb(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__fetch_function__InputConstraints__lb(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__lb(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__assign_function__InputConstraints__lb(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__lb(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__resize_function__InputConstraints__lb(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__size_function__InputConstraints__m(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__m(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__m(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__fetch_function__InputConstraints__m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__m(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__assign_function__InputConstraints__m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__m(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__resize_function__InputConstraints__m(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__size_function__InputConstraints__ub(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__ub(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__ub(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__fetch_function__InputConstraints__ub(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__ub(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__assign_function__InputConstraints__ub(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__ub(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__resize_function__InputConstraints__ub(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_member_array[5] = {
  {
    "nu",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputConstraints, nu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_cstr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputConstraints, n_cstr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lb",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputConstraints, lb),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__size_function__InputConstraints__lb,  // size() function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__lb,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__lb,  // get(index) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__fetch_function__InputConstraints__lb,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__assign_function__InputConstraints__lb,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__resize_function__InputConstraints__lb  // resize(index) function pointer
  },
  {
    "m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputConstraints, m),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__size_function__InputConstraints__m,  // size() function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__m,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__m,  // get(index) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__fetch_function__InputConstraints__m,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__assign_function__InputConstraints__m,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__resize_function__InputConstraints__m  // resize(index) function pointer
  },
  {
    "ub",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__InputConstraints, ub),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__size_function__InputConstraints__ub,  // size() function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_const_function__InputConstraints__ub,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__get_function__InputConstraints__ub,  // get(index) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__fetch_function__InputConstraints__ub,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__assign_function__InputConstraints__ub,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__resize_function__InputConstraints__ub  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_members = {
  "lll_supervisor_msgs__msg",  // message namespace
  "InputConstraints",  // message name
  5,  // number of fields
  sizeof(lll_supervisor_msgs__msg__InputConstraints),
  lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_member_array,  // message members
  lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_type_support_handle = {
  0,
  &lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, InputConstraints)() {
  if (!lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_type_support_handle.typesupport_identifier) {
    lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_supervisor_msgs__msg__InputConstraints__rosidl_typesupport_introspection_c__InputConstraints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
