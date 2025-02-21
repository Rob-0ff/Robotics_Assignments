// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from led_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "led_interfaces/srv/set_led.hpp"


#ifndef LED_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
#define LED_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "led_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace led_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Request_state
{
public:
  explicit Init_SetLED_Request_state(::led_interfaces::srv::SetLED_Request & msg)
  : msg_(msg)
  {}
  ::led_interfaces::srv::SetLED_Request state(::led_interfaces::srv::SetLED_Request::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::led_interfaces::srv::SetLED_Request msg_;
};

class Init_SetLED_Request_led_number
{
public:
  Init_SetLED_Request_led_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLED_Request_state led_number(::led_interfaces::srv::SetLED_Request::_led_number_type arg)
  {
    msg_.led_number = std::move(arg);
    return Init_SetLED_Request_state(msg_);
  }

private:
  ::led_interfaces::srv::SetLED_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::led_interfaces::srv::SetLED_Request>()
{
  return led_interfaces::srv::builder::Init_SetLED_Request_led_number();
}

}  // namespace led_interfaces


namespace led_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Response_success
{
public:
  Init_SetLED_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::led_interfaces::srv::SetLED_Response success(::led_interfaces::srv::SetLED_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::led_interfaces::srv::SetLED_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::led_interfaces::srv::SetLED_Response>()
{
  return led_interfaces::srv::builder::Init_SetLED_Response_success();
}

}  // namespace led_interfaces


namespace led_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetLED_Event_response
{
public:
  explicit Init_SetLED_Event_response(::led_interfaces::srv::SetLED_Event & msg)
  : msg_(msg)
  {}
  ::led_interfaces::srv::SetLED_Event response(::led_interfaces::srv::SetLED_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::led_interfaces::srv::SetLED_Event msg_;
};

class Init_SetLED_Event_request
{
public:
  explicit Init_SetLED_Event_request(::led_interfaces::srv::SetLED_Event & msg)
  : msg_(msg)
  {}
  Init_SetLED_Event_response request(::led_interfaces::srv::SetLED_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_SetLED_Event_response(msg_);
  }

private:
  ::led_interfaces::srv::SetLED_Event msg_;
};

class Init_SetLED_Event_info
{
public:
  Init_SetLED_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLED_Event_request info(::led_interfaces::srv::SetLED_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_SetLED_Event_request(msg_);
  }

private:
  ::led_interfaces::srv::SetLED_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::led_interfaces::srv::SetLED_Event>()
{
  return led_interfaces::srv::builder::Init_SetLED_Event_info();
}

}  // namespace led_interfaces

#endif  // LED_INTERFACES__SRV__DETAIL__SET_LED__BUILDER_HPP_
