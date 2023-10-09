// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_supervisor_msgs:msg/RegulationData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_supervisor_msgs/msg/detail/regulation_data__rosidl_typesupport_introspection_c.h"
#include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_supervisor_msgs/msg/detail/regulation_data__functions.h"
#include "lll_supervisor_msgs/msg/detail/regulation_data__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `input_cstr`
#include "lll_supervisor_msgs/msg/input_constraints.h"
// Member `input_cstr`
#include "lll_supervisor_msgs/msg/detail/input_constraints__rosidl_typesupport_introspection_c.h"
// Member `lfh`
// Member `lgh`
// Member `dh_dt`
// Member `safety_val`
// Member `failsafe_input`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_supervisor_msgs__msg__RegulationData__init(message_memory);
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_fini_function(void * message_memory)
{
  lll_supervisor_msgs__msg__RegulationData__fini(message_memory);
}

size_t lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__lfh(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__lfh(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__lfh(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__lfh(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__lfh(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__lfh(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__lfh(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__lfh(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__lgh(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__lgh(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__lgh(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__lgh(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__lgh(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__lgh(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__lgh(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__lgh(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__dh_dt(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__dh_dt(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__dh_dt(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__dh_dt(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__dh_dt(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__dh_dt(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__dh_dt(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__dh_dt(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__safety_val(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__safety_val(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__safety_val(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__safety_val(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__safety_val(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__safety_val(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__safety_val(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__safety_val(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__failsafe_input(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__failsafe_input(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__failsafe_input(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__failsafe_input(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__failsafe_input(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__failsafe_input(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__failsafe_input(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__failsafe_input(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, t),  // bytes offset in struct
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
    offsetof(lll_supervisor_msgs__msg__RegulationData, nu),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_safety_cstr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, n_safety_cstr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_failsafes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, n_failsafes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_cstr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, input_cstr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lfh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, lfh),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__lfh,  // size() function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__lfh,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__lfh,  // get(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__lfh,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__lfh,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__lfh  // resize(index) function pointer
  },
  {
    "lgh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, lgh),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__lgh,  // size() function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__lgh,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__lgh,  // get(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__lgh,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__lgh,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__lgh  // resize(index) function pointer
  },
  {
    "dh_dt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, dh_dt),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__dh_dt,  // size() function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__dh_dt,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__dh_dt,  // get(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__dh_dt,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__dh_dt,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__dh_dt  // resize(index) function pointer
  },
  {
    "safety_val",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, safety_val),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__safety_val,  // size() function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__safety_val,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__safety_val,  // get(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__safety_val,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__safety_val,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__safety_val  // resize(index) function pointer
  },
  {
    "failsafe_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__RegulationData, failsafe_input),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__size_function__RegulationData__failsafe_input,  // size() function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_const_function__RegulationData__failsafe_input,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__get_function__RegulationData__failsafe_input,  // get(index) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__fetch_function__RegulationData__failsafe_input,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__assign_function__RegulationData__failsafe_input,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__resize_function__RegulationData__failsafe_input  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_members = {
  "lll_supervisor_msgs__msg",  // message namespace
  "RegulationData",  // message name
  11,  // number of fields
  sizeof(lll_supervisor_msgs__msg__RegulationData),
  lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_member_array,  // message members
  lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_type_support_handle = {
  0,
  &lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, RegulationData)() {
  lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, InputConstraints)();
  if (!lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_type_support_handle.typesupport_identifier) {
    lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_supervisor_msgs__msg__RegulationData__rosidl_typesupport_introspection_c__RegulationData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
