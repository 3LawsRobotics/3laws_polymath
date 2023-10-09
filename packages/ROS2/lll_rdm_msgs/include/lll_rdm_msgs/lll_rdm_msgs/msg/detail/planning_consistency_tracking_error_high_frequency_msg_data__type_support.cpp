// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from lll_rdm_msgs:msg/PlanningConsistencyTrackingErrorHighFrequencyMsgData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "lll_rdm_msgs/msg/detail/planning_consistency_tracking_error_high_frequency_msg_data__struct.hpp"
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

void PlanningConsistencyTrackingErrorHighFrequencyMsgData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData(_init);
}

void PlanningConsistencyTrackingErrorHighFrequencyMsgData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData *>(message_memory);
  typed_message->~PlanningConsistencyTrackingErrorHighFrequencyMsgData();
}

size_t size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_member_array[3] = {
  {
    "tracking_error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData, tracking_error),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // size() function pointer
    get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // get_const(index) function pointer
    get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // get(index) function pointer
    fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // fetch(index, &value) function pointer
    assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error,  // assign(index, value) function pointer
    resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__tracking_error  // resize(index) function pointer
  },
  {
    "desired",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData, desired),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // size() function pointer
    get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // get_const(index) function pointer
    get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // get(index) function pointer
    fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // fetch(index, &value) function pointer
    assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired,  // assign(index, value) function pointer
    resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__desired  // resize(index) function pointer
  },
  {
    "actual",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData, actual),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // size() function pointer
    get_const_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // get_const(index) function pointer
    get_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // get(index) function pointer
    fetch_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // fetch(index, &value) function pointer
    assign_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual,  // assign(index, value) function pointer
    resize_function__PlanningConsistencyTrackingErrorHighFrequencyMsgData__actual  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_members = {
  "lll_rdm_msgs::msg",  // message namespace
  "PlanningConsistencyTrackingErrorHighFrequencyMsgData",  // message name
  3,  // number of fields
  sizeof(lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData),
  PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_member_array,  // message members
  PlanningConsistencyTrackingErrorHighFrequencyMsgData_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanningConsistencyTrackingErrorHighFrequencyMsgData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_members,
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
get_message_type_support_handle<lll_rdm_msgs::msg::PlanningConsistencyTrackingErrorHighFrequencyMsgData>()
{
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, lll_rdm_msgs, msg, PlanningConsistencyTrackingErrorHighFrequencyMsgData)() {
  return &::lll_rdm_msgs::msg::rosidl_typesupport_introspection_cpp::PlanningConsistencyTrackingErrorHighFrequencyMsgData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
