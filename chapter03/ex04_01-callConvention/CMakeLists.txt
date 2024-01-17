cmake_minimum_required(VERSION 3.2.6)

project(ex0401CallConvention LANGUAGES C)

message("ex04-01 call convention")

add_executable(ex0401CallConvention callConvention.c)

set_target_properties(ex0401CallConvention PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)