// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/IncidentLogMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/incident_log_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IncidentLogMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: in_progress
  {
    out << "in_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.in_progress, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: detail
  {
    out << "detail: ";
    rosidl_generator_traits::value_to_yaml(msg.detail, out);
    out << ", ";
  }

  // member: domain
  {
    out << "domain: ";
    rosidl_generator_traits::value_to_yaml(msg.domain, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IncidentLogMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: in_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.in_progress, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: detail
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detail: ";
    rosidl_generator_traits::value_to_yaml(msg.detail, out);
    out << "\n";
  }

  // member: domain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "domain: ";
    rosidl_generator_traits::value_to_yaml(msg.domain, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IncidentLogMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::IncidentLogMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::IncidentLogMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::IncidentLogMsgData>()
{
  return "lll_rdm_msgs::msg::IncidentLogMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::IncidentLogMsgData>()
{
  return "lll_rdm_msgs/msg/IncidentLogMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::IncidentLogMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::IncidentLogMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::IncidentLogMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__INCIDENT_LOG_MSG_DATA__TRAITS_HPP_
