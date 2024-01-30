cmake_minimum_required(VERSION 3.2.6)

project(ex0201DynamicLibrary LANGUAGES C)

add_subdirectory(lib)

message("ex02-01 dynamic library")

add_executable(ex0201DynamicLibrary src/main.c)

target_link_libraries(ex0201DynamicLibrary PRIVATE dynamicLit)