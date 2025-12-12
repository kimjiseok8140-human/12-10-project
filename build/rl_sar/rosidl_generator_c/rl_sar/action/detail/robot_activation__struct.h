// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rl_sar:action/RobotActivation.idl
// generated code does not contain a copyright notice

#ifndef RL_SAR__ACTION__DETAIL__ROBOT_ACTIVATION__STRUCT_H_
#define RL_SAR__ACTION__DETAIL__ROBOT_ACTIVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_Goal
{
  bool activate;
} rl_sar__action__RobotActivation_Goal;

// Struct for a sequence of rl_sar__action__RobotActivation_Goal.
typedef struct rl_sar__action__RobotActivation_Goal__Sequence
{
  rl_sar__action__RobotActivation_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_Result
{
  bool success;
  rosidl_runtime_c__String message;
} rl_sar__action__RobotActivation_Result;

// Struct for a sequence of rl_sar__action__RobotActivation_Result.
typedef struct rl_sar__action__RobotActivation_Result__Sequence
{
  rl_sar__action__RobotActivation_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_Feedback
{
  rosidl_runtime_c__String status;
} rl_sar__action__RobotActivation_Feedback;

// Struct for a sequence of rl_sar__action__RobotActivation_Feedback.
typedef struct rl_sar__action__RobotActivation_Feedback__Sequence
{
  rl_sar__action__RobotActivation_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "rl_sar/action/detail/robot_activation__struct.h"

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  rl_sar__action__RobotActivation_Goal goal;
} rl_sar__action__RobotActivation_SendGoal_Request;

// Struct for a sequence of rl_sar__action__RobotActivation_SendGoal_Request.
typedef struct rl_sar__action__RobotActivation_SendGoal_Request__Sequence
{
  rl_sar__action__RobotActivation_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} rl_sar__action__RobotActivation_SendGoal_Response;

// Struct for a sequence of rl_sar__action__RobotActivation_SendGoal_Response.
typedef struct rl_sar__action__RobotActivation_SendGoal_Response__Sequence
{
  rl_sar__action__RobotActivation_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} rl_sar__action__RobotActivation_GetResult_Request;

// Struct for a sequence of rl_sar__action__RobotActivation_GetResult_Request.
typedef struct rl_sar__action__RobotActivation_GetResult_Request__Sequence
{
  rl_sar__action__RobotActivation_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rl_sar/action/detail/robot_activation__struct.h"

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_GetResult_Response
{
  int8_t status;
  rl_sar__action__RobotActivation_Result result;
} rl_sar__action__RobotActivation_GetResult_Response;

// Struct for a sequence of rl_sar__action__RobotActivation_GetResult_Response.
typedef struct rl_sar__action__RobotActivation_GetResult_Response__Sequence
{
  rl_sar__action__RobotActivation_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "rl_sar/action/detail/robot_activation__struct.h"

/// Struct defined in action/RobotActivation in the package rl_sar.
typedef struct rl_sar__action__RobotActivation_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  rl_sar__action__RobotActivation_Feedback feedback;
} rl_sar__action__RobotActivation_FeedbackMessage;

// Struct for a sequence of rl_sar__action__RobotActivation_FeedbackMessage.
typedef struct rl_sar__action__RobotActivation_FeedbackMessage__Sequence
{
  rl_sar__action__RobotActivation_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rl_sar__action__RobotActivation_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RL_SAR__ACTION__DETAIL__ROBOT_ACTIVATION__STRUCT_H_
