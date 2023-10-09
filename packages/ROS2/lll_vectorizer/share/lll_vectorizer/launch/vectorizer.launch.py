import os
from ament_index_python import get_package_share_directory
from launch_ros.actions import Node
from launch import LaunchDescription


def generate_launch_description():
    desc = LaunchDescription()

    config = os.path.join(get_package_share_directory("lll_vectorizer"), "config", "config.yaml")

    desc.add_action(
        Node(
            package="lll_vectorizer",
            executable="vectorizer",
            name="lll_vectorizer_node",
            parameters=[config],
        ),
    )

    return desc
