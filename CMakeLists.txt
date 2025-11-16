cmake_minimum_required(VERSION 4.0)
project(clox C)

set(CMAKE_C_STANDARD 23)

# Enable sanitizers for all targets
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fsanitize=address,undefined -g -O1")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address,undefined -g -O1")
#set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -fsanitize=address,undefined")



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
