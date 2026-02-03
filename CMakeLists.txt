cmake_minimum_required(VERSION 3.18)
project(EasyTools VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O2")

add_library(EasyTools SHARED src/EasyTools.cpp)

target_include_directories(EasyTools PUBLIC include/)

install(TARGETS EasyTools LIBRARY DESTINATION lib)
install(
  FILES 
  ${PROJECT_SOURCE_DIR}/include/Time.hpp
  ${PROJECT_SOURCE_DIR}/include/Calculation.hpp
  ${PROJECT_SOURCE_DIR}/include/Files.hpp
  ${PROJECT_SOURCE_DIR}/include/Utilities.hpp
  ${PROJECT_SOURCE_DIR}/include/EasyTools.hpp
  DESTINATION include/EasyTools
)