cmake_minimum_required(VERSION 3.2.6)

project(ex0301Framework LANGUAGES C)

message("ex03-01 framework split ui and business")

if (${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    add_executable(ex0301Framework windowFramework.c)
else ()
    add_executable(ex0301Framework linuxFramework.c)

    target_link_libraries(ex0301Framework LINK_PRIVATE pthread)
endif ()
set_target_properties(ex0301Framework PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)

