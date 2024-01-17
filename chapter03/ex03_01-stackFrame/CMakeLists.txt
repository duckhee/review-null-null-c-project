cmake_minimum_required(VERSION 3.2.6)

project(ex0301StackFrame LANGUAGES C)

message("ex03-01 stack frame")

add_executable(ex0301StackFrame stackFrame.c)

set_target_properties(ex0301StackFrame PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)