# Copyright (c) 2024-2025 Ziqi Fan (Modified by Sanghyun Kim)
# SPDX-License-Identifier: Apache-2.0

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument, SetEnvironmentVariable
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, TextSubstitution, Command, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    if 'TURTLEBOT3_MODEL' not in os.environ:
        os.environ['TURTLEBOT3_MODEL'] = 'waffle'

    # Set GAZEBO_MODEL_PATH to include local cache
    model_path = os.path.expanduser('~/.gazebo/models')
    if 'GAZEBO_MODEL_PATH' in os.environ:
        os.environ['GAZEBO_MODEL_PATH'] = model_path + ':' + os.environ['GAZEBO_MODEL_PATH']
    else:
        os.environ['GAZEBO_MODEL_PATH'] = model_path


    wname = "hotel"


    gazebo = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory("gazebo_ros"), "launch", "gazebo.launch.py")
        ),
        launch_arguments={
            "verbose": "true",
            "pause": "false",
            "world": os.path.join(get_package_share_directory("rl_sar"), "worlds", wname + ".world"),
        }.items(),
    )

    spawn_turtlebot = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory("turtlebot3_gazebo"), "launch", "spawn_turtlebot3.launch.py")
        ),
        launch_arguments={
            "x_pose": "18.0",
            "y_pose": "-35.0",
            "z_pose": "0.0",
        }.items(),
    )


    # Load URDF for robot_state_publisher
    urdf_path = os.path.join(
        get_package_share_directory('turtlebot3_gazebo'),
        'models',
        'turtlebot3_' + os.environ.get('TURTLEBOT3_MODEL', 'waffle'),
        'model.sdf' 
    )
    # Using model.sdf for Gazebo is standard, but robot_state_publisher needs URDF.
    # spawn_turtlebot3 uses model.sdf.
    # robot_state_publisher.launch.py used 'turtlebot3_' + model + '.urdf'.
    urdf_file_name = 'turtlebot3_' + os.environ.get('TURTLEBOT3_MODEL', 'waffle') + '.urdf'
    urdf_path_urdf = os.path.join(
        get_package_share_directory('turtlebot3_gazebo'),
        'urdf',
        urdf_file_name)
    
    with open(urdf_path_urdf, 'r') as infp:
        robot_desc = infp.read()

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{
            'use_sim_time': True,
            'robot_description': robot_desc
            # No frame_prefix, so it defaults to empty
        }],
    )

    return LaunchDescription([
        gazebo,
        robot_state_publisher,
        spawn_turtlebot
    ])
