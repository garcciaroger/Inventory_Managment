cmake_minimum_required(VERSION 3.10) # Minimum CMake version required
project(Inventory_Managment)                  # Replace with your project name
set(CMAKE_CXX_STANDARD 17)          # Use C++17 standard
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Enforce the C++ standard
add_executable(RunProgram main.cpp Item.cpp) # Replace with your source files
include_directories(${PROJECT_SOURCE_DIR}/include) # Adjust to your folder structure