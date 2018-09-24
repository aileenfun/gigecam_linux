
project(GigeCamAPI)

cmake_minimum_required(VERSION 2.8)

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -O3 -Wall -Wno-unused-variable -Wno-unused-but-set-variable -g ${CMAKE_CXX_FLAGS}")
    message(STATUS "optional:-std=c++11 -O3 -Wall -g")   
endif(CMAKE_COMPILER_IS_GNUCXX)

aux_source_directory(. DIR_SRCS)


#link_directories("/usr/local/lib")

add_library(gigecam SHARED ${DIR_SRCS} ${SENSORS_DIR_SRCS})



