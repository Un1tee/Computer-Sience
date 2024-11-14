cmake_minimum_required(VERSION 3.29)
project(Computer_Sience C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Computer_Sience
    body.c
    function.h
    main.c)
