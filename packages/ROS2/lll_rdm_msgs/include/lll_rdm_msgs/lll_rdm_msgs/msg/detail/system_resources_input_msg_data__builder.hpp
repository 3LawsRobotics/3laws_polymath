// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SystemResourcesInputMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemResourcesInputMsgData_procs_nb
{
public:
  explicit Init_SystemResourcesInputMsgData_procs_nb(::lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData procs_nb(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_procs_nb_type arg)
  {
    msg_.procs_nb = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

class Init_SystemResourcesInputMsgData_cpu_nb
{
public:
  explicit Init_SystemResourcesInputMsgData_cpu_nb(::lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
  : msg_(msg)
  {}
  Init_SystemResourcesInputMsgData_procs_nb cpu_nb(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_cpu_nb_type arg)
  {
    msg_.cpu_nb = std::move(arg);
    return Init_SystemResourcesInputMsgData_procs_nb(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

class Init_SystemResourcesInputMsgData_network_write
{
public:
  explicit Init_SystemResourcesInputMsgData_network_write(::lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
  : msg_(msg)
  {}
  Init_SystemResourcesInputMsgData_cpu_nb network_write(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_network_write_type arg)
  {
    msg_.network_write = std::move(arg);
    return Init_SystemResourcesInputMsgData_cpu_nb(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

class Init_SystemResourcesInputMsgData_network_read
{
public:
  explicit Init_SystemResourcesInputMsgData_network_read(::lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
  : msg_(msg)
  {}
  Init_SystemResourcesInputMsgData_network_write network_read(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_network_read_type arg)
  {
    msg_.network_read = std::move(arg);
    return Init_SystemResourcesInputMsgData_network_write(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

class Init_SystemResourcesInputMsgData_disk_usage
{
public:
  explicit Init_SystemResourcesInputMsgData_disk_usage(::lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
  : msg_(msg)
  {}
  Init_SystemResourcesInputMsgData_network_read disk_usage(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_disk_usage_type arg)
  {
    msg_.disk_usage = std::move(arg);
    return Init_SystemResourcesInputMsgData_network_read(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

class Init_SystemResourcesInputMsgData_ram_usage
{
public:
  explicit Init_SystemResourcesInputMsgData_ram_usage(::lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
  : msg_(msg)
  {}
  Init_SystemResourcesInputMsgData_disk_usage ram_usage(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_ram_usage_type arg)
  {
    msg_.ram_usage = std::move(arg);
    return Init_SystemResourcesInputMsgData_disk_usage(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

class Init_SystemResourcesInputMsgData_cpu_load
{
public:
  explicit Init_SystemResourcesInputMsgData_cpu_load(::lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
  : msg_(msg)
  {}
  Init_SystemResourcesInputMsgData_ram_usage cpu_load(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_cpu_load_type arg)
  {
    msg_.cpu_load = std::move(arg);
    return Init_SystemResourcesInputMsgData_ram_usage(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

class Init_SystemResourcesInputMsgData_system_id
{
public:
  Init_SystemResourcesInputMsgData_system_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemResourcesInputMsgData_cpu_load system_id(::lll_rdm_msgs::msg::SystemResourcesInputMsgData::_system_id_type arg)
  {
    msg_.system_id = std::move(arg);
    return Init_SystemResourcesInputMsgData_cpu_load(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemResourcesInputMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SystemResourcesInputMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_SystemResourcesInputMsgData_system_id();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__BUILDER_HPP_
