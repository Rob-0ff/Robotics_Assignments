// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from led_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "led_interfaces/srv/detail/set_led__struct.h"
#include "led_interfaces/srv/detail/set_led__type_support.h"
#include "led_interfaces/srv/detail/set_led__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace led_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLED_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLED_Request_type_support_ids_t;

static const _SetLED_Request_type_support_ids_t _SetLED_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLED_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLED_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLED_Request_type_support_symbol_names_t _SetLED_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, led_interfaces, srv, SetLED_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, led_interfaces, srv, SetLED_Request)),
  }
};

typedef struct _SetLED_Request_type_support_data_t
{
  void * data[2];
} _SetLED_Request_type_support_data_t;

static _SetLED_Request_type_support_data_t _SetLED_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLED_Request_message_typesupport_map = {
  2,
  "led_interfaces",
  &_SetLED_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetLED_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetLED_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLED_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLED_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &led_interfaces__srv__SetLED_Request__get_type_hash,
  &led_interfaces__srv__SetLED_Request__get_type_description,
  &led_interfaces__srv__SetLED_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace led_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, led_interfaces, srv, SetLED_Request)() {
  return &::led_interfaces::srv::rosidl_typesupport_c::SetLED_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "led_interfaces/srv/detail/set_led__struct.h"
// already included above
// #include "led_interfaces/srv/detail/set_led__type_support.h"
// already included above
// #include "led_interfaces/srv/detail/set_led__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace led_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLED_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLED_Response_type_support_ids_t;

static const _SetLED_Response_type_support_ids_t _SetLED_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLED_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLED_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLED_Response_type_support_symbol_names_t _SetLED_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, led_interfaces, srv, SetLED_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, led_interfaces, srv, SetLED_Response)),
  }
};

typedef struct _SetLED_Response_type_support_data_t
{
  void * data[2];
} _SetLED_Response_type_support_data_t;

static _SetLED_Response_type_support_data_t _SetLED_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLED_Response_message_typesupport_map = {
  2,
  "led_interfaces",
  &_SetLED_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetLED_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetLED_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLED_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLED_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &led_interfaces__srv__SetLED_Response__get_type_hash,
  &led_interfaces__srv__SetLED_Response__get_type_description,
  &led_interfaces__srv__SetLED_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace led_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, led_interfaces, srv, SetLED_Response)() {
  return &::led_interfaces::srv::rosidl_typesupport_c::SetLED_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "led_interfaces/srv/detail/set_led__struct.h"
// already included above
// #include "led_interfaces/srv/detail/set_led__type_support.h"
// already included above
// #include "led_interfaces/srv/detail/set_led__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace led_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _SetLED_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLED_Event_type_support_ids_t;

static const _SetLED_Event_type_support_ids_t _SetLED_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLED_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLED_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLED_Event_type_support_symbol_names_t _SetLED_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, led_interfaces, srv, SetLED_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, led_interfaces, srv, SetLED_Event)),
  }
};

typedef struct _SetLED_Event_type_support_data_t
{
  void * data[2];
} _SetLED_Event_type_support_data_t;

static _SetLED_Event_type_support_data_t _SetLED_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLED_Event_message_typesupport_map = {
  2,
  "led_interfaces",
  &_SetLED_Event_message_typesupport_ids.typesupport_identifier[0],
  &_SetLED_Event_message_typesupport_symbol_names.symbol_name[0],
  &_SetLED_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetLED_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLED_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &led_interfaces__srv__SetLED_Event__get_type_hash,
  &led_interfaces__srv__SetLED_Event__get_type_description,
  &led_interfaces__srv__SetLED_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace led_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, led_interfaces, srv, SetLED_Event)() {
  return &::led_interfaces::srv::rosidl_typesupport_c::SetLED_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "led_interfaces/srv/detail/set_led__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace led_interfaces
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _SetLED_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetLED_type_support_ids_t;

static const _SetLED_type_support_ids_t _SetLED_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _SetLED_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetLED_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetLED_type_support_symbol_names_t _SetLED_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, led_interfaces, srv, SetLED)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, led_interfaces, srv, SetLED)),
  }
};

typedef struct _SetLED_type_support_data_t
{
  void * data[2];
} _SetLED_type_support_data_t;

static _SetLED_type_support_data_t _SetLED_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetLED_service_typesupport_map = {
  2,
  "led_interfaces",
  &_SetLED_service_typesupport_ids.typesupport_identifier[0],
  &_SetLED_service_typesupport_symbol_names.symbol_name[0],
  &_SetLED_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetLED_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetLED_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &SetLED_Request_message_type_support_handle,
  &SetLED_Response_message_type_support_handle,
  &SetLED_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    led_interfaces,
    srv,
    SetLED
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    led_interfaces,
    srv,
    SetLED
  ),
  &led_interfaces__srv__SetLED__get_type_hash,
  &led_interfaces__srv__SetLED__get_type_description,
  &led_interfaces__srv__SetLED__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace led_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, led_interfaces, srv, SetLED)() {
  return &::led_interfaces::srv::rosidl_typesupport_c::SetLED_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
