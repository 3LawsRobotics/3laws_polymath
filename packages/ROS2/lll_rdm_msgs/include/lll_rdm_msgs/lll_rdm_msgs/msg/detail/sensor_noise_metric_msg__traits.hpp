// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SensorNoiseMetricMsg.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/sensor_noise_metric_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "lll_rdm_msgs/msg/detail/msg_header__traits.hpp"
// Member 'data'
#include "lll_rdm_msgs/msg/detail/sensor_noise_metric_msg_data__traits.hpp"
// Member 'tags'
#include "lll_rdm_msgs/msg/detail/metric_tags_msg_data__traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorNoiseMetricMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: data
  {
    out << "data: ";
    to_flow_style_yaml(msg.data, out);
    out << ", ";
  }

  // member: tags
  {
    if (msg.tags.size() == 0) {
      out << "tags: []";
    } else {
      out << "tags: [";
      size_t pending_items = msg.tags.size();
      for (auto item : msg.tags) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorNoiseMetricMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data:\n";
    to_block_style_yaml(msg.data, out, indentation + 2);
  }

  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tags.size() == 0) {
      out << "tags: []\n";
    } else {
      out << "tags:\n";
      for (auto item : msg.tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorNoiseMetricMsg & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::SensorNoiseMetricMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SensorNoiseMetricMsg & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SensorNoiseMetricMsg>()
{
  return "lll_rdm_msgs::msg::SensorNoiseMetricMsg";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SensorNoiseMetricMsg>()
{
  return "lll_rdm_msgs/msg/SensorNoiseMetricMsg";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SensorNoiseMetricMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SensorNoiseMetricMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::SensorNoiseMetricMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_NOISE_METRIC_MSG__TRAITS_HPP_
