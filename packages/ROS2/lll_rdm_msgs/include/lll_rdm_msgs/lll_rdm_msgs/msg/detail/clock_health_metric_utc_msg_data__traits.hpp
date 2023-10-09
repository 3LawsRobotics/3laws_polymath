// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/ClockHealthMetricUtcMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/clock_health_metric_utc_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ClockHealthMetricUtcMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_utc
  {
    out << "has_utc: ";
    rosidl_generator_traits::value_to_yaml(msg.has_utc, out);
    out << ", ";
  }

  // member: utc_time
  {
    out << "utc_time: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_time, out);
    out << ", ";
  }

  // member: rtc_time
  {
    out << "rtc_time: ";
    rosidl_generator_traits::value_to_yaml(msg.rtc_time, out);
    out << ", ";
  }

  // member: offset_from_utc
  {
    out << "offset_from_utc: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_from_utc, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ClockHealthMetricUtcMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_utc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_utc: ";
    rosidl_generator_traits::value_to_yaml(msg.has_utc, out);
    out << "\n";
  }

  // member: utc_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc_time: ";
    rosidl_generator_traits::value_to_yaml(msg.utc_time, out);
    out << "\n";
  }

  // member: rtc_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtc_time: ";
    rosidl_generator_traits::value_to_yaml(msg.rtc_time, out);
    out << "\n";
  }

  // member: offset_from_utc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_from_utc: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_from_utc, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ClockHealthMetricUtcMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData>()
{
  return "lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData>()
{
  return "lll_rdm_msgs/msg/ClockHealthMetricUtcMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lll_rdm_msgs::msg::ClockHealthMetricUtcMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__CLOCK_HEALTH_METRIC_UTC_MSG_DATA__TRAITS_HPP_
