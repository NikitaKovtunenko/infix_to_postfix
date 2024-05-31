cmake_minimum_required(VERSION 3.27)
project(Polina)

set(CMAKE_CXX_STANDARD 17)

add_executable(Polina
        main.cpp
        ExpressionCalc.h
        ExpressionCalc.cpp
        Queue.h
        Stack.h
)
