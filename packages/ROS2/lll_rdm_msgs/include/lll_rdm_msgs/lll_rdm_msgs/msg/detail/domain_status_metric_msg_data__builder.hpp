// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_DomainStatusMetricMsgData_control_status
{
public:
  explicit Init_DomainStatusMetricMsgData_control_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::DomainStatusMetricMsgData control_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData::_control_status_type arg)
  {
    msg_.control_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsgData msg_;
};

class Init_DomainStatusMetricMsgData_perception_status
{
public:
  explicit Init_DomainStatusMetricMsgData_perception_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_DomainStatusMetricMsgData_control_status perception_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData::_perception_status_type arg)
  {
    msg_.perception_status = std::move(arg);
    return Init_DomainStatusMetricMsgData_control_status(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsgData msg_;
};

class Init_DomainStatusMetricMsgData_hardware_status
{
public:
  explicit Init_DomainStatusMetricMsgData_hardware_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_DomainStatusMetricMsgData_perception_status hardware_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData::_hardware_status_type arg)
  {
    msg_.hardware_status = std::move(arg);
    return Init_DomainStatusMetricMsgData_perception_status(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsgData msg_;
};

class Init_DomainStatusMetricMsgData_behavior_status
{
public:
  explicit Init_DomainStatusMetricMsgData_behavior_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData & msg)
  : msg_(msg)
  {}
  Init_DomainStatusMetricMsgData_hardware_status behavior_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData::_behavior_status_type arg)
  {
    msg_.behavior_status = std::move(arg);
    return Init_DomainStatusMetricMsgData_hardware_status(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsgData msg_;
};

class Init_DomainStatusMetricMsgData_system_status
{
public:
  Init_DomainStatusMetricMsgData_system_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DomainStatusMetricMsgData_behavior_status system_status(::lll_rdm_msgs::msg::DomainStatusMetricMsgData::_system_status_type arg)
  {
    msg_.system_status = std::move(arg);
    return Init_DomainStatusMetricMsgData_behavior_status(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::DomainStatusMetricMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_DomainStatusMetricMsgData_system_status();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__BUILDER_HPP_
