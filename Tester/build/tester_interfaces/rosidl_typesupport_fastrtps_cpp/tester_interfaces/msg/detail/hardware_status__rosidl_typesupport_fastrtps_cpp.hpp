// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from tester_interfaces:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "tester_interfaces/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "tester_interfaces/msg/detail/hardware_status__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace tester_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
cdr_serialize(
  const tester_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tester_interfaces::msg::HardwareStatus & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
get_serialized_size(
  const tester_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
max_serialized_size_HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
cdr_serialize_key(
  const tester_interfaces::msg::HardwareStatus & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
get_serialized_size_key(
  const tester_interfaces::msg::HardwareStatus & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
max_serialized_size_key_HardwareStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tester_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tester_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tester_interfaces, msg, HardwareStatus)();

#ifdef __cplusplus
}
#endif

#endif  // TESTER_INTERFACES__MSG__DETAIL__HARDWARE_STATUS__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
