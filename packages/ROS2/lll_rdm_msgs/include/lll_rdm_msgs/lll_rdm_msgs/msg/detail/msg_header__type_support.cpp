// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_rdm_msgs:msg/MsgHeader.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_rdm_msgs/msg/detail/msg_header__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lll_rdm_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MsgHeader_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_rdm_msgs::msg::MsgHeader(_init);
}

void MsgHeader_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_rdm_msgs::msg::MsgHeader *>(message_memory);
  typed_message->~MsgHeader();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MsgHeader_message_member_array[2] = {
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::MsgHeader, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sender_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::MsgHeader, sender_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MsgHeader_message_members = {
  "lll_rdm_msgs::msg",  // message namespace
  "MsgHeader",  // message name
  2,  // number of fields
  sizeof(lll_rdm_msgs::msg::MsgHeader),
  MsgHeader_message_member_array,  // message members
  MsgHeader_init_function,  // function to initialize message memory (memory has to be allocated)
  MsgHeader_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MsgHeader_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MsgHeader_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lll_rdm_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lll_rdm_msgs::msg::MsgHeader>()
{
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::MsgHeader_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_rdm_msgs, msg, MsgHeader)() {
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::MsgHeader_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
