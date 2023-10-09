// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/ProcessHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/process_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ProcessHealthMetricMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: cpu_usage
  {
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << ", ";
  }

  // member: cpu_usage_total
  {
    out << "cpu_usage_total: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage_total, out);
    out << ", ";
  }

  // member: ram_usage
  {
    out << "ram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_usage, out);
    out << ", ";
  }

  // member: n_threads
  {
    out << "n_threads: ";
    rosidl_generator_traits::value_to_yaml(msg.n_threads, out);
    out << ", ";
  }

  // member: process_up_time
  {
    out << "process_up_time: ";
    rosidl_generator_traits::value_to_yaml(msg.process_up_time, out);
    out << ", ";
  }

  // member: process_run_time
  {
    out << "process_run_time: ";
    rosidl_generator_traits::value_to_yaml(msg.process_run_time, out);
    out << ", ";
  }

  // member: io_total_read
  {
    out << "io_total_read: ";
    rosidl_generator_traits::value_to_yaml(msg.io_total_read, out);
    out << ", ";
  }

  // member: io_total_write
  {
    out << "io_total_write: ";
    rosidl_generator_traits::value_to_yaml(msg.io_total_write, out);
    out << ", ";
  }

  // member: io_disk_read
  {
    out << "io_disk_read: ";
    rosidl_generator_traits::value_to_yaml(msg.io_disk_read, out);
    out << ", ";
  }

  // member: io_disk_write
  {
    out << "io_disk_write: ";
    rosidl_generator_traits::value_to_yaml(msg.io_disk_write, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ProcessHealthMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cpu_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage, out);
    out << "\n";
  }

  // member: cpu_usage_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_usage_total: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_usage_total, out);
    out << "\n";
  }

  // member: ram_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_usage, out);
    out << "\n";
  }

  // member: n_threads
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_threads: ";
    rosidl_generator_traits::value_to_yaml(msg.n_threads, out);
    out << "\n";
  }

  // member: process_up_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_up_time: ";
    rosidl_generator_traits::value_to_yaml(msg.process_up_time, out);
    out << "\n";
  }

  // member: process_run_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "process_run_time: ";
    rosidl_generator_traits::value_to_yaml(msg.process_run_time, out);
    out << "\n";
  }

  // member: io_total_read
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_total_read: ";
    rosidl_generator_traits::value_to_yaml(msg.io_total_read, out);
    out << "\n";
  }

  // member: io_total_write
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_total_write: ";
    rosidl_generator_traits::value_to_yaml(msg.io_total_write, out);
    out << "\n";
  }

  // member: io_disk_read
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_disk_read: ";
    rosidl_generator_traits::value_to_yaml(msg.io_disk_read, out);
    out << "\n";
  }

  // member: io_disk_write
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "io_disk_write: ";
    rosidl_generator_traits::value_to_yaml(msg.io_disk_write, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ProcessHealthMetricMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::ProcessHealthMetricMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::ProcessHealthMetricMsgData>()
{
  return "lll_rdm_msgs::msg::ProcessHealthMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::ProcessHealthMetricMsgData>()
{
  return "lll_rdm_msgs/msg/ProcessHealthMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::ProcessHealthMetricMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::ProcessHealthMetricMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lll_rdm_msgs::msg::ProcessHealthMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__PROCESS_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
