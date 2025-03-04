// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from led_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "led_interfaces/srv/set_led.hpp"


#ifndef LED_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
#define LED_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "led_interfaces/srv/detail/set_led__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace led_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLED_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_number
  {
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLED_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_number
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_number: ";
    rosidl_generator_traits::value_to_yaml(msg.led_number, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLED_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use led_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const led_interfaces::srv::SetLED_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  led_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use led_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const led_interfaces::srv::SetLED_Request & msg)
{
  return led_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<led_interfaces::srv::SetLED_Request>()
{
  return "led_interfaces::srv::SetLED_Request";
}

template<>
inline const char * name<led_interfaces::srv::SetLED_Request>()
{
  return "led_interfaces/srv/SetLED_Request";
}

template<>
struct has_fixed_size<led_interfaces::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<led_interfaces::srv::SetLED_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<led_interfaces::srv::SetLED_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace led_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLED_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetLED_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLED_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use led_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const led_interfaces::srv::SetLED_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  led_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use led_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const led_interfaces::srv::SetLED_Response & msg)
{
  return led_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<led_interfaces::srv::SetLED_Response>()
{
  return "led_interfaces::srv::SetLED_Response";
}

template<>
inline const char * name<led_interfaces::srv::SetLED_Response>()
{
  return "led_interfaces/srv/SetLED_Response";
}

template<>
struct has_fixed_size<led_interfaces::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<led_interfaces::srv::SetLED_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<led_interfaces::srv::SetLED_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace led_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetLED_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const SetLED_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetLED_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace led_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use led_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const led_interfaces::srv::SetLED_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  led_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use led_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const led_interfaces::srv::SetLED_Event & msg)
{
  return led_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<led_interfaces::srv::SetLED_Event>()
{
  return "led_interfaces::srv::SetLED_Event";
}

template<>
inline const char * name<led_interfaces::srv::SetLED_Event>()
{
  return "led_interfaces/srv/SetLED_Event";
}

template<>
struct has_fixed_size<led_interfaces::srv::SetLED_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<led_interfaces::srv::SetLED_Event>
  : std::integral_constant<bool, has_bounded_size<led_interfaces::srv::SetLED_Request>::value && has_bounded_size<led_interfaces::srv::SetLED_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<led_interfaces::srv::SetLED_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<led_interfaces::srv::SetLED>()
{
  return "led_interfaces::srv::SetLED";
}

template<>
inline const char * name<led_interfaces::srv::SetLED>()
{
  return "led_interfaces/srv/SetLED";
}

template<>
struct has_fixed_size<led_interfaces::srv::SetLED>
  : std::integral_constant<
    bool,
    has_fixed_size<led_interfaces::srv::SetLED_Request>::value &&
    has_fixed_size<led_interfaces::srv::SetLED_Response>::value
  >
{
};

template<>
struct has_bounded_size<led_interfaces::srv::SetLED>
  : std::integral_constant<
    bool,
    has_bounded_size<led_interfaces::srv::SetLED_Request>::value &&
    has_bounded_size<led_interfaces::srv::SetLED_Response>::value
  >
{
};

template<>
struct is_service<led_interfaces::srv::SetLED>
  : std::true_type
{
};

template<>
struct is_service_request<led_interfaces::srv::SetLED_Request>
  : std::true_type
{
};

template<>
struct is_service_response<led_interfaces::srv::SetLED_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LED_INTERFACES__SRV__DETAIL__SET_LED__TRAITS_HPP_
