// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
#include "lll_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_msgs/msg/detail/trajectory__functions.h"
#include "lll_msgs/msg/detail/trajectory__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `times`
// Member `states`
// Member `inputs`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_msgs__msg__Trajectory__init(message_memory);
}

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function(void * message_memory)
{
  lll_msgs__msg__Trajectory__fini(message_memory);
}

size_t lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__times(
  const void * untyped_member)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int64__Sequence * member =
    (const rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int64_t * item =
    ((const int64_t *)
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__times(untyped_member, index));
  int64_t * value =
    (int64_t *)(untyped_value);
  *value = *item;
}

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int64_t * item =
    ((int64_t *)
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__times(untyped_member, index));
  const int64_t * value =
    (const int64_t *)(untyped_value);
  *item = *value;
}

bool lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int64__Sequence * member =
    (rosidl_runtime_c__int64__Sequence *)(untyped_member);
  rosidl_runtime_c__int64__Sequence__fini(member);
  return rosidl_runtime_c__int64__Sequence__init(member, size);
}

size_t lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__states(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__states(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__states(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__inputs(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__inputs(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__inputs(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__inputs(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__inputs(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__inputs(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_msgs__msg__Trajectory, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_msgs__msg__Trajectory, nx),  // bytes offset in struct
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
    offsetof(lll_msgs__msg__Trajectory, nu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_msgs__msg__Trajectory, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_msgs__msg__Trajectory, times),  // bytes offset in struct
    NULL,  // default value
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__times,  // size() function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__times,  // get_const(index) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__times,  // get(index) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__times,  // fetch(index, &value) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__times,  // assign(index, value) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__times  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_msgs__msg__Trajectory, states),  // bytes offset in struct
    NULL,  // default value
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__states,  // size() function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__states,  // get_const(index) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__states,  // get(index) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__states,  // fetch(index, &value) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__states,  // assign(index, value) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__states  // resize(index) function pointer
  },
  {
    "inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_msgs__msg__Trajectory, inputs),  // bytes offset in struct
    NULL,  // default value
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__inputs,  // size() function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__inputs,  // get_const(index) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__inputs,  // get(index) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__inputs,  // fetch(index, &value) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__inputs,  // assign(index, value) function pointer
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__inputs  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members = {
  "lll_msgs__msg",  // message namespace
  "Trajectory",  // message name
  7,  // number of fields
  sizeof(lll_msgs__msg__Trajectory),
  lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array,  // message members
  lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle = {
  0,
  &lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_msgs, msg, Trajectory)() {
  lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier) {
    lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
