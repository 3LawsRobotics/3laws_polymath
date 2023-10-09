// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_DomainStatusMetricMsg_tags
{
public:
  explicit Init_DomainStatusMetricMsg_tags(::lll_rdm_msgs::msg::DomainStatusMetricMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::DomainStatusMetricMsg tags(::lll_rdm_msgs::msg::DomainStatusMetricMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsg msg_;
};

class Init_DomainStatusMetricMsg_data
{
public:
  explicit Init_DomainStatusMetricMsg_data(::lll_rdm_msgs::msg::DomainStatusMetricMsg & msg)
  : msg_(msg)
  {}
  Init_DomainStatusMetricMsg_tags data(::lll_rdm_msgs::msg::DomainStatusMetricMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_DomainStatusMetricMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsg msg_;
};

class Init_DomainStatusMetricMsg_header
{
public:
  Init_DomainStatusMetricMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DomainStatusMetricMsg_data header(::lll_rdm_msgs::msg::DomainStatusMetricMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DomainStatusMetricMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::DomainStatusMetricMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::DomainStatusMetricMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_DomainStatusMetricMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG__BUILDER_HPP_
