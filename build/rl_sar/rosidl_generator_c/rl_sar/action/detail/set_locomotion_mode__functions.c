// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rl_sar:action/SetLocomotionMode.idl
// generated code does not contain a copyright notice
#include "rl_sar/action/detail/set_locomotion_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rl_sar__action__SetLocomotionMode_Goal__init(rl_sar__action__SetLocomotionMode_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  return true;
}

void
rl_sar__action__SetLocomotionMode_Goal__fini(rl_sar__action__SetLocomotionMode_Goal * msg)
{
  if (!msg) {
    return;
  }
  // mode
}

bool
rl_sar__action__SetLocomotionMode_Goal__are_equal(const rl_sar__action__SetLocomotionMode_Goal * lhs, const rl_sar__action__SetLocomotionMode_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_Goal__copy(
  const rl_sar__action__SetLocomotionMode_Goal * input,
  rl_sar__action__SetLocomotionMode_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

rl_sar__action__SetLocomotionMode_Goal *
rl_sar__action__SetLocomotionMode_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Goal * msg = (rl_sar__action__SetLocomotionMode_Goal *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_Goal));
  bool success = rl_sar__action__SetLocomotionMode_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_Goal__destroy(rl_sar__action__SetLocomotionMode_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_Goal__Sequence__init(rl_sar__action__SetLocomotionMode_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Goal * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_Goal *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_Goal__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_Goal__Sequence__fini(rl_sar__action__SetLocomotionMode_Goal__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_Goal__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_Goal__Sequence *
rl_sar__action__SetLocomotionMode_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Goal__Sequence * array = (rl_sar__action__SetLocomotionMode_Goal__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_Goal__Sequence__destroy(rl_sar__action__SetLocomotionMode_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_Goal__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_Goal__Sequence * lhs, const rl_sar__action__SetLocomotionMode_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_Goal__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_Goal__Sequence * input,
  rl_sar__action__SetLocomotionMode_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_Goal * data =
      (rl_sar__action__SetLocomotionMode_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
rl_sar__action__SetLocomotionMode_Result__init(rl_sar__action__SetLocomotionMode_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    rl_sar__action__SetLocomotionMode_Result__fini(msg);
    return false;
  }
  return true;
}

void
rl_sar__action__SetLocomotionMode_Result__fini(rl_sar__action__SetLocomotionMode_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
rl_sar__action__SetLocomotionMode_Result__are_equal(const rl_sar__action__SetLocomotionMode_Result * lhs, const rl_sar__action__SetLocomotionMode_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_Result__copy(
  const rl_sar__action__SetLocomotionMode_Result * input,
  rl_sar__action__SetLocomotionMode_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

rl_sar__action__SetLocomotionMode_Result *
rl_sar__action__SetLocomotionMode_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Result * msg = (rl_sar__action__SetLocomotionMode_Result *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_Result));
  bool success = rl_sar__action__SetLocomotionMode_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_Result__destroy(rl_sar__action__SetLocomotionMode_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_Result__Sequence__init(rl_sar__action__SetLocomotionMode_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Result * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_Result *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_Result__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_Result__Sequence__fini(rl_sar__action__SetLocomotionMode_Result__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_Result__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_Result__Sequence *
rl_sar__action__SetLocomotionMode_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Result__Sequence * array = (rl_sar__action__SetLocomotionMode_Result__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_Result__Sequence__destroy(rl_sar__action__SetLocomotionMode_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_Result__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_Result__Sequence * lhs, const rl_sar__action__SetLocomotionMode_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_Result__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_Result__Sequence * input,
  rl_sar__action__SetLocomotionMode_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_Result * data =
      (rl_sar__action__SetLocomotionMode_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
rl_sar__action__SetLocomotionMode_Feedback__init(rl_sar__action__SetLocomotionMode_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    rl_sar__action__SetLocomotionMode_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
rl_sar__action__SetLocomotionMode_Feedback__fini(rl_sar__action__SetLocomotionMode_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

bool
rl_sar__action__SetLocomotionMode_Feedback__are_equal(const rl_sar__action__SetLocomotionMode_Feedback * lhs, const rl_sar__action__SetLocomotionMode_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_Feedback__copy(
  const rl_sar__action__SetLocomotionMode_Feedback * input,
  rl_sar__action__SetLocomotionMode_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  return true;
}

rl_sar__action__SetLocomotionMode_Feedback *
rl_sar__action__SetLocomotionMode_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Feedback * msg = (rl_sar__action__SetLocomotionMode_Feedback *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_Feedback));
  bool success = rl_sar__action__SetLocomotionMode_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_Feedback__destroy(rl_sar__action__SetLocomotionMode_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_Feedback__Sequence__init(rl_sar__action__SetLocomotionMode_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Feedback * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_Feedback *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_Feedback__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_Feedback__Sequence__fini(rl_sar__action__SetLocomotionMode_Feedback__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_Feedback__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_Feedback__Sequence *
rl_sar__action__SetLocomotionMode_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_Feedback__Sequence * array = (rl_sar__action__SetLocomotionMode_Feedback__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_Feedback__Sequence__destroy(rl_sar__action__SetLocomotionMode_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_Feedback__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_Feedback__Sequence * lhs, const rl_sar__action__SetLocomotionMode_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_Feedback__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_Feedback__Sequence * input,
  rl_sar__action__SetLocomotionMode_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_Feedback * data =
      (rl_sar__action__SetLocomotionMode_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "rl_sar/action/detail/set_locomotion_mode__functions.h"

bool
rl_sar__action__SetLocomotionMode_SendGoal_Request__init(rl_sar__action__SetLocomotionMode_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rl_sar__action__SetLocomotionMode_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!rl_sar__action__SetLocomotionMode_Goal__init(&msg->goal)) {
    rl_sar__action__SetLocomotionMode_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
rl_sar__action__SetLocomotionMode_SendGoal_Request__fini(rl_sar__action__SetLocomotionMode_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  rl_sar__action__SetLocomotionMode_Goal__fini(&msg->goal);
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Request__are_equal(const rl_sar__action__SetLocomotionMode_SendGoal_Request * lhs, const rl_sar__action__SetLocomotionMode_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!rl_sar__action__SetLocomotionMode_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Request__copy(
  const rl_sar__action__SetLocomotionMode_SendGoal_Request * input,
  rl_sar__action__SetLocomotionMode_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!rl_sar__action__SetLocomotionMode_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

rl_sar__action__SetLocomotionMode_SendGoal_Request *
rl_sar__action__SetLocomotionMode_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_SendGoal_Request * msg = (rl_sar__action__SetLocomotionMode_SendGoal_Request *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Request));
  bool success = rl_sar__action__SetLocomotionMode_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_SendGoal_Request__destroy(rl_sar__action__SetLocomotionMode_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__init(rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_SendGoal_Request * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_SendGoal_Request *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_SendGoal_Request__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__fini(rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_SendGoal_Request__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence *
rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * array = (rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__destroy(rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * lhs, const rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * input,
  rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_SendGoal_Request * data =
      (rl_sar__action__SetLocomotionMode_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rl_sar__action__SetLocomotionMode_SendGoal_Response__init(rl_sar__action__SetLocomotionMode_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    rl_sar__action__SetLocomotionMode_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
rl_sar__action__SetLocomotionMode_SendGoal_Response__fini(rl_sar__action__SetLocomotionMode_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Response__are_equal(const rl_sar__action__SetLocomotionMode_SendGoal_Response * lhs, const rl_sar__action__SetLocomotionMode_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Response__copy(
  const rl_sar__action__SetLocomotionMode_SendGoal_Response * input,
  rl_sar__action__SetLocomotionMode_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

rl_sar__action__SetLocomotionMode_SendGoal_Response *
rl_sar__action__SetLocomotionMode_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_SendGoal_Response * msg = (rl_sar__action__SetLocomotionMode_SendGoal_Response *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Response));
  bool success = rl_sar__action__SetLocomotionMode_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_SendGoal_Response__destroy(rl_sar__action__SetLocomotionMode_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__init(rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_SendGoal_Response * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_SendGoal_Response *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_SendGoal_Response__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__fini(rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_SendGoal_Response__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence *
rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * array = (rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__destroy(rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * lhs, const rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * input,
  rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_SendGoal_Response * data =
      (rl_sar__action__SetLocomotionMode_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
rl_sar__action__SetLocomotionMode_GetResult_Request__init(rl_sar__action__SetLocomotionMode_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rl_sar__action__SetLocomotionMode_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
rl_sar__action__SetLocomotionMode_GetResult_Request__fini(rl_sar__action__SetLocomotionMode_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Request__are_equal(const rl_sar__action__SetLocomotionMode_GetResult_Request * lhs, const rl_sar__action__SetLocomotionMode_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Request__copy(
  const rl_sar__action__SetLocomotionMode_GetResult_Request * input,
  rl_sar__action__SetLocomotionMode_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

rl_sar__action__SetLocomotionMode_GetResult_Request *
rl_sar__action__SetLocomotionMode_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_GetResult_Request * msg = (rl_sar__action__SetLocomotionMode_GetResult_Request *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_GetResult_Request));
  bool success = rl_sar__action__SetLocomotionMode_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_GetResult_Request__destroy(rl_sar__action__SetLocomotionMode_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__init(rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_GetResult_Request * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_GetResult_Request *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_GetResult_Request__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__fini(rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_GetResult_Request__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence *
rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * array = (rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__destroy(rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * lhs, const rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * input,
  rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_GetResult_Request * data =
      (rl_sar__action__SetLocomotionMode_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rl_sar/action/detail/set_locomotion_mode__functions.h"

bool
rl_sar__action__SetLocomotionMode_GetResult_Response__init(rl_sar__action__SetLocomotionMode_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!rl_sar__action__SetLocomotionMode_Result__init(&msg->result)) {
    rl_sar__action__SetLocomotionMode_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
rl_sar__action__SetLocomotionMode_GetResult_Response__fini(rl_sar__action__SetLocomotionMode_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  rl_sar__action__SetLocomotionMode_Result__fini(&msg->result);
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Response__are_equal(const rl_sar__action__SetLocomotionMode_GetResult_Response * lhs, const rl_sar__action__SetLocomotionMode_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!rl_sar__action__SetLocomotionMode_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Response__copy(
  const rl_sar__action__SetLocomotionMode_GetResult_Response * input,
  rl_sar__action__SetLocomotionMode_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!rl_sar__action__SetLocomotionMode_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

rl_sar__action__SetLocomotionMode_GetResult_Response *
rl_sar__action__SetLocomotionMode_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_GetResult_Response * msg = (rl_sar__action__SetLocomotionMode_GetResult_Response *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_GetResult_Response));
  bool success = rl_sar__action__SetLocomotionMode_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_GetResult_Response__destroy(rl_sar__action__SetLocomotionMode_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__init(rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_GetResult_Response * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_GetResult_Response *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_GetResult_Response__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__fini(rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_GetResult_Response__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence *
rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * array = (rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__destroy(rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * lhs, const rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * input,
  rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_GetResult_Response * data =
      (rl_sar__action__SetLocomotionMode_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "rl_sar/action/detail/set_locomotion_mode__functions.h"

bool
rl_sar__action__SetLocomotionMode_FeedbackMessage__init(rl_sar__action__SetLocomotionMode_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    rl_sar__action__SetLocomotionMode_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!rl_sar__action__SetLocomotionMode_Feedback__init(&msg->feedback)) {
    rl_sar__action__SetLocomotionMode_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
rl_sar__action__SetLocomotionMode_FeedbackMessage__fini(rl_sar__action__SetLocomotionMode_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  rl_sar__action__SetLocomotionMode_Feedback__fini(&msg->feedback);
}

bool
rl_sar__action__SetLocomotionMode_FeedbackMessage__are_equal(const rl_sar__action__SetLocomotionMode_FeedbackMessage * lhs, const rl_sar__action__SetLocomotionMode_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rl_sar__action__SetLocomotionMode_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_FeedbackMessage__copy(
  const rl_sar__action__SetLocomotionMode_FeedbackMessage * input,
  rl_sar__action__SetLocomotionMode_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!rl_sar__action__SetLocomotionMode_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

rl_sar__action__SetLocomotionMode_FeedbackMessage *
rl_sar__action__SetLocomotionMode_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_FeedbackMessage * msg = (rl_sar__action__SetLocomotionMode_FeedbackMessage *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rl_sar__action__SetLocomotionMode_FeedbackMessage));
  bool success = rl_sar__action__SetLocomotionMode_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rl_sar__action__SetLocomotionMode_FeedbackMessage__destroy(rl_sar__action__SetLocomotionMode_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rl_sar__action__SetLocomotionMode_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__init(rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_FeedbackMessage * data = NULL;

  if (size) {
    data = (rl_sar__action__SetLocomotionMode_FeedbackMessage *)allocator.zero_allocate(size, sizeof(rl_sar__action__SetLocomotionMode_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rl_sar__action__SetLocomotionMode_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rl_sar__action__SetLocomotionMode_FeedbackMessage__fini(&data[i - 1]);
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
rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__fini(rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * array)
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
      rl_sar__action__SetLocomotionMode_FeedbackMessage__fini(&array->data[i]);
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

rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence *
rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * array = (rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence *)allocator.allocate(sizeof(rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__destroy(rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__are_equal(const rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * lhs, const rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence__copy(
  const rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * input,
  rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rl_sar__action__SetLocomotionMode_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rl_sar__action__SetLocomotionMode_FeedbackMessage * data =
      (rl_sar__action__SetLocomotionMode_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rl_sar__action__SetLocomotionMode_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rl_sar__action__SetLocomotionMode_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rl_sar__action__SetLocomotionMode_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
