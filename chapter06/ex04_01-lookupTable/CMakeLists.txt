cmake_minimum_required(VERSION 3.2.6)

project(ex0401LookUpTable LANGUAGES C)

message("ex04-01 look up table")

add_executable(ex0401LookUpTable lookupTable.c)

set_target_properties(ex0401LookUpTable PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)