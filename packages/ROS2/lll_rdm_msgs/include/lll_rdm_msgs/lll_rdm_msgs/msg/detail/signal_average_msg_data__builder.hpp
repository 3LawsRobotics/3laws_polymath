// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SignalAverageMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SignalAverageMsgData_max
{
public:
  explicit Init_SignalAverageMsgData_max(::lll_rdm_msgs::msg::SignalAverageMsgData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SignalAverageMsgData max(::lll_rdm_msgs::msg::SignalAverageMsgData::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalAverageMsgData msg_;
};

class Init_SignalAverageMsgData_min
{
public:
  explicit Init_SignalAverageMsgData_min(::lll_rdm_msgs::msg::SignalAverageMsgData & msg)
  : msg_(msg)
  {}
  Init_SignalAverageMsgData_max min(::lll_rdm_msgs::msg::SignalAverageMsgData::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_SignalAverageMsgData_max(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalAverageMsgData msg_;
};

class Init_SignalAverageMsgData_average
{
public:
  Init_SignalAverageMsgData_average()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SignalAverageMsgData_min average(::lll_rdm_msgs::msg::SignalAverageMsgData::_average_type arg)
  {
    msg_.average = std::move(arg);
    return Init_SignalAverageMsgData_min(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SignalAverageMsgData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SignalAverageMsgData>()
{
  return lll_rdm_msgs::msg::builder::Init_SignalAverageMsgData_average();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__BUILDER_HPP_
