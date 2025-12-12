// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rl_sar:action/SetLocomotionMode.idl
// generated code does not contain a copyright notice

#ifndef RL_SAR__ACTION__DETAIL__SET_LOCOMOTION_MODE__BUILDER_HPP_
#define RL_SAR__ACTION__DETAIL__SET_LOCOMOTION_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rl_sar/action/detail/set_locomotion_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_Goal_mode
{
public:
  Init_SetLocomotionMode_Goal_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rl_sar::action::SetLocomotionMode_Goal mode(::rl_sar::action::SetLocomotionMode_Goal::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_Goal>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_Goal_mode();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_Result_message
{
public:
  explicit Init_SetLocomotionMode_Result_message(::rl_sar::action::SetLocomotionMode_Result & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetLocomotionMode_Result message(::rl_sar::action::SetLocomotionMode_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_Result msg_;
};

class Init_SetLocomotionMode_Result_success
{
public:
  Init_SetLocomotionMode_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocomotionMode_Result_message success(::rl_sar::action::SetLocomotionMode_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetLocomotionMode_Result_message(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_Result>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_Result_success();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_Feedback_status
{
public:
  Init_SetLocomotionMode_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rl_sar::action::SetLocomotionMode_Feedback status(::rl_sar::action::SetLocomotionMode_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_Feedback>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_Feedback_status();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_SendGoal_Request_goal
{
public:
  explicit Init_SetLocomotionMode_SendGoal_Request_goal(::rl_sar::action::SetLocomotionMode_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetLocomotionMode_SendGoal_Request goal(::rl_sar::action::SetLocomotionMode_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_SendGoal_Request msg_;
};

class Init_SetLocomotionMode_SendGoal_Request_goal_id
{
public:
  Init_SetLocomotionMode_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocomotionMode_SendGoal_Request_goal goal_id(::rl_sar::action::SetLocomotionMode_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetLocomotionMode_SendGoal_Request_goal(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_SendGoal_Request>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_SendGoal_Request_goal_id();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_SendGoal_Response_stamp
{
public:
  explicit Init_SetLocomotionMode_SendGoal_Response_stamp(::rl_sar::action::SetLocomotionMode_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetLocomotionMode_SendGoal_Response stamp(::rl_sar::action::SetLocomotionMode_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_SendGoal_Response msg_;
};

class Init_SetLocomotionMode_SendGoal_Response_accepted
{
public:
  Init_SetLocomotionMode_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocomotionMode_SendGoal_Response_stamp accepted(::rl_sar::action::SetLocomotionMode_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetLocomotionMode_SendGoal_Response_stamp(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_SendGoal_Response>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_SendGoal_Response_accepted();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_GetResult_Request_goal_id
{
public:
  Init_SetLocomotionMode_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rl_sar::action::SetLocomotionMode_GetResult_Request goal_id(::rl_sar::action::SetLocomotionMode_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_GetResult_Request>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_GetResult_Request_goal_id();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_GetResult_Response_result
{
public:
  explicit Init_SetLocomotionMode_GetResult_Response_result(::rl_sar::action::SetLocomotionMode_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetLocomotionMode_GetResult_Response result(::rl_sar::action::SetLocomotionMode_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_GetResult_Response msg_;
};

class Init_SetLocomotionMode_GetResult_Response_status
{
public:
  Init_SetLocomotionMode_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocomotionMode_GetResult_Response_result status(::rl_sar::action::SetLocomotionMode_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetLocomotionMode_GetResult_Response_result(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_GetResult_Response>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_GetResult_Response_status();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetLocomotionMode_FeedbackMessage_feedback
{
public:
  explicit Init_SetLocomotionMode_FeedbackMessage_feedback(::rl_sar::action::SetLocomotionMode_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetLocomotionMode_FeedbackMessage feedback(::rl_sar::action::SetLocomotionMode_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_FeedbackMessage msg_;
};

class Init_SetLocomotionMode_FeedbackMessage_goal_id
{
public:
  Init_SetLocomotionMode_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocomotionMode_FeedbackMessage_feedback goal_id(::rl_sar::action::SetLocomotionMode_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetLocomotionMode_FeedbackMessage_feedback(msg_);
  }

private:
  ::rl_sar::action::SetLocomotionMode_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetLocomotionMode_FeedbackMessage>()
{
  return rl_sar::action::builder::Init_SetLocomotionMode_FeedbackMessage_goal_id();
}

}  // namespace rl_sar

#endif  // RL_SAR__ACTION__DETAIL__SET_LOCOMOTION_MODE__BUILDER_HPP_
