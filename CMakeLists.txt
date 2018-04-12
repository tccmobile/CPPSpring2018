cmake_minimum_required(VERSION 3.9)
project(Spring2018)

set(CMAKE_CXX_STANDARD 11)

add_executable(Spring2018 Shape.cpp Shape.h Circle.cpp Circle.h Triangle.cpp Triangle.h Rectangle.cpp Rectangle.h Square.cpp Square.h ShapeTester.cpp Dodec.cpp Dodec.h)