cmake_minimum_required(VERSION 3.17)
project(Json_Parser)

set(CMAKE_CXX_STANDARD 20)

add_executable(Json_Parser main.cpp JsonParser.cpp JsonParser.h)