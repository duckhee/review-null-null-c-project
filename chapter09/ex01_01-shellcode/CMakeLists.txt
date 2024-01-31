cmake_minimum_required(VERSION 3.2.6)

project(ex0101ShellCode LANGUAGES C)

message("ex01-01 shell code")

add_executable(ex0101ShellCode WIN32)

target_sources(ex0101ShellCode PRIVATE windowShell.c)


set_target_properties(ex0101ShellCode PROPERTIES C_STANDARD 99 C_STANDARD_REQUIRED ON)
