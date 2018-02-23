cmake_minimum_required(VERSION 2.8.6)
project (cmake_exercise)

set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

########################################################################
# Zyre dependency
########################################################################
#find_package(zyre REQUIRED)
#IF (ZYRE_FOUND)
#    include_directories(${ZYRE_INCLUDE_DIRS})
#    list(APPEND LIBS ${ZYRE_LIBRARIES})
#ELSE (ZYRE_FOUND)
#    message( FATAL_ERROR "zyre not found." )
#ENDIF (ZYRE_FOUND)

#add_executable(zyre_listener zyre_listener.cpp)
#target_link_libraries(zyre_listener ${LIBS})

#add_executable(zyre_talker zyre_talker.cpp)
#target_link_libraries(zyre_talker ${LIBS})

#add_executable(zyre_chatter zyre_chatter.cpp)
#target_link_libraries(zyre_chatter ${LIBS})

add_executable(main main.cpp)
