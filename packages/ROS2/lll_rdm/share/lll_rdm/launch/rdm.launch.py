import os
import pathlib

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import (
    LaunchConfiguration,
    PathJoinSubstitution,
    PythonExpression,
)
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

PACKAGE_NAME = "lll_rdm"
NAMESPACE = "lll"
EXECUTABLE = "rdm"
OUTPUT = "both"
HOME = os.getenv("HOME")


def generate_launch_description():
    launchdesc = LaunchDescription(
        [
            DeclareLaunchArgument("use_sim_time", default_value="false"),
            DeclareLaunchArgument("config_filename", default_value="rdm_config.yaml"),
            DeclareLaunchArgument(
                "config_search_directories",
                default_value="['{}/3lawsRoboticsInc/config','/opt/3lawsRoboticsInc/config','{}']".format(
                    HOME,
                    pathlib.Path(get_package_share_directory(PACKAGE_NAME)) / "config",
                ),
            ),
            DeclareLaunchArgument("robot_id", default_value=""),
            DeclareLaunchArgument("log_level", default_value="info"),
        ]
    )

    params = [
        {
            "use_sim_time": LaunchConfiguration("use_sim_time"),
            "base_config_directory": PathJoinSubstitution(
                [FindPackageShare(PACKAGE_NAME), "config"]
            ),
            "base_config_filename": "base_config.yaml",
            "config_filename": LaunchConfiguration("config_filename"),
            "config_search_directories": LaunchConfiguration("config_search_directories"),
            "robot_id": LaunchConfiguration("robot_id"),
            "log_level": LaunchConfiguration("log_level"),
        },
    ]

    launchdesc.add_action(
        Node(
            package=PACKAGE_NAME,
            namespace=NAMESPACE,
            executable=EXECUTABLE,
            output=OUTPUT,
            emulate_tty=True,
            parameters=params,
            arguments=["--ros-args", "--disable-stdout-logs"],
            # prefix=["gdbserver localhost:3000"],
        )
    )

    return launchdesc
