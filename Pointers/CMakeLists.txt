cmake_minimum_required(VERSION 3.4)
project(PointersTutorials)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c11")

set(SOURCE_FILES main.c PointersToPointersTutorial.h ArraysAsFunctionArgumentsTutorial.h CharacterArraysAndPointersTutorial.h TutorialUtils.c TutorialUtils.h)
add_executable(PointersTutorials ${SOURCE_FILES})