cmake_minimum_required(VERSION 3.24)
project(0x0C_more_malloc_free C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0C_more_malloc_free main.c main.h 0-malloc_checked.c 1-string_nconcat.c 2-calloc.c)
