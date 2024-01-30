cmake_minimum_required(VERSION 3.2.6)

# library 형태로 생성 -> static library 형태 STATIC
add_library(addLib STATIC Inc/static_add.h)

target_include_directories(addLib PUBLIC Inc)

target_sources(addLib PRIVATE Src/static_add.c)