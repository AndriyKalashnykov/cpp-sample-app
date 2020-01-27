## cpp-sample-app


The repository contains a C++ starter project with a CMakeLists.txt. The project is also using the boost testing libraries.

### Clone repo

```shell
git clone https://github.com/andriykalashnykov/cpp-sample-app
```

### Local usage

```
$ cd cpp-sample-app
$ cmake .
$ make
$ make test
$ ./hello
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

```shell
docker build -t gcc-cpp:1.0 -f Dockerfile.cpp .
```

### Run docker image

```shell
docker run -it --rm gcc-cpp:1.0 ./hello
```






