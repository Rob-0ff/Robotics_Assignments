// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from led_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice
#ifndef LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "led_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "led_interfaces/msg/detail/led_panel_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
bool cdr_serialize_led_interfaces__msg__LedPanelState(
  const led_interfaces__msg__LedPanelState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
bool cdr_deserialize_led_interfaces__msg__LedPanelState(
  eprosima::fastcdr::Cdr &,
  led_interfaces__msg__LedPanelState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
size_t get_serialized_size_led_interfaces__msg__LedPanelState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
size_t max_serialized_size_led_interfaces__msg__LedPanelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
bool cdr_serialize_key_led_interfaces__msg__LedPanelState(
  const led_interfaces__msg__LedPanelState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
size_t get_serialized_size_key_led_interfaces__msg__LedPanelState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
size_t max_serialized_size_key_led_interfaces__msg__LedPanelState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_led_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, led_interfaces, msg, LedPanelState)();

#ifdef __cplusplus
}
#endif

#endif  // LED_INTERFACES__MSG__DETAIL__LED_PANEL_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
