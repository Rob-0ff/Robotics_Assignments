// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from led_interfaces:srv/SetLED.idl
// generated code does not contain a copyright notice

#include "led_interfaces/srv/detail/set_led__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
const rosidl_type_hash_t *
led_interfaces__srv__SetLED__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x06, 0x10, 0x71, 0xaa, 0xff, 0x34, 0xfa, 0x9c,
      0xd4, 0xa4, 0xd2, 0x39, 0x73, 0x1a, 0xae, 0xad,
      0xc8, 0x84, 0x9f, 0xd1, 0x2c, 0x68, 0x61, 0x3a,
      0x34, 0xad, 0xf4, 0xf2, 0x2b, 0xa2, 0x92, 0xf9,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
const rosidl_type_hash_t *
led_interfaces__srv__SetLED_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf2, 0x73, 0x40, 0x75, 0x8e, 0xb5, 0x7f, 0x7e,
      0x6e, 0xf4, 0x67, 0x99, 0xae, 0x63, 0xaf, 0x28,
      0x15, 0xe0, 0x71, 0xe5, 0x9f, 0xa6, 0xad, 0x1d,
      0xa8, 0xe3, 0xa5, 0xb0, 0xdb, 0x41, 0xcb, 0xaf,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
const rosidl_type_hash_t *
led_interfaces__srv__SetLED_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb0, 0xa6, 0x8c, 0xe4, 0xb6, 0xbd, 0x1c, 0x53,
      0xdc, 0x0c, 0x1a, 0x2b, 0x5d, 0x79, 0x03, 0x4a,
      0xd2, 0xa0, 0x44, 0x3e, 0x5e, 0x5d, 0xc0, 0x9f,
      0x5e, 0x47, 0xe9, 0xba, 0x4f, 0xc5, 0xc6, 0xe4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_led_interfaces
const rosidl_type_hash_t *
led_interfaces__srv__SetLED_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x07, 0xa1, 0xa4, 0xdb, 0x1f, 0xb0, 0xe4, 0x64,
      0xd5, 0xed, 0xea, 0x5d, 0xec, 0x05, 0xe8, 0x45,
      0x3d, 0x03, 0x4d, 0x06, 0x8a, 0xce, 0x0a, 0x32,
      0x1d, 0xae, 0x4f, 0xea, 0x7f, 0x1a, 0x64, 0x1c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char led_interfaces__srv__SetLED__TYPE_NAME[] = "led_interfaces/srv/SetLED";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char led_interfaces__srv__SetLED_Event__TYPE_NAME[] = "led_interfaces/srv/SetLED_Event";
static char led_interfaces__srv__SetLED_Request__TYPE_NAME[] = "led_interfaces/srv/SetLED_Request";
static char led_interfaces__srv__SetLED_Response__TYPE_NAME[] = "led_interfaces/srv/SetLED_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char led_interfaces__srv__SetLED__FIELD_NAME__request_message[] = "request_message";
static char led_interfaces__srv__SetLED__FIELD_NAME__response_message[] = "response_message";
static char led_interfaces__srv__SetLED__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field led_interfaces__srv__SetLED__FIELDS[] = {
  {
    {led_interfaces__srv__SetLED__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {led_interfaces__srv__SetLED_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {led_interfaces__srv__SetLED_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {led_interfaces__srv__SetLED_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription led_interfaces__srv__SetLED__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
led_interfaces__srv__SetLED__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {led_interfaces__srv__SetLED__TYPE_NAME, 25, 25},
      {led_interfaces__srv__SetLED__FIELDS, 3, 3},
    },
    {led_interfaces__srv__SetLED__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = led_interfaces__srv__SetLED_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = led_interfaces__srv__SetLED_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = led_interfaces__srv__SetLED_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char led_interfaces__srv__SetLED_Request__FIELD_NAME__led_number[] = "led_number";
static char led_interfaces__srv__SetLED_Request__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field led_interfaces__srv__SetLED_Request__FIELDS[] = {
  {
    {led_interfaces__srv__SetLED_Request__FIELD_NAME__led_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Request__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
led_interfaces__srv__SetLED_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {led_interfaces__srv__SetLED_Request__TYPE_NAME, 33, 33},
      {led_interfaces__srv__SetLED_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char led_interfaces__srv__SetLED_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field led_interfaces__srv__SetLED_Response__FIELDS[] = {
  {
    {led_interfaces__srv__SetLED_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
led_interfaces__srv__SetLED_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {led_interfaces__srv__SetLED_Response__TYPE_NAME, 34, 34},
      {led_interfaces__srv__SetLED_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char led_interfaces__srv__SetLED_Event__FIELD_NAME__info[] = "info";
static char led_interfaces__srv__SetLED_Event__FIELD_NAME__request[] = "request";
static char led_interfaces__srv__SetLED_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field led_interfaces__srv__SetLED_Event__FIELDS[] = {
  {
    {led_interfaces__srv__SetLED_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {led_interfaces__srv__SetLED_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {led_interfaces__srv__SetLED_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription led_interfaces__srv__SetLED_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {led_interfaces__srv__SetLED_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
led_interfaces__srv__SetLED_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {led_interfaces__srv__SetLED_Event__TYPE_NAME, 31, 31},
      {led_interfaces__srv__SetLED_Event__FIELDS, 3, 3},
    },
    {led_interfaces__srv__SetLED_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = led_interfaces__srv__SetLED_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = led_interfaces__srv__SetLED_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 led_number\n"
  "bool state\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
led_interfaces__srv__SetLED__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {led_interfaces__srv__SetLED__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
led_interfaces__srv__SetLED_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {led_interfaces__srv__SetLED_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
led_interfaces__srv__SetLED_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {led_interfaces__srv__SetLED_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
led_interfaces__srv__SetLED_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {led_interfaces__srv__SetLED_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
led_interfaces__srv__SetLED__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *led_interfaces__srv__SetLED__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *led_interfaces__srv__SetLED_Event__get_individual_type_description_source(NULL);
    sources[3] = *led_interfaces__srv__SetLED_Request__get_individual_type_description_source(NULL);
    sources[4] = *led_interfaces__srv__SetLED_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
led_interfaces__srv__SetLED_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *led_interfaces__srv__SetLED_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
led_interfaces__srv__SetLED_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *led_interfaces__srv__SetLED_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
led_interfaces__srv__SetLED_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *led_interfaces__srv__SetLED_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *led_interfaces__srv__SetLED_Request__get_individual_type_description_source(NULL);
    sources[3] = *led_interfaces__srv__SetLED_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
