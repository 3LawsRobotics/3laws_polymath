// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorObstructionData & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_angle
  {
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << ", ";
  }

  // member: end_angle
  {
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << ", ";
  }

  // member: min_dist
  {
    out << "min_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.min_dist, out);
    out << ", ";
  }

  // member: max_dist
  {
    out << "max_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.max_dist, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorObstructionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.start_angle, out);
    out << "\n";
  }

  // member: end_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end_angle: ";
    rosidl_generator_traits::value_to_yaml(msg.end_angle, out);
    out << "\n";
  }

  // member: min_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.min_dist, out);
    out << "\n";
  }

  // member: max_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.max_dist, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorObstructionData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::SensorObstructionData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SensorObstructionData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SensorObstructionData>()
{
  return "lll_rdm_msgs::msg::SensorObstructionData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SensorObstructionData>()
{
  return "lll_rdm_msgs/msg/SensorObstructionData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SensorObstructionData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SensorObstructionData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::SensorObstructionData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_DATA__TRAITS_HPP_
