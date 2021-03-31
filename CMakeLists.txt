cmake_minimum_required(VERSION 3.17)
project(sampleLinkedList)

set(CMAKE_CXX_STANDARD 14)

add_executable(sampleLinkedList main.cpp LinkedList.cpp LinkedList.h ListNode.cpp ListNode.h studentData.cpp studentData.h)