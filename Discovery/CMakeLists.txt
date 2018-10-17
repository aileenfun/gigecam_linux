
project(Discovery)

cmake_minimum_required(VERSION 2.8)

if(CMAKE_COMPILER_IS_GNUCXX)
    set(CMAKE_CXX_FLAGS "-std=c++11 -O3 -Wall -Wno-unused-result -g ${CMAKE_CXX_FLAGS}")
    message(STATUS "optional:-std=c++11 -O3 -Wall -g")   
endif(CMAKE_COMPILER_IS_GNUCXX)


aux_source_directory(. DIR_SRCS)
aux_source_directory(../../CCHVAPI_Ethernet/Inc DIR_INC)
aux_source_directory(../../CCHVAPI_Ethernet/Inc/Socket DIR_SOCK)

link_directories("../../CCHVAPI_Ethernet/build")
link_libraries(gigecam)
link_directories("/usr/local/lib")
link_libraries(opencv_core  opencv_highgui pthread)
#link_libraries(opencv_core  opencv_highgui)
add_executable(discovery ${DIR_SRCS} ${DIR_SOCK})
#target_link_libraries (usbCamconsole  cyusb CqUsbCam)


