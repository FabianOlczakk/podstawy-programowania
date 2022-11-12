cmake_minimum_required(VERSION 3.23)
project(repo)

set(CMAKE_CXX_STANDARD 14)

include_directories(lista2)

add_executable(repo
        lista2/zad1a.cpp)
