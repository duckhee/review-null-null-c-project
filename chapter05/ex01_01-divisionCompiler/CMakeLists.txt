cmake_minimum_required(VERSION 3.2.6)

project(ex0101DivisionCompile LANGUAGES C)

message("ex01-01 division compile")

add_executable(ex0101DivisionCompile divisionCompile.c add.h add.c)


set_target_properties(ex0101DivisionCompile PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)


