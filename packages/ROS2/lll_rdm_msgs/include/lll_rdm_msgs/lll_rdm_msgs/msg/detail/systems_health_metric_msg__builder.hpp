// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SystemsHealthMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/systems_health_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemsHealthMetricMsg_tags
{
public:
  explicit Init_SystemsHealthMetricMsg_tags(::lll_rdm_msgs::msg::SystemsHealthMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsg tags(::lll_rdm_msgs::msg::SystemsHealthMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsg msg_;
};

class Init_SystemsHealthMetricMsg_data
{
public:
  explicit Init_SystemsHealthMetricMsg_data(::lll_rdm_msgs::msg::SystemsHealthMetricMsg & msg)
  : msg_(msg)
  {}
  Init_SystemsHealthMetricMsg_tags data(::lll_rdm_msgs::msg::SystemsHealthMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SystemsHealthMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsg msg_;
};

class Init_SystemsHealthMetricMsg_header
{
public:
  Init_SystemsHealthMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemsHealthMetricMsg_data header(::lll_rdm_msgs::msg::SystemsHealthMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SystemsHealthMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SystemsHealthMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SystemsHealthMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_SystemsHealthMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG__BUILDER_HPP_
