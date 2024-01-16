cmake_minimum_required(VERSION 3.2.6)

project(ex0201ParameterSender LANGUAGES C)

message("ex01 매개변수 전달 기법")
# stack size 변경 하는 방법
add_compile_options("-Wl,-stack_size,1048576")

add_executable(ex0201ParameterSender parameterSender.c)

set_target_properties(ex0201ParameterSender PROPERTIES C_STANDARD 99 C_STANDARD_REQURIED ON)
# stack size 변경
#target_link_options(ex0201ParameterSender PRIVATE "-Wl,--stack,10000000")
#target_compile_options(ex0201ParameterSender PRIVATE "-Wl,--stack,1048576")

