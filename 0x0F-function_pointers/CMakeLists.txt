cmake_minimum_required(VERSION 3.24)
project(0x0F_function_pointers C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0F_function_pointers main.c 0-print_name.c main.h 1-array_iterator.c 2-int_index.c 3-calc.h 3-get_op_func.c 3-op_functions.c)
