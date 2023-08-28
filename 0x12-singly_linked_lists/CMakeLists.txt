cmake_minimum_required(VERSION 3.24)
project(0x12_singly_linked_lists C)

set(CMAKE_C_STANDARD 11)

add_executable(0x12_singly_linked_lists main.c lists.h 0-print_list.c 1-list_len.c 2-add_node.c 3-add_node_end.c 4-free_list.c 100-first.c)
