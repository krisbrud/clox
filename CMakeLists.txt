cmake_minimum_required(VERSION 4.0)
project(clox C)

set(CMAKE_C_STANDARD 23)


add_executable(clox main.c
        common.h
        chunk.h
        chunk.h
        chunk.c
        debug.h
        memory.h
        memory.c
        debug.c
        value.h
        value.c
        chunk.c
        vm.h
        vm.c
        compiler.c
        compiler.h
        scanner.c
        scanner.h
)
