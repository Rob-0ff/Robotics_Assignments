// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from tester_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include "tester_interfaces/msg/detail/hardware_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_tester_interfaces
const rosidl_type_hash_t *
tester_interfaces__msg__HardwareStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa1, 0x86, 0xd8, 0xc3, 0x9c, 0xc0, 0xe7, 0x2a,
      0xc3, 0xe5, 0x9c, 0x23, 0x0d, 0xf0, 0xf1, 0x1e,
      0x2a, 0x53, 0xa2, 0x79, 0x7d, 0x77, 0xf3, 0x16,
      0xa2, 0xea, 0x3d, 0x6d, 0xb3, 0x7a, 0x52, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char tester_interfaces__msg__HardwareStatus__TYPE_NAME[] = "tester_interfaces/msg/HardwareStatus";

// Define type names, field names, and default values
static char tester_interfaces__msg__HardwareStatus__FIELD_NAME__temp[] = "temp";
static char tester_interfaces__msg__HardwareStatus__FIELD_NAME__motors_ready[] = "motors_ready";
static char tester_interfaces__msg__HardwareStatus__FIELD_NAME__debug_message[] = "debug_message";

static rosidl_runtime_c__type_description__Field tester_interfaces__msg__HardwareStatus__FIELDS[] = {
  {
    {tester_interfaces__msg__HardwareStatus__FIELD_NAME__temp, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tester_interfaces__msg__HardwareStatus__FIELD_NAME__motors_ready, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {tester_interfaces__msg__HardwareStatus__FIELD_NAME__debug_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
tester_interfaces__msg__HardwareStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {tester_interfaces__msg__HardwareStatus__TYPE_NAME, 36, 36},
      {tester_interfaces__msg__HardwareStatus__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 temp\n"
  "bool motors_ready\n"
  "string debug_message";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
tester_interfaces__msg__HardwareStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {tester_interfaces__msg__HardwareStatus__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
tester_interfaces__msg__HardwareStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *tester_interfaces__msg__HardwareStatus__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
