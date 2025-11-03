//
// Created by Kristian Brudeli on 02/11/2025.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "chunk.h"

bool compile(const char* source, Chunk* chunk);

#endif //CLOX_COMPILER_H