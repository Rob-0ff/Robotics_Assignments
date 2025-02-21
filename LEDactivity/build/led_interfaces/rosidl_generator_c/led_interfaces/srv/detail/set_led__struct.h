// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from led_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "led_interfaces/srv/set_led.h"


#ifndef LED_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
#define LED_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SetLED in the package led_interfaces.
typedef struct led_interfaces__srv__SetLED_Request
{
  int64_t led_number;
  bool state;
} led_interfaces__srv__SetLED_Request;

// Struct for a sequence of led_interfaces__srv__SetLED_Request.
typedef struct led_interfaces__srv__SetLED_Request__Sequence
{
  led_interfaces__srv__SetLED_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} led_interfaces__srv__SetLED_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetLED in the package led_interfaces.
typedef struct led_interfaces__srv__SetLED_Response
{
  bool success;
} led_interfaces__srv__SetLED_Response;

// Struct for a sequence of led_interfaces__srv__SetLED_Response.
typedef struct led_interfaces__srv__SetLED_Response__Sequence
{
  led_interfaces__srv__SetLED_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} led_interfaces__srv__SetLED_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  led_interfaces__srv__SetLED_Event__request__MAX_SIZE = 1
};
// response
enum
{
  led_interfaces__srv__SetLED_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetLED in the package led_interfaces.
typedef struct led_interfaces__srv__SetLED_Event
{
  service_msgs__msg__ServiceEventInfo info;
  led_interfaces__srv__SetLED_Request__Sequence request;
  led_interfaces__srv__SetLED_Response__Sequence response;
} led_interfaces__srv__SetLED_Event;

// Struct for a sequence of led_interfaces__srv__SetLED_Event.
typedef struct led_interfaces__srv__SetLED_Event__Sequence
{
  led_interfaces__srv__SetLED_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} led_interfaces__srv__SetLED_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LED_INTERFACES__SRV__DETAIL__SET_LED__STRUCT_H_
