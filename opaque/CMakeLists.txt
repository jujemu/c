cmake_minimum_required(VERSION 3.5)
project(opaque C)

add_compile_options(-Wall -Wextra -Wunused-variable -Wshadow -Wuninitialized)

add_library(exam libexam.c)

add_executable(executable main.c)
target_link_libraries(executable exam)
