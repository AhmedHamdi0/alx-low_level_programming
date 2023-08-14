cmake_minimum_required(VERSION 3.24)
project(0x0D_preprocessor C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0D_preprocessor main.c 0-object_like_macro.h 1-pi.h 2-main.c 3-function_like_macro.h 4-sum.h)
