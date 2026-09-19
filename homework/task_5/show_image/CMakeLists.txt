cmake_minimum_required(VERSION 3.10)

project(ShowImage)

find_package(OpenCV REQUIRED)

add_executable(show_image main.cpp)

target_link_libraries(show_image ${OpenCV_LIBS})
