// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/sensor_noise_data__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/sensor_noise_data__functions.h"
#include "lll_rdm_msgs/msg/detail/sensor_noise_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__SensorNoiseData__init(message_memory);
}

void lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__SensorNoiseData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_member_array[6] = {
  {
    "average_std_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorNoiseData, average_std_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_std_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorNoiseData, max_std_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angle_max_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorNoiseData, angle_max_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "percent_of_sigma",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorNoiseData, percent_of_sigma),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorNoiseData, p_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reject_model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__SensorNoiseData, reject_model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "SensorNoiseData",  // message name
  6,  // number of fields
  sizeof(lll_rdm_msgs__msg__SensorNoiseData),
  lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_member_array,  // message members
  lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_type_support_handle = {
  0,
  &lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, SensorNoiseData)() {
  if (!lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_type_support_handle.typesupport_identifier) {
    lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_rdm_msgs__msg__SensorNoiseData__rosidl_typesupport_introspection_c__SensorNoiseData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
