cmake_minimum_required(VERSION 3.2)
project(14_Send_OpenCV_Mat)

find_package( OpenCV REQUIRED )

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES local_computer.cpp zhelpers.hpp)
add_executable(local_computer ${SOURCE_FILES})
target_link_libraries(local_computer ${OpenCV_LIBS} zmq)

set(SUB_SOURCE_FILES server.cpp zhelpers.hpp)
add_executable(server ${SUB_SOURCE_FILES})
target_link_libraries(server zmq)

set(RECEIVER_SOURCE_FILES local_computer_receiver.cpp zhelpers.hpp)
add_executable(local_computer_receiver ${RECEIVER_SOURCE_FILES})
target_link_libraries(local_computer_receiver ${OpenCV_LIBS} zmq)