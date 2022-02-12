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






