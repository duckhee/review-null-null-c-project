cmake_minimum_required(VERSION 3.2.6)

project(ex0301CompilerOptimization LANGUAGES C)

message("ex03-01 compiler optimization")

add_executable(ex0301CompilerOptimization compilerOptimization.c)

set_target_properties(ex0301CompilerOptimization PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)