// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from led_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "led_interfaces/msg/led_panel_state.hpp"


#ifndef LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__TRAITS_HPP_
#define LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "led_interfaces/msg/detail/led_panel_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace led_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LedPanelState & msg,
  std::ostream & out)
{
  out << "{";
  // member: led
  {
    if (msg.led.size() == 0) {
      out << "led: []";
    } else {
      out << "led: [";
      size_t pending_items = msg.led.size();
      for (auto item : msg.led) {
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
  const LedPanelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.led.size() == 0) {
      out << "led: []\n";
    } else {
      out << "led:\n";
      for (auto item : msg.led) {
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

inline std::string to_yaml(const LedPanelState & msg, bool use_flow_style = false)
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

}  // namespace led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use led_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const led_interfaces::msg::LedPanelState & msg,
  std::ostream & out, size_t indentation = 0)
{
  led_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use led_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const led_interfaces::msg::LedPanelState & msg)
{
  return led_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<led_interfaces::msg::LedPanelState>()
{
  return "led_interfaces::msg::LedPanelState";
}

template<>
inline const char * name<led_interfaces::msg::LedPanelState>()
{
  return "led_interfaces/msg/LedPanelState";
}

template<>
struct has_fixed_size<led_interfaces::msg::LedPanelState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<led_interfaces::msg::LedPanelState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<led_interfaces::msg::LedPanelState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__TRAITS_HPP_
