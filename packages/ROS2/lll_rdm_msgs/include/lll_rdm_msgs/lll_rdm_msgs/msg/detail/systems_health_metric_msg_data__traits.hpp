// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SystemsHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/systems_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'values'
#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemsHealthMetricMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: time_since_last_msg
  {
    out << "time_since_last_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_msg, out);
    out << ", ";
  }

  // member: values
  {
    out << "values: ";
    to_flow_style_yaml(msg.values, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemsHealthMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: time_since_last_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_msg, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "values:\n";
    to_block_style_yaml(msg.values, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemsHealthMetricMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::SystemsHealthMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SystemsHealthMetricMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>()
{
  return "lll_rdm_msgs::msg::SystemsHealthMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>()
{
  return "lll_rdm_msgs/msg/SystemsHealthMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>
  : std::integral_constant<bool, has_fixed_size<lll_rdm_msgs::msg::SystemResourcesInputMsgData>::value> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>
  : std::integral_constant<bool, has_bounded_size<lll_rdm_msgs::msg::SystemResourcesInputMsgData>::value> {};

template<>
struct is_message<lll_rdm_msgs::msg::SystemsHealthMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEMS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
