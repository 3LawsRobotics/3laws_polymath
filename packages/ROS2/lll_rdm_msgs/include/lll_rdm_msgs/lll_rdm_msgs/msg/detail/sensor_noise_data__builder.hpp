// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__BUILDER_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "lll_rdm_msgs/msg/detail/sensor_noise_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace lll_rdm_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorNoiseData_reject_model
{
public:
  explicit Init_SensorNoiseData_reject_model(::lll_rdm_msgs::msg::SensorNoiseData & msg)
  : msg_(msg)
  {}
  ::lll_rdm_msgs::msg::SensorNoiseData reject_model(::lll_rdm_msgs::msg::SensorNoiseData::_reject_model_type arg)
  {
    msg_.reject_model = std::move(arg);
    return std::move(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseData msg_;
};

class Init_SensorNoiseData_p_value
{
public:
  explicit Init_SensorNoiseData_p_value(::lll_rdm_msgs::msg::SensorNoiseData & msg)
  : msg_(msg)
  {}
  Init_SensorNoiseData_reject_model p_value(::lll_rdm_msgs::msg::SensorNoiseData::_p_value_type arg)
  {
    msg_.p_value = std::move(arg);
    return Init_SensorNoiseData_reject_model(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseData msg_;
};

class Init_SensorNoiseData_percent_of_sigma
{
public:
  explicit Init_SensorNoiseData_percent_of_sigma(::lll_rdm_msgs::msg::SensorNoiseData & msg)
  : msg_(msg)
  {}
  Init_SensorNoiseData_p_value percent_of_sigma(::lll_rdm_msgs::msg::SensorNoiseData::_percent_of_sigma_type arg)
  {
    msg_.percent_of_sigma = std::move(arg);
    return Init_SensorNoiseData_p_value(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseData msg_;
};

class Init_SensorNoiseData_angle_max_error
{
public:
  explicit Init_SensorNoiseData_angle_max_error(::lll_rdm_msgs::msg::SensorNoiseData & msg)
  : msg_(msg)
  {}
  Init_SensorNoiseData_percent_of_sigma angle_max_error(::lll_rdm_msgs::msg::SensorNoiseData::_angle_max_error_type arg)
  {
    msg_.angle_max_error = std::move(arg);
    return Init_SensorNoiseData_percent_of_sigma(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseData msg_;
};

class Init_SensorNoiseData_max_std_error
{
public:
  explicit Init_SensorNoiseData_max_std_error(::lll_rdm_msgs::msg::SensorNoiseData & msg)
  : msg_(msg)
  {}
  Init_SensorNoiseData_angle_max_error max_std_error(::lll_rdm_msgs::msg::SensorNoiseData::_max_std_error_type arg)
  {
    msg_.max_std_error = std::move(arg);
    return Init_SensorNoiseData_angle_max_error(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseData msg_;
};

class Init_SensorNoiseData_average_std_error
{
public:
  Init_SensorNoiseData_average_std_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorNoiseData_max_std_error average_std_error(::lll_rdm_msgs::msg::SensorNoiseData::_average_std_error_type arg)
  {
    msg_.average_std_error = std::move(arg);
    return Init_SensorNoiseData_max_std_error(msg_);
  }

private:
  ::lll_rdm_msgs::msg::SensorNoiseData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::lll_rdm_msgs::msg::SensorNoiseData>()
{
  return lll_rdm_msgs::msg::builder::Init_SensorNoiseData_average_std_error();
}

}  // namespace lll_rdm_msgs

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__BUILDER_HPP_
