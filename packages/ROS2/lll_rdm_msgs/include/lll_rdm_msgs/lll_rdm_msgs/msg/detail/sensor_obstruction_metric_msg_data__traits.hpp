// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SensorObstructionMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/sensor_obstruction_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'obstructions'
#include "lll_rdm_msgs/msg/detail/sensor_obstruction_data__traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorObstructionMetricMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: time_since_last_msg
  {
    out << "time_since_last_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_msg, out);
    out << ", ";
  }

  // member: obstructions_by_sectors
  {
    if (msg.obstructions_by_sectors.size() == 0) {
      out << "obstructions_by_sectors: []";
    } else {
      out << "obstructions_by_sectors: [";
      size_t pending_items = msg.obstructions_by_sectors.size();
      for (auto item : msg.obstructions_by_sectors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: obstructions
  {
    if (msg.obstructions.size() == 0) {
      out << "obstructions: []";
    } else {
      out << "obstructions: [";
      size_t pending_items = msg.obstructions.size();
      for (auto item : msg.obstructions) {
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
  const SensorObstructionMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_since_last_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_since_last_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.time_since_last_msg, out);
    out << "\n";
  }

  // member: obstructions_by_sectors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstructions_by_sectors.size() == 0) {
      out << "obstructions_by_sectors: []\n";
    } else {
      out << "obstructions_by_sectors:\n";
      for (auto item : msg.obstructions_by_sectors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: obstructions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.obstructions.size() == 0) {
      out << "obstructions: []\n";
    } else {
      out << "obstructions:\n";
      for (auto item : msg.obstructions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorObstructionMetricMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::SensorObstructionMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SensorObstructionMetricMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SensorObstructionMetricMsgData>()
{
  return "lll_rdm_msgs::msg::SensorObstructionMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SensorObstructionMetricMsgData>()
{
  return "lll_rdm_msgs/msg/SensorObstructionMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SensorObstructionMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SensorObstructionMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::SensorObstructionMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SENSOR_OBSTRUCTION_METRIC_MSG_DATA__TRAITS_HPP_
