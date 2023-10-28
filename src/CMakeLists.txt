cmake_minimum_required(VERSION 3.10)

project(Tema1)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(lib)

add_executable(Tema1 main.cpp)

target_link_libraries(Tema1 PUBLIC StudentLib)

target_include_directories(Tema1 PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/lib")
                          