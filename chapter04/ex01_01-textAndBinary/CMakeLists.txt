cmake_minimum_required(VERSION 3.2.6)

project(ex0101TextAndBinary LANGUAGES C)

message("ex01-01 텍스트와 바이너리 차이")

add_executable(ex0101TextAndBinary textAndBinary.c)

set_target_properties(ex0101TextAndBinary PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)

