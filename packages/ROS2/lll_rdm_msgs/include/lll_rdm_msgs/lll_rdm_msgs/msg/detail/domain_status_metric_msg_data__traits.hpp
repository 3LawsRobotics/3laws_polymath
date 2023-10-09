// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/DomainStatusMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/domain_status_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DomainStatusMetricMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: system_status
  {
    out << "system_status: ";
    rosidl_generator_traits::value_to_yaml(msg.system_status, out);
    out << ", ";
  }

  // member: behavior_status
  {
    out << "behavior_status: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_status, out);
    out << ", ";
  }

  // member: hardware_status
  {
    out << "hardware_status: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_status, out);
    out << ", ";
  }

  // member: perception_status
  {
    out << "perception_status: ";
    rosidl_generator_traits::value_to_yaml(msg.perception_status, out);
    out << ", ";
  }

  // member: control_status
  {
    out << "control_status: ";
    rosidl_generator_traits::value_to_yaml(msg.control_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DomainStatusMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: system_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_status: ";
    rosidl_generator_traits::value_to_yaml(msg.system_status, out);
    out << "\n";
  }

  // member: behavior_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "behavior_status: ";
    rosidl_generator_traits::value_to_yaml(msg.behavior_status, out);
    out << "\n";
  }

  // member: hardware_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hardware_status: ";
    rosidl_generator_traits::value_to_yaml(msg.hardware_status, out);
    out << "\n";
  }

  // member: perception_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "perception_status: ";
    rosidl_generator_traits::value_to_yaml(msg.perception_status, out);
    out << "\n";
  }

  // member: control_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_status: ";
    rosidl_generator_traits::value_to_yaml(msg.control_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DomainStatusMetricMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::DomainStatusMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::DomainStatusMetricMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::DomainStatusMetricMsgData>()
{
  return "lll_rdm_msgs::msg::DomainStatusMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::DomainStatusMetricMsgData>()
{
  return "lll_rdm_msgs/msg/DomainStatusMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::DomainStatusMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::DomainStatusMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::DomainStatusMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__DOMAIN_STATUS_METRIC_MSG_DATA__TRAITS_HPP_
