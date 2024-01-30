cmake_minimum_required(VERSION 3.2.6)

# library 형태로 생성 -> dynamic library 형태 SHARED
add_library(dynamicLit SHARED)

target_include_directories(dynamicLit PUBLIC inc)

target_sources(dynamicLit PRIVATE src/dynamicAdd.c)