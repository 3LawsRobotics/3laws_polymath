// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/MetricTagsMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__METRIC_TAGS_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__METRIC_TAGS_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_MetricTagsMsgData_value
{
public:
  explicit Init_MetricTagsMsgData_value(::lll_rdm_msgs::msg::MetricTagsMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::MetricTagsMsgData value(::lll_rdm_msgs::msg::MetricTagsMsgData::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MetricTagsMsgData msg_;
};

class Init_MetricTagsMsgData_key
{
public:
  Init_MetricTagsMsgData_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MetricTagsMsgData_value key(::lll_rdm_msgs::msg::MetricTagsMsgData::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_MetricTagsMsgData_value(msg_);
  }

private:
  ::lll_rdm_msgs::msg::MetricTagsMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::MetricTagsMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_MetricTagsMsgData_key();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__METRIC_TAGS_MSG_DATA__BUILDER_HPP_
