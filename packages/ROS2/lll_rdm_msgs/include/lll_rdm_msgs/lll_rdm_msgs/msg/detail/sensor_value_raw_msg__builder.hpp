// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SensorValueRawMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_VALUE_RAW_MSG__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_VALUE_RAW_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/sensor_value_raw_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorValueRawMsg_tags
{
public:
  explicit Init_SensorValueRawMsg_tags(::lll_rdm_msgs::msg::SensorValueRawMsg & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SensorValueRawMsg tags(::lll_rdm_msgs::msg::SensorValueRawMsg::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorValueRawMsg msg_;
};

class Init_SensorValueRawMsg_data
{
public:
  explicit Init_SensorValueRawMsg_data(::lll_rdm_msgs::msg::SensorValueRawMsg & msg)
  : msg_(msg)
  {}
  Init_SensorValueRawMsg_tags data(::lll_rdm_msgs::msg::SensorValueRawMsg::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_SensorValueRawMsg_tags(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorValueRawMsg msg_;
};

class Init_SensorValueRawMsg_header
{
public:
  Init_SensorValueRawMsg_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorValueRawMsg_data header(::lll_rdm_msgs::msg::SensorValueRawMsg::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SensorValueRawMsg_data(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorValueRawMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SensorValueRawMsg>()
{
  return lll_rdm_msgs::msg::builder::Init_SensorValueRawMsg_header();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_VALUE_RAW_MSG__BUILDER_HPP_
