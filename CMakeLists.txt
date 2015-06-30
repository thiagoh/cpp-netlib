cmake_minimum_required(VERSION 2.8)

#set(CMAKE_C_COMPILER "gcc-4.2")
#set(CMAKE_CXX_COMPILER "/usr/bin/clang++-3.6")
#set(CMAKE_CXX_LINK_EXECUTABLE "/usr/bin/clang++-3.6")

project(app_project)

add_executable(myapp main.cpp)

install(TARGETS myapp DESTINATION bin)

find_package( Boost REQUIRED COMPONENTS thread system)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(myapp ${Boost_LIBRARIES})
target_link_libraries(myapp crypto ssl)

find_package(OpenSSL)
include_directories(${OpenSSL_INCLUDE_DIRS})
target_link_libraries ( myapp ${OpenSSL_LIBRARIES} )

set ( CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} /data/dev/cpp/cpp-netlib-build )
find_package ( cppnetlib 0.11.0 REQUIRED )
include_directories ( ${CPPNETLIB_INCLUDE_DIRS} )
target_link_libraries ( myapp ${CPPNETLIB_LIBRARIES} )