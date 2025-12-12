// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rl_sar:action/SetLocomotionMode.idl
// generated code does not contain a copyright notice

#ifndef RL_SAR__ACTION__DETAIL__SET_LOCOMOTION_MODE__STRUCT_H_
#define RL_SAR__ACTION__DETAIL__SET_LOCOMOTION_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_Goal
{
  /// 1: Default walk, other numbers for other modes
  int8_t mode;
} rl_sar__action__SetLocomotionMode_Goal;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_Goal.
typedef struct rl_sar__action__SetLocomotionMode_Goal__Sequence
{
  rl_sar__action__SetLocomotionMode_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_Result
{
  bool success;
  rosidl_runtime_c__String message;
} rl_sar__action__SetLocomotionMode_Result;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_Result.
typedef struct rl_sar__action__SetLocomotionMode_Result__Sequence
{
  rl_sar__action__SetLocomotionMode_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_Feedback
{
  rosidl_runtime_c__String status;
} rl_sar__action__SetLocomotionMode_Feedback;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_Feedback.
typedef struct rl_sar__action__SetLocomotionMode_Feedback__Sequence
{
  rl_sar__action__SetLocomotionMode_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rl_sar/action/detail/set_locomotion_mode__struct.h"

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rl_sar__action__SetLocomotionMode_Goal goal;
} rl_sar__action__SetLocomotionMode_SendGoal_Request;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_SendGoal_Request.
typedef struct rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence
{
  rl_sar__action__SetLocomotionMode_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rl_sar__action__SetLocomotionMode_SendGoal_Response;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_SendGoal_Response.
typedef struct rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence
{
  rl_sar__action__SetLocomotionMode_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rl_sar__action__SetLocomotionMode_GetResult_Request;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_GetResult_Request.
typedef struct rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence
{
  rl_sar__action__SetLocomotionMode_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rl_sar/action/detail/set_locomotion_mode__struct.h"

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_GetResult_Response
{
  int8_t status;
  rl_sar__action__SetLocomotionMode_Result result;
} rl_sar__action__SetLocomotionMode_GetResult_Response;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_GetResult_Response.
typedef struct rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence
{
  rl_sar__action__SetLocomotionMode_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rl_sar/action/detail/set_locomotion_mode__struct.h"

/// Struct defined in action/SetLocomotionMode in the package rl_sar.
typedef struct rl_sar__action__SetLocomotionMode_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rl_sar__action__SetLocomotionMode_Feedback feedback;
} rl_sar__action__SetLocomotionMode_FeedbackMessage;

// Struct for a sequence of rl_sar__action__SetLocomotionMode_FeedbackMessage.
typedef struct rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence
{
  rl_sar__action__SetLocomotionMode_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__SetLocomotionMode_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RL_SAR__ACTION__DETAIL__SET_LOCOMOTION_MODE__STRUCT_H_
