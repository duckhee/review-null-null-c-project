cmake_minimum_required(VERSION 3.2.6)

project(ex0301CallBackFunction LANGUAGES C)

message("ex03-01 call back function")

add_executable(ex0301CallBackFunction callBackFunction.c)

set_target_properties(ex0301CallBackFunction PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)