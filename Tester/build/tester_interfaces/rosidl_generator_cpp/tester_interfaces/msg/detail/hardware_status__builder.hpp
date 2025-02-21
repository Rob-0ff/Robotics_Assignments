// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tester_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "tester_interfaces/msg/hardware_status.hpp"


#ifndef TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tester_interfaces/msg/detail/hardware_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tester_interfaces
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_debug_message
{
public:
  explicit Init_HardwareStatus_debug_message(::tester_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::tester_interfaces::msg::HardwareStatus debug_message(::tester_interfaces::msg::HardwareStatus::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tester_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_motors_ready
{
public:
  explicit Init_HardwareStatus_motors_ready(::tester_interfaces::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_debug_message motors_ready(::tester_interfaces::msg::HardwareStatus::_motors_ready_type arg)
  {
    msg_.motors_ready = std::move(arg);
    return Init_HardwareStatus_debug_message(msg_);
  }

private:
  ::tester_interfaces::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temp
{
public:
  Init_HardwareStatus_temp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_motors_ready temp(::tester_interfaces::msg::HardwareStatus::_temp_type arg)
  {
    msg_.temp = std::move(arg);
    return Init_HardwareStatus_motors_ready(msg_);
  }

private:
  ::tester_interfaces::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tester_interfaces::msg::HardwareStatus>()
{
  return tester_interfaces::msg::builder::Init_HardwareStatus_temp();
}

}  // namespace tester_interfaces

#endif  // TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
