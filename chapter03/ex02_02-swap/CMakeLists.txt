cmake_minimum_required(VERSION 3.2.6)

project(ex0202Swap LANGUAGES C)

message("ex02-02 매개변수 전달 두번째 swap")

add_executable(ex0202Swap swap.c)

set_target_properties(ex0202Swap PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)