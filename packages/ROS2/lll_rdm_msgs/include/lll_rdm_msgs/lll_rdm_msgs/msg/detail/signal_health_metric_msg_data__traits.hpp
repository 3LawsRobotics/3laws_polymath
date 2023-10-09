// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_rdm_msgs:msg/SignalHealthMetricMsgData.idl
// generated code does not contain a copyright notice

#ifndef LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
#define LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_rdm_msgs/msg/detail/signal_health_metric_msg_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace lll_rdm_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SignalHealthMetricMsgData & msg,
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

  // member: wrong_size
  {
    out << "wrong_size: ";
    rosidl_generator_traits::value_to_yaml(msg.wrong_size, out);
    out << ", ";
  }

  // member: bad_timestamp
  {
    out << "bad_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_timestamp, out);
    out << ", ";
  }

  // member: has_nan
  {
    out << "has_nan: ";
    rosidl_generator_traits::value_to_yaml(msg.has_nan, out);
    out << ", ";
  }

  // member: has_infinity
  {
    out << "has_infinity: ";
    rosidl_generator_traits::value_to_yaml(msg.has_infinity, out);
    out << ", ";
  }

  // member: has_zero
  {
    out << "has_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.has_zero, out);
    out << ", ";
  }

  // member: has_subnormal
  {
    out << "has_subnormal: ";
    rosidl_generator_traits::value_to_yaml(msg.has_subnormal, out);
    out << ", ";
  }

  // member: norm_type
  {
    out << "norm_type: ";
    rosidl_generator_traits::value_to_yaml(msg.norm_type, out);
    out << ", ";
  }

  // member: norm
  {
    out << "norm: ";
    rosidl_generator_traits::value_to_yaml(msg.norm, out);
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rates
  {
    if (msg.rates.size() == 0) {
      out << "rates: []";
    } else {
      out << "rates: [";
      size_t pending_items = msg.rates.size();
      for (auto item : msg.rates) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const SignalHealthMetricMsgData & msg,
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

  // member: wrong_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wrong_size: ";
    rosidl_generator_traits::value_to_yaml(msg.wrong_size, out);
    out << "\n";
  }

  // member: bad_timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bad_timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.bad_timestamp, out);
    out << "\n";
  }

  // member: has_nan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_nan: ";
    rosidl_generator_traits::value_to_yaml(msg.has_nan, out);
    out << "\n";
  }

  // member: has_infinity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_infinity: ";
    rosidl_generator_traits::value_to_yaml(msg.has_infinity, out);
    out << "\n";
  }

  // member: has_zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.has_zero, out);
    out << "\n";
  }

  // member: has_subnormal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_subnormal: ";
    rosidl_generator_traits::value_to_yaml(msg.has_subnormal, out);
    out << "\n";
  }

  // member: norm_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "norm_type: ";
    rosidl_generator_traits::value_to_yaml(msg.norm_type, out);
    out << "\n";
  }

  // member: norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "norm: ";
    rosidl_generator_traits::value_to_yaml(msg.norm, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rates.size() == 0) {
      out << "rates: []\n";
    } else {
      out << "rates:\n";
      for (auto item : msg.rates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SignalHealthMetricMsgData & msg, bool use_flow_style = false)
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
  const lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_rdm_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_rdm_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_rdm_msgs::msg::SignalHealthMetricMsgData & msg)
{
  return lll_rdm_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_rdm_msgs::msg::SignalHealthMetricMsgData>()
{
  return "lll_rdm_msgs::msg::SignalHealthMetricMsgData";
}

template<>
inline const char * name<lll_rdm_msgs::msg::SignalHealthMetricMsgData>()
{
  return "lll_rdm_msgs/msg/SignalHealthMetricMsgData";
}

template<>
struct has_fixed_size<lll_rdm_msgs::msg::SignalHealthMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_rdm_msgs::msg::SignalHealthMetricMsgData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_rdm_msgs::msg::SignalHealthMetricMsgData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_RDM_MSGS__MSG__DETAIL__SIGNAL_HEALTH_METRIC_MSG_DATA__TRAITS_HPP_
