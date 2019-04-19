cmake_minimum_required(VERSION 3.0)

project(NervousGame)

include_directories(include)

#Add the files
file(GLOB_RECURSE SOURCES src/*.cpp)
add_executable(nervous_game ${SOURCES})

#Add libraries
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")
find_package(SFML REQUIRED graphics network audio window system)
target_link_libraries(nervous_game ${SFML_LIBRARIES})

#Copy resources
file(COPY ${CMAKE_SOURCE_DIR}/res DESTINATION ${CMAKE_BINARY_DIR})
