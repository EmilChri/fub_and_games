cmake_minimum_required(VERSION 3.23)
project(fub_and_games C)

set(CMAKE_C_STANDARD 99)

add_library(fub_and_games library.c Test.c ny.c)
add_executable(library library.c)
add_executable(Test Test.c)
add_executable(ny ny.c)