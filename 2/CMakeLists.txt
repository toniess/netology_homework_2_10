cmake_minimum_required(VERSION 3.22.0)

project(figures_project)

set(SOURCES
	sources/main.cpp
	
	sources/figure.cpp
	
	sources/triangle.cpp
	sources/equilateraltriangle.cpp
	sources/righttriangle.cpp
	sources/isoscelestriangle.cpp
	
	sources/quadrilateral.cpp
	sources/parallelogram.cpp
	sources/rectangle.cpp
	sources/rhomb.cpp
	sources/square.cpp
	)

set(HEADERS
	sources/figure.h
	
	sources/triangle.h
	sources/equilateraltriangle.h
	sources/righttriangle.h
	sources/isoscelestriangle.h
	
	sources/quadrilateral.h
	sources/parallelogram.h
	sources/rectangle.h
	sources/rhomb.h
	sources/square.h
	)

add_executable(figures_program ${SOURCES} ${HEADERS})
