// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_rdm_msgs:msg/IncidentLogMetricMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_rdm_msgs/msg/detail/incident_log_metric_msg__struct.hpp"
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

void IncidentLogMetricMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_rdm_msgs::msg::IncidentLogMetricMsg(_init);
}

void IncidentLogMetricMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_rdm_msgs::msg::IncidentLogMetricMsg *>(message_memory);
  typed_message->~IncidentLogMetricMsg();
}

size_t size_function__IncidentLogMetricMsg__tags(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IncidentLogMetricMsg__tags(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  return &member[index];
}

void * get_function__IncidentLogMetricMsg__tags(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  return &member[index];
}

void fetch_function__IncidentLogMetricMsg__tags(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lll_rdm_msgs::msg::MetricTagsMsgData *>(
    get_const_function__IncidentLogMetricMsg__tags(untyped_member, index));
  auto & value = *reinterpret_cast<lll_rdm_msgs::msg::MetricTagsMsgData *>(untyped_value);
  value = item;
}

void assign_function__IncidentLogMetricMsg__tags(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lll_rdm_msgs::msg::MetricTagsMsgData *>(
    get_function__IncidentLogMetricMsg__tags(untyped_member, index));
  const auto & value = *reinterpret_cast<const lll_rdm_msgs::msg::MetricTagsMsgData *>(untyped_value);
  item = value;
}

void resize_function__IncidentLogMetricMsg__tags(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lll_rdm_msgs::msg::MetricTagsMsgData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IncidentLogMetricMsg_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::MsgHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::IncidentLogMetricMsg, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::IncidentLogMsgData>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::IncidentLogMetricMsg, data),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tags",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::MetricTagsMsgData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::IncidentLogMetricMsg, tags),  // bytes offset in struct
    nullptr,  // default value
    size_function__IncidentLogMetricMsg__tags,  // size() function pointer
    get_const_function__IncidentLogMetricMsg__tags,  // get_const(index) function pointer
    get_function__IncidentLogMetricMsg__tags,  // get(index) function pointer
    fetch_function__IncidentLogMetricMsg__tags,  // fetch(index, &value) function pointer
    assign_function__IncidentLogMetricMsg__tags,  // assign(index, value) function pointer
    resize_function__IncidentLogMetricMsg__tags  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IncidentLogMetricMsg_message_members = {
  "lll_rdm_msgs::msg",  // message namespace
  "IncidentLogMetricMsg",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs::msg::IncidentLogMetricMsg),
  IncidentLogMetricMsg_message_member_array,  // message members
  IncidentLogMetricMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  IncidentLogMetricMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IncidentLogMetricMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IncidentLogMetricMsg_message_members,
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
get_message_type_support_handle<lll_rdm_msgs::msg::IncidentLogMetricMsg>()
{
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::IncidentLogMetricMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_rdm_msgs, msg, IncidentLogMetricMsg)() {
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::IncidentLogMetricMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
