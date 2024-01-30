cmake_minimum_required(VERSION 3.2.6)

project(ex0101Library LANGUAGES C)

add_subdirectory(lib)

add_executable(ex0101Library src/main.c)

target_link_libraries(ex0101Library PRIVATE addLib)
