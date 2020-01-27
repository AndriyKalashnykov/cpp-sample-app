project(cmake_template)
cmake_minimum_required(VERSION 2.8.7)

#Bring the headers, such as Student.h into the project
include_directories(include)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

add_executable(hello ${SOURCES})
target_link_libraries(hello PUBLIC "-static")
