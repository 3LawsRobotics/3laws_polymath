## Base image
ARG BASE_ARCH=amd64
FROM $BASE_ARCH/ros:humble-ros-core

ARG DEBIAN_FRONTEND=noninteractive

# Install dependencies
RUN apt-get update && \
  apt-get install -y --no-install-recommends libspdlog-dev

# Set environment variable
WORKDIR /root
ENV HOME "/root"
ENV LLL_WS $HOME/3lawsRoboticsInc/robot_diagnostic_module

# Copy source code
ADD packages $LLL_WS/packages
ADD config $LLL_WS/config

# Give access to root folder to everyone
RUN chmod -R 777 /root

# Startup commands
ENTRYPOINT ["/bin/bash", "-c", "exec $LLL_WS/packages/start_rdm.sh \"${@}\"", "--"]
