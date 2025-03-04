// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from led_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "led_interfaces/msg/detail/led_panel_state__rosidl_typesupport_introspection_c.h"
#include "led_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "led_interfaces/msg/detail/led_panel_state__functions.h"
#include "led_interfaces/msg/detail/led_panel_state__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  led_interfaces__msg__LedPanelState__init(message_memory);
}

void led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_fini_function(void * message_memory)
{
  led_interfaces__msg__LedPanelState__fini(message_memory);
}

size_t led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__size_function__LedPanelState__led(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__get_const_function__LedPanelState__led(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__get_function__LedPanelState__led(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__fetch_function__LedPanelState__led(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__get_const_function__LedPanelState__led(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__assign_function__LedPanelState__led(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__get_function__LedPanelState__led(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_member_array[1] = {
  {
    "led",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(led_interfaces__msg__LedPanelState, led),  // bytes offset in struct
    NULL,  // default value
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__size_function__LedPanelState__led,  // size() function pointer
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__get_const_function__LedPanelState__led,  // get_const(index) function pointer
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__get_function__LedPanelState__led,  // get(index) function pointer
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__fetch_function__LedPanelState__led,  // fetch(index, &value) function pointer
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__assign_function__LedPanelState__led,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_members = {
  "led_interfaces__msg",  // message namespace
  "LedPanelState",  // message name
  1,  // number of fields
  sizeof(led_interfaces__msg__LedPanelState),
  false,  // has_any_key_member_
  led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_member_array,  // message members
  led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_init_function,  // function to initialize message memory (memory has to be allocated)
  led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_type_support_handle = {
  0,
  &led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_members,
  get_message_typesupport_handle_function,
  &led_interfaces__msg__LedPanelState__get_type_hash,
  &led_interfaces__msg__LedPanelState__get_type_description,
  &led_interfaces__msg__LedPanelState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_led_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, led_interfaces, msg, LedPanelState)() {
  if (!led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_type_support_handle.typesupport_identifier) {
    led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &led_interfaces__msg__LedPanelState__rosidl_typesupport_introspection_c__LedPanelState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
