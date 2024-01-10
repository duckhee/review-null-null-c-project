cmake_minimum_required(VERSION 3.2.6)

project(ex0101Complement LANGUAGES C)

message("ex01-01 2의 보수 예제")

add_executable(ex0101Complement complement.c)

set_target_properties(ex0101Complement PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)