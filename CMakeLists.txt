# CMake version minimă necesară
cmake_minimum_required(VERSION 3.5)

set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")
# Numele proiectului

project(TEMA-PAOO LANGUAGES CXX)

# Adăugăm executabilul
add_executable(TEMA-PAOO tema1.cpp)
