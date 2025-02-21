// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tester_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tester_interfaces/msg/hardware_status.hpp"


#ifndef TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
#define TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tester_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace tester_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: temp
  {
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << ", ";
  }

  // member: motors_ready
  {
    out << "motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_ready, out);
    out << ", ";
  }

  // member: debug_message
  {
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    rosidl_generator_traits::value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: motors_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motors_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.motors_ready, out);
    out << "\n";
  }

  // member: debug_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_message: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HardwareStatus & msg, bool use_flow_style = false)
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

}  // namespace tester_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use tester_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tester_interfaces::msg::HardwareStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  tester_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tester_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const tester_interfaces::msg::HardwareStatus & msg)
{
  return tester_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tester_interfaces::msg::HardwareStatus>()
{
  return "tester_interfaces::msg::HardwareStatus";
}

template<>
inline const char * name<tester_interfaces::msg::HardwareStatus>()
{
  return "tester_interfaces/msg/HardwareStatus";
}

template<>
struct has_fixed_size<tester_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tester_interfaces::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tester_interfaces::msg::HardwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
