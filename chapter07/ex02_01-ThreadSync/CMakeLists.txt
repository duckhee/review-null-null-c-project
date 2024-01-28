cmake_minimum_required(VERSION 3.2.6)

project(ex0201ThreadSync LANGUAGES C)

message("ex02-01 thread sync")


if (${CMAKE_SYSTEM_NAME} MATCHES "Windows")
    add_executable(ex0201ThreadSync windowThreadSync.c)
else ()
    add_executable(ex0201ThreadSync linuxThreadSync.c)

    target_link_libraries(ex0201ThreadSync LINK_PRIVATE pthread)
endif ()

set_target_properties(ex0201ThreadSync PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)