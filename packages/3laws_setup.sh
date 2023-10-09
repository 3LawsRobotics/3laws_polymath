#!/bin/bash
set -e

# Use relative path if LLL_WS not defined
if [ -z "$LLL_WS" ]; then
  echo "LLL_WS variable not defined, using relative path"
  SCRIPT_DIR=$(cd -- "$(dirname -- "${BASH_SOURCE[0]}")" &>/dev/null && pwd)
  LLL_WS=$(cd -- "$SCRIPT_DIR/.." &>/dev/null && pwd)
fi

RDM_PATH="$LLL_WS/packages/ROS2"

# Source ros package
if [ -n "$ZSH_VERSION" ]; then
  source "/opt/ros/humble/setup.zsh"
  source "$RDM_PATH/local_setup.zsh"
elif [ -n "$BASH_VERSION" ]; then
  source "/opt/ros/humble/setup.bash"
  source "$RDM_PATH/local_setup.bash"
else
  . "/opt/ros/humble/setup.sh"
  . "$RDM_PATH/local_setup.sh"
fi

# Add depdencies to search path
export LD_LIBRARY_PATH="$LLL_WS/packages/deps/lib:$LD_LIBRARY_PATH"

set +e
