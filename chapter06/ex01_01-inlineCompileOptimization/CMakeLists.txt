cmake_minimum_required(VERSION 3.2.6)

project(ex0101InlineCompileOptimization LANGUAGES C)

message("ex01-01 inline compile optimization")

add_executable(ex0101InlineCompileOptimization inlineCompileOptimization.c)

set_target_properties(ex0101InlineCompileOptimization PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
# inline 최적화 하라고 compiler에게 알려주는 것
target_compile_options(ex0101InlineCompileOptimization PRIVATE "-O3")