cmake_minimum_required(VERSION 3.2.6)
project(review_null_null_cproject LANGUAGES C)

set(CMAKE_C_STANDARD 99)

add_executable(review_null_null_cproject main.c)

# sub directory add
add_subdirectory(chapter01)
add_subdirectory(chapter02)