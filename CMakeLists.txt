cmake_minimum_required(VERSION 3.10)
project(OpenCV_Demo)

set(OpenCV_DIR "C:/Users/deanr/Downloads/opencv/build")
find_package(OpenCV REQUIRED)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv_demo src/main.cpp)

target_link_libraries(opencv_demo ${OpenCV_LIBS})