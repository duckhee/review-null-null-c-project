cmake_minimum_required(VERSION 3.2.6)

project(ex0301CharArray LANGUAGES C)

message("ex03-01 문자열에 대한 이해")

add_executable(ex0301CharArray charArray.c)

set_target_properties(ex0301CharArray PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)