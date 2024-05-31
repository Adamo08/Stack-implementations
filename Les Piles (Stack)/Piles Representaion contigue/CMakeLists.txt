cmake_minimum_required(VERSION 3.26)
project(Piles_Representaion_Contigue)

set(CMAKE_CXX_STANDARD 17)

add_executable(Piles_Representaion_Contigue
        TPile.h
        HandleStack.c
        main.c
        "../Piles Representaion chainee/HandleStack.c"
        "../Piles Representaion chainee/main.c")
