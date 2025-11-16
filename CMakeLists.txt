cmake_minimum_required(VERSION 4.0)
project(clox C)

set(CMAKE_C_STANDARD 23)


add_executable(clox main.c
        common.h
        chunk.h
        chunk.c
        debug.h
        debug.c
        memory.h
        memory.c
        value.h
        value.c
        vm.h
        vm.c
        compiler.c
        compiler.h
        scanner.c
        scanner.h
        object.c
        object.h
        table.c
        table.h
)
