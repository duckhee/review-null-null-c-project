cmake_minimum_required(VERSION 3.2.6)
project(ex0101Thread LANGUAGES C)
if (${CMAKE_SYSTEM_NAME} MATCHES "Windows")

    message("ex01-01 window thread Win32 API")

    add_executable(ex0101Thread windowThreadExam.c)


else ()
    message("ex01-01 thread")

    add_executable(ex0101Thread linuxThreadExample.c)
endif ()

set_target_properties(ex0101Thread PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)