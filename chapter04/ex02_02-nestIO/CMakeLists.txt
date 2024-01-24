cmake_minimum_required(VERSION 3.2.6)

project(ex0202NsetIO LANGUAGES C)

message("ex02-02 nestIO sample")

add_executable(ex0202NsetIO nestIO.c)

set_target_properties(ex0202NsetIO PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)