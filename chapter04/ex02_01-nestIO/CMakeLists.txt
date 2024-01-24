cmake_minimum_required(VERSION 3.2.6)

project(ex0201NestIO LANGUAGES C)

message("ex02-01 nest io")

add_executable(ex0201NestIO nestIO.c)

set_target_properties(ex0201NestIO PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)