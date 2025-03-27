cmake_minimum_required(VERSION 3.30)
project(array_strucs C)

set(CMAKE_C_STANDARD 23)

add_executable(array_strucs main.c
        utils.c
        utils.h)
