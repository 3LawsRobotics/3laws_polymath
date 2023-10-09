// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from lll_rdm_msgs:msg/MsgHeader.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "lll_rdm_msgs/msg/detail/msg_header__rosidl_typesupport_introspection_c.h"
#include "lll_rdm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "lll_rdm_msgs/msg/detail/msg_header__functions.h"
#include "lll_rdm_msgs/msg/detail/msg_header__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `sender_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  lll_rdm_msgs__msg__MsgHeader__init(message_memory);
}

void lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_fini_function(void * message_memory)
{
  lll_rdm_msgs__msg__MsgHeader__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_member_array[2] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__MsgHeader, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sender_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs__msg__MsgHeader, sender_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_members = {
  "lll_rdm_msgs__msg",  // message namespace
  "MsgHeader",  // message name
  2,  // number of fields
  sizeof(lll_rdm_msgs__msg__MsgHeader),
  lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_member_array,  // message members
  lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_type_support_handle = {
  0,
  &lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_lll_rdm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, lll_rdm_msgs, msg, MsgHeader)() {
  lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_type_support_handle.typesupport_identifier) {
    lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &lll_rdm_msgs__msg__MsgHeader__rosidl_typesupport_introspection_c__MsgHeader_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
