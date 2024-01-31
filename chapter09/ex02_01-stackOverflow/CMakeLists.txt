cmake_minimum_required(VERSION 3.2.6)

project(ex0201StackOverflow LANGUAGES C)

message("ex02-01 stack overflow")

add_executable(ex0201StackOverflow)

target_sources(ex0201StackOverflow PRIVATE stackOverflow.c stackOverflowHacking.c)

set_target_properties(ex0201StackOverflow PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)