
project(GigeCamAPI)

cmake_minimum_required(VERSION 2.8)

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -O3 -Wall -Wno-unused-variable -Wno-unused-but-set-variable -g ${CMAKE_CXX_FLAGS}")
    message(STATUS "optional:-std=c++11 -O3 -Wall -g")   
endif(CMAKE_COMPILER_IS_GNUCXX)

aux_source_directory(. DIR_SRCS)
aux_source_directory(./Inc DIR_INC)
aux_source_directory(./Inc/Socket DIR_SOCK)
aux_source_directory(./Inc/MV_CrossPlatform DIR_PLAT)

#link_directories("/usr/local/lib")
link_libraries(opencv_core  opencv_highgui pthread)

#add_library(gigecam SHARED ${DIR_SRCS} ${DIR_INC} ${DIR_SOCK})
add_executable(discovery ${DIR_SRCS} ${DIR_INC} ${DIR_SOCK} ${DIR_PLAT})



