//
// Created by Kristian Brudeli on 02/11/2025.
//

#ifndef CLOX_COMPILER_H
#define CLOX_COMPILER_H

#include "object.h"
#include "chunk.h"

ObjFunction* compile(const char* source);

#endif //CLOX_COMPILER_H