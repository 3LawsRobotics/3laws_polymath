#!/bin/bash
set -e

SCRIPT_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &>/dev/null && pwd)
RDM_DIR=$(cd -- "$SCRIPT_DIR/.." &>/dev/null && pwd)
RDM_ROS_DIR="$RDM_DIR/packages/ROS2"

# Source ros package
if [ -n "$ZSH_VERSION" ]; then
  source "/opt/ros/humble/setup.zsh"
  source "$RDM_ROS_DIR/local_setup.zsh"
elif [ -n "$BASH_VERSION" ]; then
  source "/opt/ros/humble/setup.bash"
  source "$RDM_ROS_DIR/local_setup.bash"
else
  . "/opt/ros/humble/setup.sh"
  . "$RDM_ROS_DIR/local_setup.sh"
fi

# Add depdencies to search path
export LD_LIBRARY_PATH="$RDM_DIR/packages/deps/lib:$LD_LIBRARY_PATH"

set +e
