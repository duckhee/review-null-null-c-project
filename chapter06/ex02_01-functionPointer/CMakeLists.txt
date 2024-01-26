cmake_minimum_required(VERSION 3.2.6)

project(ex0201FunctionPointer LANGUAGES C)

message("ex01-02 function pointer")

add_executable(ex0201FunctionPointer functionPointer.c)

set_target_properties(ex0201FunctionPointer PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)