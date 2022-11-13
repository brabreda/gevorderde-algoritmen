cmake_minimum_required(VERSION 3.10)

project(smoke_test)

set(SOURCES
	src/main.cpp
) 

set(HEADERS 
	src/lib.hpp
)
			
add_executable(smoke_test ${SOURCES} ${HEADERS})

set_property(TARGET smoke_test PROPERTY CXX_STANDARD 20)
set_property(TARGET smoke_test PROPERTY CXX_STANDARD_REQUIRED ON)

# Enable the Address Sanitizer
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O0 -fsanitize=address,undefined -fno-omit-frame-pointer")

enable_testing()
add_subdirectory (test)

