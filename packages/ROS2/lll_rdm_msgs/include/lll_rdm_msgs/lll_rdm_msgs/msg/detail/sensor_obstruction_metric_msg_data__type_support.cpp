// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsgData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg_data__struct.hpp"
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

void SensorObstructionMetricMsgData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_rdm_msgs::msg::SensorObstructionMetricMsgData(_init);
}

void SensorObstructionMetricMsgData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_rdm_msgs::msg::SensorObstructionMetricMsgData *>(message_memory);
  typed_message->~SensorObstructionMetricMsgData();
}

size_t size_function__SensorObstructionMetricMsgData__obstructions_by_sectors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorObstructionMetricMsgData__obstructions_by_sectors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorObstructionMetricMsgData__obstructions_by_sectors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorObstructionMetricMsgData__obstructions_by_sectors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SensorObstructionMetricMsgData__obstructions_by_sectors(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SensorObstructionMetricMsgData__obstructions_by_sectors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SensorObstructionMetricMsgData__obstructions_by_sectors(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SensorObstructionMetricMsgData__obstructions_by_sectors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SensorObstructionMetricMsgData__obstructions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<lll_rdm_msgs::msg::SensorObstructionData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SensorObstructionMetricMsgData__obstructions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<lll_rdm_msgs::msg::SensorObstructionData> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorObstructionMetricMsgData__obstructions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<lll_rdm_msgs::msg::SensorObstructionData> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorObstructionMetricMsgData__obstructions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const lll_rdm_msgs::msg::SensorObstructionData *>(
    get_const_function__SensorObstructionMetricMsgData__obstructions(untyped_member, index));
  auto & value = *reinterpret_cast<lll_rdm_msgs::msg::SensorObstructionData *>(untyped_value);
  value = item;
}

void assign_function__SensorObstructionMetricMsgData__obstructions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<lll_rdm_msgs::msg::SensorObstructionData *>(
    get_function__SensorObstructionMetricMsgData__obstructions(untyped_member, index));
  const auto & value = *reinterpret_cast<const lll_rdm_msgs::msg::SensorObstructionData *>(untyped_value);
  item = value;
}

void resize_function__SensorObstructionMetricMsgData__obstructions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<lll_rdm_msgs::msg::SensorObstructionData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorObstructionMetricMsgData_message_member_array[3] = {
  {
    "time_since_last_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::SensorObstructionMetricMsgData, time_since_last_msg),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "obstructions_by_sectors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::SensorObstructionMetricMsgData, obstructions_by_sectors),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorObstructionMetricMsgData__obstructions_by_sectors,  // size() function pointer
    get_const_function__SensorObstructionMetricMsgData__obstructions_by_sectors,  // get_const(index) function pointer
    get_function__SensorObstructionMetricMsgData__obstructions_by_sectors,  // get(index) function pointer
    fetch_function__SensorObstructionMetricMsgData__obstructions_by_sectors,  // fetch(index, &value) function pointer
    assign_function__SensorObstructionMetricMsgData__obstructions_by_sectors,  // assign(index, value) function pointer
    resize_function__SensorObstructionMetricMsgData__obstructions_by_sectors  // resize(index) function pointer
  },
  {
    "obstructions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<lll_rdm_msgs::msg::SensorObstructionData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::SensorObstructionMetricMsgData, obstructions),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorObstructionMetricMsgData__obstructions,  // size() function pointer
    get_const_function__SensorObstructionMetricMsgData__obstructions,  // get_const(index) function pointer
    get_function__SensorObstructionMetricMsgData__obstructions,  // get(index) function pointer
    fetch_function__SensorObstructionMetricMsgData__obstructions,  // fetch(index, &value) function pointer
    assign_function__SensorObstructionMetricMsgData__obstructions,  // assign(index, value) function pointer
    resize_function__SensorObstructionMetricMsgData__obstructions  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorObstructionMetricMsgData_message_members = {
  "lll_rdm_msgs::msg",  // message namespace
  "SensorObstructionMetricMsgData",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs::msg::SensorObstructionMetricMsgData),
  SensorObstructionMetricMsgData_message_member_array,  // message members
  SensorObstructionMetricMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorObstructionMetricMsgData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorObstructionMetricMsgData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorObstructionMetricMsgData_message_members,
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
get_message_type_support_handle<lll_rdm_msgs::msg::SensorObstructionMetricMsgData>()
{
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::SensorObstructionMetricMsgData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_rdm_msgs, msg, SensorObstructionMetricMsgData)() {
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::SensorObstructionMetricMsgData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
