project(ImageProcess)
cmake_minimum_required(VERSION 2.8)

set(CXX_FLAGS `pkg-config --cflags opencv`)
set(CXX_LIBS `pkg-config --libs opencv`)

add_executable(test test.cpp)
target_link_libraries(test ${CXX_FLAGS})
