// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SignalAverageMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/signal_average_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SignalAverageMsgData & msg,
  std::ostream & out)
{
  out << "{";
  // member: average
  {
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
    out << ", ";
  }

  // member: min
  {
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << ", ";
  }

  // member: max
  {
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SignalAverageMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: average
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average: ";
    rosidl_generator_traits::value_to_yaml(msg.average, out);
    out << "\n";
  }

  // member: min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min: ";
    rosidl_generator_traits::value_to_yaml(msg.min, out);
    out << "\n";
  }

  // member: max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max: ";
    rosidl_generator_traits::value_to_yaml(msg.max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SignalAverageMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::SignalAverageMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SignalAverageMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SignalAverageMsgData>()
{
  return "lll_rdm_msgs::msg::SignalAverageMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SignalAverageMsgData>()
{
  return "lll_rdm_msgs/msg/SignalAverageMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SignalAverageMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SignalAverageMsgData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<lll_rdm_msgs::msg::SignalAverageMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_AVERAGE_MSG_DATA__TRAITS_HPP_
