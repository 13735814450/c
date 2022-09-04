cmake_minimum_required(VERSION 3.16)
project(first)

set(CMAKE_CXX_STANDARD 14)

add_executable(first main.cpp cmake-build-debug/src/support.cpp cmake-build-debug/src/su.cpp cmake-build-debug/src/su.h cmake-build-debug/src/tt.cpp cmake-build-debug/src/support.h cmake-build-debug/src/Box.cpp cmake-build-debug/src/Box.h cmake-build-debug/src/Box.cpp cmake-build-debug/src/Box.h cmake-build-debug/src/B.cpp cmake-build-debug/src/B.h cmake-build-debug/src/P.cpp cmake-build-debug/src/P.h cmake-build-debug/src/Ns.cpp cmake-build-debug/src/Ns.h cmake-build-debug/src/temp.cpp cmake-build-debug/src/temp.h cmake-build-debug/src/sig.cpp cmake-build-debug/src/sig.h cmake-build-debug/src/say.cpp cmake-build-debug/src/say.h cmake-build-debug/src/user.cpp cmake-build-debug/src/user.h cmake-build-debug/src/method.cpp cmake-build-debug/src/method.h)
find_package(Threads REQUIRED)
target_link_libraries(first Threads::Threads)	#这里Study_C_project 是你的项目名称