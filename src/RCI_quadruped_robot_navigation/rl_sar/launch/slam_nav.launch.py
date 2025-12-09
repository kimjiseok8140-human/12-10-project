
import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    use_sim_time = LaunchConfiguration('use_sim_time', default='true')
    
    # Get package directories
    turtlebot3_cartographer_prefix = get_package_share_directory('turtlebot3_cartographer')
    nav2_bringup_prefix = get_package_share_directory('nav2_bringup')
    turtlebot3_navigation2_prefix = get_package_share_directory('turtlebot3_navigation2')
    
    # Cartographer Launch
    cartographer_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(turtlebot3_cartographer_prefix, 'launch', 'cartographer.launch.py')
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'use_rviz': 'false' # We will launch common RViz
        }.items(),
    )
    
    # Navigation2 Params
    # Assuming TURTLEBOT3_MODEL is set in environment (which it should be if sourcing turtlebot3 setup, 
    # or failing that defaulting to waffle).
    # But for safety we can hardcode or check os.environ.
    # The previous gazebo.launch.py sets it to waffle if missing.
    # Ideally script gets it from env or defaults.
    model = os.environ.get('TURTLEBOT3_MODEL', 'waffle')
    param_file_name = model + '.yaml'
    # param_dir = os.path.join(turtlebot3_navigation2_prefix, 'param', param_file_name)
    # Note: ROS 2 Humble layout might strictly put params in param/humble?
    # turtlebot3_navigation2 logic checked ROS_DISTRO. Let's assume standard path or check.
    # The previous `navigation2.launch.py` cat output showed:
    # if ROS_DISTRO == 'humble': param/humble/waffle.yaml
    # else: param/waffle.yaml
    # We are on Humble (from previous logs `/opt/ros/humble`).
    
    if os.environ.get('ROS_DISTRO') == 'humble':
         param_dir = os.path.join(turtlebot3_navigation2_prefix, 'param', 'humble', param_file_name)
    else:
         param_dir = os.path.join(turtlebot3_navigation2_prefix, 'param', param_file_name)
    
    # Navigation2 Launch
    navigation_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(nav2_bringup_prefix, 'launch', 'navigation_launch.py')
        ),
        launch_arguments={
            'use_sim_time': use_sim_time,
            'params_file': param_dir
        }.items(),
    )
    
    # RViz
    rl_sar_prefix = get_package_share_directory('rl_sar')
    rviz_config_dir = os.path.join(
        rl_sar_prefix,
        'rviz',
        'slam_nav.rviz')
        
    rviz_node = Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config_dir],
            parameters=[{'use_sim_time': use_sim_time}],
            output='screen')

    return LaunchDescription([
        DeclareLaunchArgument(
            'use_sim_time',
            default_value='true',
            description='Use simulation (Gazebo) clock if true'),
        
        cartographer_launch,
        navigation_launch,
        rviz_node
    ])
