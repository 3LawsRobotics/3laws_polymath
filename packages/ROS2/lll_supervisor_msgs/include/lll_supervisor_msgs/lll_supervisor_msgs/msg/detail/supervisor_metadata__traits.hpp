// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from lll_supervisor_msgs:msg/SupervisorMetadata.idl
// generated code does not contain a copyright notice

#ifndef LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__TRAITS_HPP_
#define LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "lll_supervisor_msgs/msg/detail/supervisor_metadata__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace lll_supervisor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SupervisorMetadata & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: t_state
  {
    out << "t_state: ";
    rosidl_generator_traits::value_to_yaml(msg.t_state, out);
    out << ", ";
  }

  // member: t_input
  {
    out << "t_input: ";
    rosidl_generator_traits::value_to_yaml(msg.t_input, out);
    out << ", ";
  }

  // member: input_desired
  {
    if (msg.input_desired.size() == 0) {
      out << "input_desired: []";
    } else {
      out << "input_desired: [";
      size_t pending_items = msg.input_desired.size();
      for (auto item : msg.input_desired) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_actual
  {
    if (msg.input_actual.size() == 0) {
      out << "input_actual: []";
    } else {
      out << "input_actual: [";
      size_t pending_items = msg.input_actual.size();
      for (auto item : msg.input_actual) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: input_failsafe
  {
    if (msg.input_failsafe.size() == 0) {
      out << "input_failsafe: []";
    } else {
      out << "input_failsafe: [";
      size_t pending_items = msg.input_failsafe.size();
      for (auto item : msg.input_failsafe) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: h_distance_current
  {
    out << "h_distance_current: ";
    rosidl_generator_traits::value_to_yaml(msg.h_distance_current, out);
    out << ", ";
  }

  // member: h_current
  {
    out << "h_current: ";
    rosidl_generator_traits::value_to_yaml(msg.h_current, out);
    out << ", ";
  }

  // member: h_predicted
  {
    out << "h_predicted: ";
    rosidl_generator_traits::value_to_yaml(msg.h_predicted, out);
    out << ", ";
  }

  // member: input_modification
  {
    out << "input_modification: ";
    rosidl_generator_traits::value_to_yaml(msg.input_modification, out);
    out << ", ";
  }

  // member: regulation_map_size
  {
    out << "regulation_map_size: ";
    rosidl_generator_traits::value_to_yaml(msg.regulation_map_size, out);
    out << ", ";
  }

  // member: generation_extras
  {
    if (msg.generation_extras.size() == 0) {
      out << "generation_extras: []";
    } else {
      out << "generation_extras: [";
      size_t pending_items = msg.generation_extras.size();
      for (auto item : msg.generation_extras) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: filtering_extras
  {
    if (msg.filtering_extras.size() == 0) {
      out << "filtering_extras: []";
    } else {
      out << "filtering_extras: [";
      size_t pending_items = msg.filtering_extras.size();
      for (auto item : msg.filtering_extras) {
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
  const SupervisorMetadata & msg,
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

  // member: t_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_state: ";
    rosidl_generator_traits::value_to_yaml(msg.t_state, out);
    out << "\n";
  }

  // member: t_input
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t_input: ";
    rosidl_generator_traits::value_to_yaml(msg.t_input, out);
    out << "\n";
  }

  // member: input_desired
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_desired.size() == 0) {
      out << "input_desired: []\n";
    } else {
      out << "input_desired:\n";
      for (auto item : msg.input_desired) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: input_actual
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_actual.size() == 0) {
      out << "input_actual: []\n";
    } else {
      out << "input_actual:\n";
      for (auto item : msg.input_actual) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: input_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.input_failsafe.size() == 0) {
      out << "input_failsafe: []\n";
    } else {
      out << "input_failsafe:\n";
      for (auto item : msg.input_failsafe) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: h_distance_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_distance_current: ";
    rosidl_generator_traits::value_to_yaml(msg.h_distance_current, out);
    out << "\n";
  }

  // member: h_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_current: ";
    rosidl_generator_traits::value_to_yaml(msg.h_current, out);
    out << "\n";
  }

  // member: h_predicted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h_predicted: ";
    rosidl_generator_traits::value_to_yaml(msg.h_predicted, out);
    out << "\n";
  }

  // member: input_modification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_modification: ";
    rosidl_generator_traits::value_to_yaml(msg.input_modification, out);
    out << "\n";
  }

  // member: regulation_map_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "regulation_map_size: ";
    rosidl_generator_traits::value_to_yaml(msg.regulation_map_size, out);
    out << "\n";
  }

  // member: generation_extras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.generation_extras.size() == 0) {
      out << "generation_extras: []\n";
    } else {
      out << "generation_extras:\n";
      for (auto item : msg.generation_extras) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: filtering_extras
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.filtering_extras.size() == 0) {
      out << "filtering_extras: []\n";
    } else {
      out << "filtering_extras:\n";
      for (auto item : msg.filtering_extras) {
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

inline std::string to_yaml(const SupervisorMetadata & msg, bool use_flow_style = false)
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
  const lll_supervisor_msgs::msg::SupervisorMetadata & msg,
  std::ostream & out, size_t indentation = 0)
{
  lll_supervisor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use lll_supervisor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const lll_supervisor_msgs::msg::SupervisorMetadata & msg)
{
  return lll_supervisor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<lll_supervisor_msgs::msg::SupervisorMetadata>()
{
  return "lll_supervisor_msgs::msg::SupervisorMetadata";
}

template<>
inline const char * name<lll_supervisor_msgs::msg::SupervisorMetadata>()
{
  return "lll_supervisor_msgs/msg/SupervisorMetadata";
}

template<>
struct has_fixed_size<lll_supervisor_msgs::msg::SupervisorMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<lll_supervisor_msgs::msg::SupervisorMetadata>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<lll_supervisor_msgs::msg::SupervisorMetadata>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLL_SUPERVISOR_MSGS__MSG__DETAIL__SUPERVISOR_METADATA__TRAITS_HPP_
