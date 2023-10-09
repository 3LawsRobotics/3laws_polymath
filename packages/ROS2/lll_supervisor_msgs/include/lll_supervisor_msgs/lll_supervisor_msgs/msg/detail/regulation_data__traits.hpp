// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/RegulationData.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_supervisor_msgs/msg/detail/regulation_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'input_cstr'
#include "lll_supervisor_msgs/msg/detail/input_constraints__traits.hpp"

namespace lll_supervisor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RegulationData & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: t
  {
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << ", ";
  }

  // member: nu
  {
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << ", ";
  }

  // member: n_safety_cstr
  {
    out << "n_safety_cstr: ";
    rosidl_generator_traits::value_to_yaml(msg.n_safety_cstr, out);
    out << ", ";
  }

  // member: n_failsafes
  {
    out << "n_failsafes: ";
    rosidl_generator_traits::value_to_yaml(msg.n_failsafes, out);
    out << ", ";
  }

  // member: input_cstr
  {
    out << "input_cstr: ";
    to_flow_style_yaml(msg.input_cstr, out);
    out << ", ";
  }

  // member: lfh
  {
    if (msg.lfh.size() == 0) {
      out << "lfh: []";
    } else {
      out << "lfh: [";
      size_t pending_items = msg.lfh.size();
      for (auto item : msg.lfh) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lgh
  {
    if (msg.lgh.size() == 0) {
      out << "lgh: []";
    } else {
      out << "lgh: [";
      size_t pending_items = msg.lgh.size();
      for (auto item : msg.lgh) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dh_dt
  {
    if (msg.dh_dt.size() == 0) {
      out << "dh_dt: []";
    } else {
      out << "dh_dt: [";
      size_t pending_items = msg.dh_dt.size();
      for (auto item : msg.dh_dt) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: safety_val
  {
    if (msg.safety_val.size() == 0) {
      out << "safety_val: []";
    } else {
      out << "safety_val: [";
      size_t pending_items = msg.safety_val.size();
      for (auto item : msg.safety_val) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: failsafe_input
  {
    if (msg.failsafe_input.size() == 0) {
      out << "failsafe_input: []";
    } else {
      out << "failsafe_input: [";
      size_t pending_items = msg.failsafe_input.size();
      for (auto item : msg.failsafe_input) {
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
  const RegulationData & msg,
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

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    rosidl_generator_traits::value_to_yaml(msg.t, out);
    out << "\n";
  }

  // member: nu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nu: ";
    rosidl_generator_traits::value_to_yaml(msg.nu, out);
    out << "\n";
  }

  // member: n_safety_cstr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_safety_cstr: ";
    rosidl_generator_traits::value_to_yaml(msg.n_safety_cstr, out);
    out << "\n";
  }

  // member: n_failsafes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_failsafes: ";
    rosidl_generator_traits::value_to_yaml(msg.n_failsafes, out);
    out << "\n";
  }

  // member: input_cstr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_cstr:\n";
    to_block_style_yaml(msg.input_cstr, out, indentation + 2);
  }

  // member: lfh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lfh.size() == 0) {
      out << "lfh: []\n";
    } else {
      out << "lfh:\n";
      for (auto item : msg.lfh) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lgh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lgh.size() == 0) {
      out << "lgh: []\n";
    } else {
      out << "lgh:\n";
      for (auto item : msg.lgh) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dh_dt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dh_dt.size() == 0) {
      out << "dh_dt: []\n";
    } else {
      out << "dh_dt:\n";
      for (auto item : msg.dh_dt) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: safety_val
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.safety_val.size() == 0) {
      out << "safety_val: []\n";
    } else {
      out << "safety_val:\n";
      for (auto item : msg.safety_val) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: failsafe_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.failsafe_input.size() == 0) {
      out << "failsafe_input: []\n";
    } else {
      out << "failsafe_input:\n";
      for (auto item : msg.failsafe_input) {
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

inline std::string to_yaml(const RegulationData & msg, bool use_flow_style = false)
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

}  // namespace lll_supervisor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use lll_supervisor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const lll_supervisor_msgs::msg::RegulationData & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_supervisor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_supervisor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_supervisor_msgs::msg::RegulationData & msg)
{
  return lll_supervisor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_supervisor_msgs::msg::RegulationData>()
{
  return "lll_supervisor_msgs::msg::RegulationData";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::RegulationData>()
{
  return "lll_supervisor_msgs/msg/RegulationData";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::RegulationData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::RegulationData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::RegulationData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__REGULATION_DATA__TRAITS_HPP_
