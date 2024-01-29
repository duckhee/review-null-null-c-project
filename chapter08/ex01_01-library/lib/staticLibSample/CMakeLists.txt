cmake_minimum_required(VERSION 3.2.6)

add_library(addLib STATIC Inc/static_add.h)

target_include_directories(addLib PUBLIC Inc)

target_sources(addLib PRIVATE Src/static_add.c)