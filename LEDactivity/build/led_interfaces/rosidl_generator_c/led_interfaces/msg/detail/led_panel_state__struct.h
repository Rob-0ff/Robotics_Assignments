// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from led_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "led_interfaces/msg/led_panel_state.h"


#ifndef LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__STRUCT_H_
#define LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/LedPanelState in the package led_interfaces.
typedef struct led_interfaces__msg__LedPanelState
{
  int32_t led[3];
} led_interfaces__msg__LedPanelState;

// Struct for a sequence of led_interfaces__msg__LedPanelState.
typedef struct led_interfaces__msg__LedPanelState__Sequence
{
  led_interfaces__msg__LedPanelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} led_interfaces__msg__LedPanelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__STRUCT_H_
