cmake_minimum_required(VERSION 3.10)

# Define the project name
project(StudentManagementSystem)

# Set the C++ standard
set(CMAKE_CXX_STANDARD 98)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable by specifying your source files
add_executable(StudentManagementSystem
        main.cpp
        Student.cpp
        LinkedList.cpp
        Node.cpp
        Person.cpp

)

# Include directories if there are header files in separate directories
include_directories(
        ${PROJECT_SOURCE_DIR}
)