// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tester_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tester_interfaces/msg/detail/hardware_status__rosidl_typesupport_introspection_c.h"
#include "tester_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tester_interfaces/msg/detail/hardware_status__functions.h"
#include "tester_interfaces/msg/detail/hardware_status__struct.h"


// Include directives for member types
// Member `debug_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tester_interfaces__msg__HardwareStatus__init(message_memory);
}

void tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_fini_function(void * message_memory)
{
  tester_interfaces__msg__HardwareStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_member_array[3] = {
  {
    "temp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tester_interfaces__msg__HardwareStatus, temp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motors_ready",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tester_interfaces__msg__HardwareStatus, motors_ready),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debug_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tester_interfaces__msg__HardwareStatus, debug_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_members = {
  "tester_interfaces__msg",  // message namespace
  "HardwareStatus",  // message name
  3,  // number of fields
  sizeof(tester_interfaces__msg__HardwareStatus),
  false,  // has_any_key_member_
  tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_member_array,  // message members
  tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_type_support_handle = {
  0,
  &tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_members,
  get_message_typesupport_handle_function,
  &tester_interfaces__msg__HardwareStatus__get_type_hash,
  &tester_interfaces__msg__HardwareStatus__get_type_description,
  &tester_interfaces__msg__HardwareStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tester_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tester_interfaces, msg, HardwareStatus)() {
  if (!tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_type_support_handle.typesupport_identifier) {
    tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tester_interfaces__msg__HardwareStatus__rosidl_typesupport_introspection_c__HardwareStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
