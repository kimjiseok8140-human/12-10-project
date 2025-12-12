// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rl_sar:action/SetNavigationMode.idl
// generated code does not contain a copyright notice

#ifndef RL_SAR__ACTION__DETAIL__SET_NAVIGATION_MODE__BUILDER_HPP_
#define RL_SAR__ACTION__DETAIL__SET_NAVIGATION_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rl_sar/action/detail/set_navigation_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_Goal_enable
{
public:
  Init_SetNavigationMode_Goal_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rl_sar::action::SetNavigationMode_Goal enable(::rl_sar::action::SetNavigationMode_Goal::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_Goal>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_Goal_enable();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_Result_message
{
public:
  explicit Init_SetNavigationMode_Result_message(::rl_sar::action::SetNavigationMode_Result & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetNavigationMode_Result message(::rl_sar::action::SetNavigationMode_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_Result msg_;
};

class Init_SetNavigationMode_Result_success
{
public:
  Init_SetNavigationMode_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNavigationMode_Result_message success(::rl_sar::action::SetNavigationMode_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetNavigationMode_Result_message(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_Result>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_Result_success();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_Feedback_status
{
public:
  Init_SetNavigationMode_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rl_sar::action::SetNavigationMode_Feedback status(::rl_sar::action::SetNavigationMode_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_Feedback>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_Feedback_status();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_SendGoal_Request_goal
{
public:
  explicit Init_SetNavigationMode_SendGoal_Request_goal(::rl_sar::action::SetNavigationMode_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetNavigationMode_SendGoal_Request goal(::rl_sar::action::SetNavigationMode_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_SendGoal_Request msg_;
};

class Init_SetNavigationMode_SendGoal_Request_goal_id
{
public:
  Init_SetNavigationMode_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNavigationMode_SendGoal_Request_goal goal_id(::rl_sar::action::SetNavigationMode_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetNavigationMode_SendGoal_Request_goal(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_SendGoal_Request>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_SendGoal_Request_goal_id();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_SendGoal_Response_stamp
{
public:
  explicit Init_SetNavigationMode_SendGoal_Response_stamp(::rl_sar::action::SetNavigationMode_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetNavigationMode_SendGoal_Response stamp(::rl_sar::action::SetNavigationMode_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_SendGoal_Response msg_;
};

class Init_SetNavigationMode_SendGoal_Response_accepted
{
public:
  Init_SetNavigationMode_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNavigationMode_SendGoal_Response_stamp accepted(::rl_sar::action::SetNavigationMode_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_SetNavigationMode_SendGoal_Response_stamp(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_SendGoal_Response>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_SendGoal_Response_accepted();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_GetResult_Request_goal_id
{
public:
  Init_SetNavigationMode_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rl_sar::action::SetNavigationMode_GetResult_Request goal_id(::rl_sar::action::SetNavigationMode_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_GetResult_Request>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_GetResult_Request_goal_id();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_GetResult_Response_result
{
public:
  explicit Init_SetNavigationMode_GetResult_Response_result(::rl_sar::action::SetNavigationMode_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetNavigationMode_GetResult_Response result(::rl_sar::action::SetNavigationMode_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_GetResult_Response msg_;
};

class Init_SetNavigationMode_GetResult_Response_status
{
public:
  Init_SetNavigationMode_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNavigationMode_GetResult_Response_result status(::rl_sar::action::SetNavigationMode_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SetNavigationMode_GetResult_Response_result(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_GetResult_Response>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_GetResult_Response_status();
}

}  // namespace rl_sar


namespace rl_sar
{

namespace action
{

namespace builder
{

class Init_SetNavigationMode_FeedbackMessage_feedback
{
public:
  explicit Init_SetNavigationMode_FeedbackMessage_feedback(::rl_sar::action::SetNavigationMode_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::rl_sar::action::SetNavigationMode_FeedbackMessage feedback(::rl_sar::action::SetNavigationMode_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_FeedbackMessage msg_;
};

class Init_SetNavigationMode_FeedbackMessage_goal_id
{
public:
  Init_SetNavigationMode_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetNavigationMode_FeedbackMessage_feedback goal_id(::rl_sar::action::SetNavigationMode_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_SetNavigationMode_FeedbackMessage_feedback(msg_);
  }

private:
  ::rl_sar::action::SetNavigationMode_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::rl_sar::action::SetNavigationMode_FeedbackMessage>()
{
  return rl_sar::action::builder::Init_SetNavigationMode_FeedbackMessage_goal_id();
}

}  // namespace rl_sar

#endif  // RL_SAR__ACTION__DETAIL__SET_NAVIGATION_MODE__BUILDER_HPP_
