// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__rosidl_typesupport_introspection_c.h"
#include "lll_supervisor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__functions.h"
#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `input_desired`
// Member `input_actual`
// Member `input_failsafe`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `generation_extras`
// Member `filtering_extras`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_supervisor_msgs__msg__SupervisorMetadata__init(message_memory);
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_fini_function(void * message_memory)
{
  lll_supervisor_msgs__msg__SupervisorMetadata__fini(message_memory);
}

size_t lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__input_desired(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_desired(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_desired(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__input_desired(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_desired(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__input_desired(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_desired(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__input_desired(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__input_actual(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_actual(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_actual(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__input_actual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_actual(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__input_actual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_actual(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__input_actual(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__input_failsafe(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_failsafe(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_failsafe(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__input_failsafe(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_failsafe(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__input_failsafe(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_failsafe(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__input_failsafe(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__generation_extras(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__generation_extras(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__generation_extras(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__generation_extras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__generation_extras(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__generation_extras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__generation_extras(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__generation_extras(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__filtering_extras(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__filtering_extras(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__filtering_extras(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__filtering_extras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__filtering_extras(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__filtering_extras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__filtering_extras(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__filtering_extras(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, t_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "t_input",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, t_input),  // bytes offset in struct
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
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, input_desired),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__input_desired,  // size() function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_desired,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_desired,  // get(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__input_desired,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__input_desired,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__input_desired  // resize(index) function pointer
  },
  {
    "input_actual",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, input_actual),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__input_actual,  // size() function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_actual,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_actual,  // get(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__input_actual,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__input_actual,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__input_actual  // resize(index) function pointer
  },
  {
    "input_failsafe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, input_failsafe),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__input_failsafe,  // size() function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__input_failsafe,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__input_failsafe,  // get(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__input_failsafe,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__input_failsafe,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__input_failsafe  // resize(index) function pointer
  },
  {
    "h_distance_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, h_distance_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, h_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "h_predicted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, h_predicted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_modification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, input_modification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "regulation_map_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, regulation_map_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "generation_extras",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, generation_extras),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__generation_extras,  // size() function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__generation_extras,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__generation_extras,  // get(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__generation_extras,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__generation_extras,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__generation_extras  // resize(index) function pointer
  },
  {
    "filtering_extras",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs__msg__SupervisorMetadata, filtering_extras),  // bytes offset in struct
    NULL,  // default value
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__size_function__SupervisorMetadata__filtering_extras,  // size() function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_const_function__SupervisorMetadata__filtering_extras,  // get_const(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__get_function__SupervisorMetadata__filtering_extras,  // get(index) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__fetch_function__SupervisorMetadata__filtering_extras,  // fetch(index, &value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__assign_function__SupervisorMetadata__filtering_extras,  // assign(index, value) function pointer
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__resize_function__SupervisorMetadata__filtering_extras  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_members = {
  "lll_supervisor_msgs__msg",  // message namespace
  "SupervisorMetadata",  // message name
  13,  // number of fields
  sizeof(lll_supervisor_msgs__msg__SupervisorMetadata),
  lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_member_array,  // message members
  lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_type_support_handle = {
  0,
  &lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_supervisor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_supervisor_msgs, msg, SupervisorMetadata)() {
  lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_type_support_handle.typesupport_identifier) {
    lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_supervisor_msgs__msg__SupervisorMetadata__rosidl_typesupport_introspection_c__SupervisorMetadata_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
