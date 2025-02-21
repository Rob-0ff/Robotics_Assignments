// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from led_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice

#include "led_interfaces/msg/detail/led_panel_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
const rosidl_type_hash_t *
led_interfaces__msg__LedPanelState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0x27, 0x0a, 0x04, 0x9b, 0x51, 0xd3, 0xe4,
      0x06, 0x24, 0x77, 0xdc, 0x96, 0x5b, 0xdb, 0xe7,
      0x8e, 0xe6, 0x32, 0x12, 0x91, 0x18, 0xc4, 0xe0,
      0x15, 0xf3, 0x46, 0x9f, 0x16, 0xec, 0xaa, 0x8f,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char led_interfaces__msg__LedPanelState__TYPE_NAME[] = "led_interfaces/msg/LedPanelState";

// Define type names, field names, and default values
static char led_interfaces__msg__LedPanelState__FIELD_NAME__led[] = "led";

static rosidl_runtime_c__type_description__Field led_interfaces__msg__LedPanelState__FIELDS[] = {
  {
    {led_interfaces__msg__LedPanelState__FIELD_NAME__led, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
led_interfaces__msg__LedPanelState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {led_interfaces__msg__LedPanelState__TYPE_NAME, 32, 32},
      {led_interfaces__msg__LedPanelState__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32[3] led";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
led_interfaces__msg__LedPanelState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {led_interfaces__msg__LedPanelState__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 12, 12},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
led_interfaces__msg__LedPanelState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *led_interfaces__msg__LedPanelState__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
