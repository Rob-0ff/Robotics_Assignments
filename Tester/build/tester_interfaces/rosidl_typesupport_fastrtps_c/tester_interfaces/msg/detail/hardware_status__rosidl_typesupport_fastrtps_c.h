// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from tester_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice
#ifndef TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tester_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tester_interfaces/msg/detail/hardware_status__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
bool cdr_serialize_tester_interfaces__msg__HardwareStatus(
  const tester_interfaces__msg__HardwareStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
bool cdr_deserialize_tester_interfaces__msg__HardwareStatus(
  eprosima::fastcdr::Cdr &,
  tester_interfaces__msg__HardwareStatus * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
size_t get_serialized_size_tester_interfaces__msg__HardwareStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
size_t max_serialized_size_tester_interfaces__msg__HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
bool cdr_serialize_key_tester_interfaces__msg__HardwareStatus(
  const tester_interfaces__msg__HardwareStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
size_t get_serialized_size_key_tester_interfaces__msg__HardwareStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
size_t max_serialized_size_key_tester_interfaces__msg__HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tester_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tester_interfaces, msg, HardwareStatus)();

#ifdef __cplusplus
}
#endif

#endif  // TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
