cmake_minimum_required(VERSION 3.24)
project(date)

set(CMAKE_CXX_STANDARD 17)

add_executable(date main.cpp lib/parser/Parser.cpp lib/parser/Parser.h lib/date/Date.cpp lib/date/Date.h)
