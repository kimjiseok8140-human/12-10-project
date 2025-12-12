# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_lift_elevator_plugin_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED lift_elevator_plugin_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(lift_elevator_plugin_FOUND FALSE)
  elseif(NOT lift_elevator_plugin_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(lift_elevator_plugin_FOUND FALSE)
  endif()
  return()
endif()
set(_lift_elevator_plugin_CONFIG_INCLUDED TRUE)

# output package information
if(NOT lift_elevator_plugin_FIND_QUIETLY)
  message(STATUS "Found lift_elevator_plugin: 0.0.0 (${lift_elevator_plugin_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'lift_elevator_plugin' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${lift_elevator_plugin_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(lift_elevator_plugin_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${lift_elevator_plugin_DIR}/${_extra}")
endforeach()
