cmake_minimum_required(VERSION 3.26)
project(First_Steps_in_C C)

set(CMAKE_C_STANDARD 17)

add_executable(First_Steps_in_C helloWorld.c
        main.c
        introductions.c
        library.h)
