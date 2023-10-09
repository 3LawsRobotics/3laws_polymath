// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SensorNoiseData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/sensor_noise_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorNoiseData & msg,
  std::ostream & out)
{
  out << "{";
  // member: average_std_error
  {
    out << "average_std_error: ";
    rosidl_generator_traits::value_to_yaml(msg.average_std_error, out);
    out << ", ";
  }

  // member: max_std_error
  {
    out << "max_std_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_std_error, out);
    out << ", ";
  }

  // member: angle_max_error
  {
    out << "angle_max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_max_error, out);
    out << ", ";
  }

  // member: percent_of_sigma
  {
    out << "percent_of_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_of_sigma, out);
    out << ", ";
  }

  // member: p_value
  {
    out << "p_value: ";
    rosidl_generator_traits::value_to_yaml(msg.p_value, out);
    out << ", ";
  }

  // member: reject_model
  {
    out << "reject_model: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_model, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorNoiseData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: average_std_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_std_error: ";
    rosidl_generator_traits::value_to_yaml(msg.average_std_error, out);
    out << "\n";
  }

  // member: max_std_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_std_error: ";
    rosidl_generator_traits::value_to_yaml(msg.max_std_error, out);
    out << "\n";
  }

  // member: angle_max_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_max_error: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_max_error, out);
    out << "\n";
  }

  // member: percent_of_sigma
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "percent_of_sigma: ";
    rosidl_generator_traits::value_to_yaml(msg.percent_of_sigma, out);
    out << "\n";
  }

  // member: p_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_value: ";
    rosidl_generator_traits::value_to_yaml(msg.p_value, out);
    out << "\n";
  }

  // member: reject_model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reject_model: ";
    rosidl_generator_traits::value_to_yaml(msg.reject_model, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorNoiseData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace lll_rdm_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lll_rdm_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lll_rdm_msgs::msg::SensorNoiseData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SensorNoiseData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SensorNoiseData>()
{
  return "lll_rdm_msgs::msg::SensorNoiseData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SensorNoiseData>()
{
  return "lll_rdm_msgs/msg/SensorNoiseData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SensorNoiseData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SensorNoiseData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lll_rdm_msgs::msg::SensorNoiseData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_DATA__TRAITS_HPP_
