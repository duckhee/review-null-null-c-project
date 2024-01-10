cmake_minimum_required(VERSION 3.2.6)

project(ex0201RealNumber LANGUAGES C)

message("ex02-01 실수형의 부동소수점 표현")

add_executable(ex0201RealNumber realNumber.c)

set_target_properties(ex0201RealNumber PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)