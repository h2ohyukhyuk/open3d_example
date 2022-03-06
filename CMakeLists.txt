
cmake_minimum_required(VERSION 3.19)

project(Open3DFirst CXX)

add_compile_options(-lpthread -O3)

message("CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH}")
message("CMAKE_CURRENT_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}")
message("CMAKE_C_COMPILER ${CMAKE_C_COMPILER}")
message("CMAKE_CXX_COMPILER ${CMAKE_CXX_COMPILER}")
message("CMAKE_CXX_STANDARD ${CMAKE_CXX_STANDARD}")

find_package(Open3D REQUIRED)
find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS} )

aux_source_directory(src SRC_SRC)

add_executable(${CMAKE_PROJECT_NAME} ${SRC_SRC})
target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE Open3D::Open3D ${OpenCV_LIBS})
