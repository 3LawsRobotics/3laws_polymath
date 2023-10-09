// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/MetricPassthroughMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/metric_passthrough_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MetricPassthroughMetricMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MetricPassthroughMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MetricPassthroughMetricMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::MetricPassthroughMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::MetricPassthroughMetricMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::MetricPassthroughMetricMsgData>()
{
  return "lll_rdm_msgs::msg::MetricPassthroughMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::MetricPassthroughMetricMsgData>()
{
  return "lll_rdm_msgs/msg/MetricPassthroughMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::MetricPassthroughMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::MetricPassthroughMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::MetricPassthroughMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__METRIC_PASSTHROUGH_METRIC_MSG_DATA__TRAITS_HPP_
