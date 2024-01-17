cmake_minimum_required(VERSION 3.2.6)

project(ex0302StackFrame LANGUAGES C)

message("ex03-02 stack frame function")

add_executable(ex0302StackFrame stackFrameFunction.c)

set_target_properties(ex0302StackFrame PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)