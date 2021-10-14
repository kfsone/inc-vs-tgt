CMAKE_MINIMUM_REQUIRED(VERSION 3.18)
PROJECT("Includes")

INCLUDE(CMakeLib1.txt)
INCLUDE(CMakeLib2.txt)

ADD_EXECUTABLE(
	product

	main.cpp
)
TARGET_LINK_LIBRARIES(
	product

	# These aren't something we plan to expose to anyone who consumes us.
	PRIVATE
	lib1 lib2
)
