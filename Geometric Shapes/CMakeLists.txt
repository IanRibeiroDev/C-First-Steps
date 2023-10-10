cmake_minimum_required(VERSION 3.26)
project(First_Steps_in_C C)

set(CMAKE_C_STANDARD 17)

add_executable(First_Steps_in_C
        "Geometric Shapes/circle.c"
        "Geometric Shapes/main.c"
        "Geometric Shapes/shapes.h"
        "Geometric Shapes/rectangle.c"
        "Geometric Shapes/square.c")
