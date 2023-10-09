// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/process_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_ProcessHealthMetricMsgData_io_disk_write
{
public:
  explicit Init_ProcessHealthMetricMsgData_io_disk_write(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData io_disk_write(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_io_disk_write_type arg)
  {
    msg_.io_disk_write = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_io_disk_read
{
public:
  explicit Init_ProcessHealthMetricMsgData_io_disk_read(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_io_disk_write io_disk_read(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_io_disk_read_type arg)
  {
    msg_.io_disk_read = std::move(arg);
    return Init_ProcessHealthMetricMsgData_io_disk_write(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_io_total_write
{
public:
  explicit Init_ProcessHealthMetricMsgData_io_total_write(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_io_disk_read io_total_write(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_io_total_write_type arg)
  {
    msg_.io_total_write = std::move(arg);
    return Init_ProcessHealthMetricMsgData_io_disk_read(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_io_total_read
{
public:
  explicit Init_ProcessHealthMetricMsgData_io_total_read(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_io_total_write io_total_read(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_io_total_read_type arg)
  {
    msg_.io_total_read = std::move(arg);
    return Init_ProcessHealthMetricMsgData_io_total_write(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_process_run_time
{
public:
  explicit Init_ProcessHealthMetricMsgData_process_run_time(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_io_total_read process_run_time(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_process_run_time_type arg)
  {
    msg_.process_run_time = std::move(arg);
    return Init_ProcessHealthMetricMsgData_io_total_read(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_process_up_time
{
public:
  explicit Init_ProcessHealthMetricMsgData_process_up_time(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_process_run_time process_up_time(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_process_up_time_type arg)
  {
    msg_.process_up_time = std::move(arg);
    return Init_ProcessHealthMetricMsgData_process_run_time(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_n_threads
{
public:
  explicit Init_ProcessHealthMetricMsgData_n_threads(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_process_up_time n_threads(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_n_threads_type arg)
  {
    msg_.n_threads = std::move(arg);
    return Init_ProcessHealthMetricMsgData_process_up_time(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_ram_usage
{
public:
  explicit Init_ProcessHealthMetricMsgData_ram_usage(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_n_threads ram_usage(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_ram_usage_type arg)
  {
    msg_.ram_usage = std::move(arg);
    return Init_ProcessHealthMetricMsgData_n_threads(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_cpu_usage_total
{
public:
  explicit Init_ProcessHealthMetricMsgData_cpu_usage_total(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_ProcessHealthMetricMsgData_ram_usage cpu_usage_total(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_cpu_usage_total_type arg)
  {
    msg_.cpu_usage_total = std::move(arg);
    return Init_ProcessHealthMetricMsgData_ram_usage(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

class Init_ProcessHealthMetricMsgData_cpu_usage
{
public:
  Init_ProcessHealthMetricMsgData_cpu_usage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProcessHealthMetricMsgData_cpu_usage_total cpu_usage(::lll_rdm_msgs::msg::ProcessHealthMetricMsgData::_cpu_usage_type arg)
  {
    msg_.cpu_usage = std::move(arg);
    return Init_ProcessHealthMetricMsgData_cpu_usage_total(msg_);
  }

private:
  ::lll_rdm_msgs::msg::ProcessHealthMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::ProcessHealthMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_ProcessHealthMetricMsgData_cpu_usage();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__BUILDER_HPP_
