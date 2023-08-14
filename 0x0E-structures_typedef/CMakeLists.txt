cmake_minimum_required(VERSION 3.24)
project(0x0E_structures_typedef C)

set(CMAKE_C_STANDARD 11)

add_executable(0x0E_structures_typedef main.c dog.h 1-init_dog.c 2-print_dog.c 4-new_dog.c 5-free_dog.c)
