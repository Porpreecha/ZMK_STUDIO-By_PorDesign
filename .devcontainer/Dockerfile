# Debian base image
FROM debian:12-slim
ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update \
  && apt-get install -y --no-install-recommends \
     git python3 python3-pip python3-venv build-essential cmake ninja-build \
     curl xz-utils file gcc g++ unzip pkg-config \
  && rm -rf /var/lib/apt/lists/*

# Install west and pyocd
RUN pip3 install --no-cache-dir west pyocd

# Optional tools
RUN apt-get update && apt-get install -y --no-install-recommends openocd dfu-util && rm -rf /var/lib/apt/lists/*

ARG USERNAME=vscode
ARG USER_UID=1000
ARG USER_GID=$USER_UID
RUN groupadd --gid $USER_GID $USERNAME \
  && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
  && apt-get update && apt-get install -y sudo && rm -rf /var/lib/apt/lists/* \
  && echo "$USERNAME ALL=(ALL) NOPASSWD:ALL" >> /etc/sudoers

USER $USERNAME
WORKDIR /workspace
ENV PATH="/home/$USERNAME/.local/bin:$PATH"
CMD ["/bin/bash"]
