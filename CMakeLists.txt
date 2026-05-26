cmake_minimum_required(VERSION 4.2)
project(learning_c C)

set(CMAKE_C_STANDARD 11)

add_executable(learning_c
        compiler/compiler.c
        Projects/Calculator/calculator.c
        Projects/Calculator/pointercalculator.c
        Projects/Calculator/pointerswap.c
        Projects/Numbers/numbers.c)
