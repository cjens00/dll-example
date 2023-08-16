cmake_minimum_required(VERSION 3.20)
project(dll-example)

add_subdirectory(hellodll)
add_executable(client-app main.c hellodll/hellolib.h)

target_link_libraries(client-app hellodll)