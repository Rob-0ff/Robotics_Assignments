// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from led_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "led_interfaces/msg/led_panel_state.hpp"


#ifndef LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__BUILDER_HPP_
#define LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "led_interfaces/msg/detail/led_panel_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace led_interfaces
{

namespace msg
{

namespace builder
{

class Init_LedPanelState_led
{
public:
  Init_LedPanelState_led()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::led_interfaces::msg::LedPanelState led(::led_interfaces::msg::LedPanelState::_led_type arg)
  {
    msg_.led = std::move(arg);
    return std::move(msg_);
  }

private:
  ::led_interfaces::msg::LedPanelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::led_interfaces::msg::LedPanelState>()
{
  return led_interfaces::msg::builder::Init_LedPanelState_led();
}

}  // namespace led_interfaces

#endif  // LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__BUILDER_HPP_
