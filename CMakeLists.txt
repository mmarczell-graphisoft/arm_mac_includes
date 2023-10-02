cmake_minimum_required(VERSION 3.20)
project(emsandbox)

add_executable(
	main

	main.cpp
)

target_compile_options(
	main
	PUBLIC

	-std=c++17
	-pthread
	-Wall
)

target_link_options(
	main
	PUBLIC

	-pthread
	
	--bind	
	-sPTHREAD_POOL_SIZE=4
	-sPROXY_TO_PTHREAD
)
