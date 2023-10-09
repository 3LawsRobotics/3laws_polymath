// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SystemResourcesInputMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/system_resources_input_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SystemResourcesInputMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: system_id
  {
    out << "system_id: ";
    rosidl_generator_traits::value_to_yaml(msg.system_id, out);
    out << ", ";
  }

  // member: cpu_load
  {
    out << "cpu_load: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load, out);
    out << ", ";
  }

  // member: ram_usage
  {
    out << "ram_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.ram_usage, out);
    out << ", ";
  }

  // member: disk_usage
  {
    out << "disk_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.disk_usage, out);
    out << ", ";
  }

  // member: network_read
  {
    out << "network_read: ";
    rosidl_generator_traits::value_to_yaml(msg.network_read, out);
    out << ", ";
  }

  // member: network_write
  {
    out << "network_write: ";
    rosidl_generator_traits::value_to_yaml(msg.network_write, out);
    out << ", ";
  }

  // member: cpu_nb
  {
    out << "cpu_nb: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_nb, out);
    out << ", ";
  }

  // member: procs_nb
  {
    out << "procs_nb: ";
    rosidl_generator_traits::value_to_yaml(msg.procs_nb, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SystemResourcesInputMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: system_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_id: ";
    rosidl_generator_traits::value_to_yaml(msg.system_id, out);
    out << "\n";
  }

  // member: cpu_load
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_load: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_load, out);
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

  // member: disk_usage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "disk_usage: ";
    rosidl_generator_traits::value_to_yaml(msg.disk_usage, out);
    out << "\n";
  }

  // member: network_read
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "network_read: ";
    rosidl_generator_traits::value_to_yaml(msg.network_read, out);
    out << "\n";
  }

  // member: network_write
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "network_write: ";
    rosidl_generator_traits::value_to_yaml(msg.network_write, out);
    out << "\n";
  }

  // member: cpu_nb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cpu_nb: ";
    rosidl_generator_traits::value_to_yaml(msg.cpu_nb, out);
    out << "\n";
  }

  // member: procs_nb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "procs_nb: ";
    rosidl_generator_traits::value_to_yaml(msg.procs_nb, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SystemResourcesInputMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SystemResourcesInputMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SystemResourcesInputMsgData>()
{
  return "lll_rdm_msgs::msg::SystemResourcesInputMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SystemResourcesInputMsgData>()
{
  return "lll_rdm_msgs/msg/SystemResourcesInputMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SystemResourcesInputMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SystemResourcesInputMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::SystemResourcesInputMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SYSTEM_RESOURCES_INPUT_MSG_DATA__TRAITS_HPP_
