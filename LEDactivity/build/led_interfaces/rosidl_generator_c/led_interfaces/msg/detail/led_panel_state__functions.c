// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from led_interfaces:msg/LedPanelState.idl
// generated code does not contain a copyright notice
#include "led_interfaces/msg/detail/led_panel_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
led_interfaces__msg__LedPanelState__init(led_interfaces__msg__LedPanelState * msg)
{
  if (!msg) {
    return false;
  }
  // led
  return true;
}

void
led_interfaces__msg__LedPanelState__fini(led_interfaces__msg__LedPanelState * msg)
{
  if (!msg) {
    return;
  }
  // led
}

bool
led_interfaces__msg__LedPanelState__are_equal(const led_interfaces__msg__LedPanelState * lhs, const led_interfaces__msg__LedPanelState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->led[i] != rhs->led[i]) {
      return false;
    }
  }
  return true;
}

bool
led_interfaces__msg__LedPanelState__copy(
  const led_interfaces__msg__LedPanelState * input,
  led_interfaces__msg__LedPanelState * output)
{
  if (!input || !output) {
    return false;
  }
  // led
  for (size_t i = 0; i < 3; ++i) {
    output->led[i] = input->led[i];
  }
  return true;
}

led_interfaces__msg__LedPanelState *
led_interfaces__msg__LedPanelState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__msg__LedPanelState * msg = (led_interfaces__msg__LedPanelState *)allocator.allocate(sizeof(led_interfaces__msg__LedPanelState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(led_interfaces__msg__LedPanelState));
  bool success = led_interfaces__msg__LedPanelState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
led_interfaces__msg__LedPanelState__destroy(led_interfaces__msg__LedPanelState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    led_interfaces__msg__LedPanelState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
led_interfaces__msg__LedPanelState__Sequence__init(led_interfaces__msg__LedPanelState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__msg__LedPanelState * data = NULL;

  if (size) {
    data = (led_interfaces__msg__LedPanelState *)allocator.zero_allocate(size, sizeof(led_interfaces__msg__LedPanelState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = led_interfaces__msg__LedPanelState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        led_interfaces__msg__LedPanelState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
led_interfaces__msg__LedPanelState__Sequence__fini(led_interfaces__msg__LedPanelState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      led_interfaces__msg__LedPanelState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

led_interfaces__msg__LedPanelState__Sequence *
led_interfaces__msg__LedPanelState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  led_interfaces__msg__LedPanelState__Sequence * array = (led_interfaces__msg__LedPanelState__Sequence *)allocator.allocate(sizeof(led_interfaces__msg__LedPanelState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = led_interfaces__msg__LedPanelState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
led_interfaces__msg__LedPanelState__Sequence__destroy(led_interfaces__msg__LedPanelState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    led_interfaces__msg__LedPanelState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
led_interfaces__msg__LedPanelState__Sequence__are_equal(const led_interfaces__msg__LedPanelState__Sequence * lhs, const led_interfaces__msg__LedPanelState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!led_interfaces__msg__LedPanelState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
led_interfaces__msg__LedPanelState__Sequence__copy(
  const led_interfaces__msg__LedPanelState__Sequence * input,
  led_interfaces__msg__LedPanelState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(led_interfaces__msg__LedPanelState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    led_interfaces__msg__LedPanelState * data =
      (led_interfaces__msg__LedPanelState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!led_interfaces__msg__LedPanelState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          led_interfaces__msg__LedPanelState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!led_interfaces__msg__LedPanelState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
