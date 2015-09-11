cmake_minimum_required(VERSION 3.2)
project(14_Send_OpenCV_Mat)

find_package( OpenCV REQUIRED )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES publisher.cpp zhelpers.hpp)
add_executable(publisher ${SOURCE_FILES})
target_link_libraries(publisher ${OpenCV_LIBS} zmq)


set(SUB_SOURCE_FILES subscriber.cpp zhelpers.hpp)
add_executable(subscriber ${SUB_SOURCE_FILES})
target_link_libraries(subscriber ${OpenCV_LIBS} zmq)