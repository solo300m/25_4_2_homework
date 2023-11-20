cmake_minimum_required (VERSION 3.8)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(Task2 "Task2.cpp" "${MY_INCLUDE_DIR}/Task2.h" "${MY_INCLUDE_DIR}/cpu.h" "cpuCode.cpp" "${MY_INCLUDE_DIR}/disk.h" "${MY_INCLUDE_DIR}/gpu.h" "${MY_INCLUDE_DIR}/kbd.h" "${MY_INCLUDE_DIR}/ram.h" "ramCode.cpp" "diskCode.cpp" "kbdCode.cpp" "gpuCode.cpp")
target_include_directories(Task2 PUBLIC ${MY_INCLUDE_DIR})