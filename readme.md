[![Docker Image CI](https://github.com/AndriyKalashnykov/cpp-sample-app/actions/workflows/docker-image.yml/badge.svg?branch=master)](https://github.com/AndriyKalashnykov/cpp-sample-app/actions/workflows/docker-image.yml)
[![Hits](https://hits.seeyoufarm.com/api/count/incr/badge.svg?url=https%3A%2F%2Fgithub.com%2FAndriyKalashnykov%2Fcpp-sample-app&count_bg=%2379C83D&title_bg=%23555555&icon=&icon_color=%23E7E7E7&title=hits&edge_flat=false)](https://hits.seeyoufarm.com)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
# C++ starter project

The repository contains a C++ starter project with a CMakeLists.txt. The project is also using the boost testing libraries.

### Clone repo

```bash
git clone git@github.com:AndriyKalashnykov/cpp-sample-app.git
```

### Local usage

```bash
cd cpp-sample-app
git checkout 7bb1be5292dba0bc86327c07b45139748a444f5b
cmake .
make
make test
./hello
```

### Dockerifle.cpp

This docker build does the following:

* Uses mutistage build
* Uses GCC 9.2.0 as a `build` image
* Installs cmake and boost
* Sets /app as working directory
* Runs cmake and make
* Uses distroless images as runtime
* Copies `hello` application as `nonroot` user
* Specifies an unprivileged `nonroot` user for running the application
* Set the command `hello` to run when starting the container

### Build docker image

```bash
docker build -t gcc-cpp:1.0 .
```

### Run docker image

```bash
docker run --rm gcc-cpp:1.0
```






