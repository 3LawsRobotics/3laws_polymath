// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace lll_supervisor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SupervisorMetadata_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_supervisor_msgs::msg::SupervisorMetadata(_init);
}

void SupervisorMetadata_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_supervisor_msgs::msg::SupervisorMetadata *>(message_memory);
  typed_message->~SupervisorMetadata();
}

size_t size_function__SupervisorMetadata__input_desired(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SupervisorMetadata__input_desired(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SupervisorMetadata__input_desired(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SupervisorMetadata__input_desired(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SupervisorMetadata__input_desired(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SupervisorMetadata__input_desired(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SupervisorMetadata__input_desired(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SupervisorMetadata__input_desired(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SupervisorMetadata__input_actual(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SupervisorMetadata__input_actual(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SupervisorMetadata__input_actual(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SupervisorMetadata__input_actual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SupervisorMetadata__input_actual(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SupervisorMetadata__input_actual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SupervisorMetadata__input_actual(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SupervisorMetadata__input_actual(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SupervisorMetadata__input_failsafe(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SupervisorMetadata__input_failsafe(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SupervisorMetadata__input_failsafe(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SupervisorMetadata__input_failsafe(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SupervisorMetadata__input_failsafe(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SupervisorMetadata__input_failsafe(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SupervisorMetadata__input_failsafe(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SupervisorMetadata__input_failsafe(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SupervisorMetadata__generation_extras(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SupervisorMetadata__generation_extras(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SupervisorMetadata__generation_extras(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SupervisorMetadata__generation_extras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SupervisorMetadata__generation_extras(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SupervisorMetadata__generation_extras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SupervisorMetadata__generation_extras(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SupervisorMetadata__generation_extras(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SupervisorMetadata__filtering_extras(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SupervisorMetadata__filtering_extras(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SupervisorMetadata__filtering_extras(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SupervisorMetadata__filtering_extras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SupervisorMetadata__filtering_extras(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SupervisorMetadata__filtering_extras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SupervisorMetadata__filtering_extras(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SupervisorMetadata__filtering_extras(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SupervisorMetadata_message_member_array[13] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "t_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, t_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "t_input",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, t_input),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "input_desired",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, input_desired),  // bytes offset in struct
    nullptr,  // default value
    size_function__SupervisorMetadata__input_desired,  // size() function pointer
    get_const_function__SupervisorMetadata__input_desired,  // get_const(index) function pointer
    get_function__SupervisorMetadata__input_desired,  // get(index) function pointer
    fetch_function__SupervisorMetadata__input_desired,  // fetch(index, &value) function pointer
    assign_function__SupervisorMetadata__input_desired,  // assign(index, value) function pointer
    resize_function__SupervisorMetadata__input_desired  // resize(index) function pointer
  },
  {
    "input_actual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, input_actual),  // bytes offset in struct
    nullptr,  // default value
    size_function__SupervisorMetadata__input_actual,  // size() function pointer
    get_const_function__SupervisorMetadata__input_actual,  // get_const(index) function pointer
    get_function__SupervisorMetadata__input_actual,  // get(index) function pointer
    fetch_function__SupervisorMetadata__input_actual,  // fetch(index, &value) function pointer
    assign_function__SupervisorMetadata__input_actual,  // assign(index, value) function pointer
    resize_function__SupervisorMetadata__input_actual  // resize(index) function pointer
  },
  {
    "input_failsafe",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, input_failsafe),  // bytes offset in struct
    nullptr,  // default value
    size_function__SupervisorMetadata__input_failsafe,  // size() function pointer
    get_const_function__SupervisorMetadata__input_failsafe,  // get_const(index) function pointer
    get_function__SupervisorMetadata__input_failsafe,  // get(index) function pointer
    fetch_function__SupervisorMetadata__input_failsafe,  // fetch(index, &value) function pointer
    assign_function__SupervisorMetadata__input_failsafe,  // assign(index, value) function pointer
    resize_function__SupervisorMetadata__input_failsafe  // resize(index) function pointer
  },
  {
    "h_distance_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, h_distance_current),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "h_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, h_current),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "h_predicted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, h_predicted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "input_modification",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, input_modification),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "regulation_map_size",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, regulation_map_size),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "generation_extras",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, generation_extras),  // bytes offset in struct
    nullptr,  // default value
    size_function__SupervisorMetadata__generation_extras,  // size() function pointer
    get_const_function__SupervisorMetadata__generation_extras,  // get_const(index) function pointer
    get_function__SupervisorMetadata__generation_extras,  // get(index) function pointer
    fetch_function__SupervisorMetadata__generation_extras,  // fetch(index, &value) function pointer
    assign_function__SupervisorMetadata__generation_extras,  // assign(index, value) function pointer
    resize_function__SupervisorMetadata__generation_extras  // resize(index) function pointer
  },
  {
    "filtering_extras",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_supervisor_msgs::msg::SupervisorMetadata, filtering_extras),  // bytes offset in struct
    nullptr,  // default value
    size_function__SupervisorMetadata__filtering_extras,  // size() function pointer
    get_const_function__SupervisorMetadata__filtering_extras,  // get_const(index) function pointer
    get_function__SupervisorMetadata__filtering_extras,  // get(index) function pointer
    fetch_function__SupervisorMetadata__filtering_extras,  // fetch(index, &value) function pointer
    assign_function__SupervisorMetadata__filtering_extras,  // assign(index, value) function pointer
    resize_function__SupervisorMetadata__filtering_extras  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SupervisorMetadata_message_members = {
  "lll_supervisor_msgs::msg",  // message namespace
  "SupervisorMetadata",  // message name
  13,  // number of fields
  sizeof(lll_supervisor_msgs::msg::SupervisorMetadata),
  SupervisorMetadata_message_member_array,  // message members
  SupervisorMetadata_init_function,  // function to initialize message memory (memory has to be allocated)
  SupervisorMetadata_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SupervisorMetadata_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SupervisorMetadata_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace lll_supervisor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<lll_supervisor_msgs::msg::SupervisorMetadata>()
{
  return &::lll_supervisor_msgs::msg::rosidl_typesupport_introspection_cpp::SupervisorMetadata_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_supervisor_msgs, msg, SupervisorMetadata)() {
  return &::lll_supervisor_msgs::msg::rosidl_typesupport_introspection_cpp::SupervisorMetadata_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
