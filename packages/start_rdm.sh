#!/bin/bash
set -e

SCRIPT_DIR=$(cd -- "$(dirname -- "${0}")" &>/dev/null && pwd)

source "$SCRIPT_DIR"/3laws_setup.sh

# Only actually start rdm if not trying to start a terminal
if [ "$1" = "bash" ]; then
  set +e
  exec "$@"
elif [ "$1" = "sh" ]; then
  set +e
  exec "$@"
elif [ "$1" = "zsh" ]; then
  set +e
  exec "$@"
else
  set +e
  ros2 launch lll_rdm rdm.launch.py "$@"
  exit 1
fi
