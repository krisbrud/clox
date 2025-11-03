//
// Created by Kristian Brudeli on 02/11/2025.
//

#include "compiler.h"

#include <stdio.h>

#include "scanner.h"

bool compile(const char *source, Chunk* chunk) {
    initScanner(source);
    advance();
    expression();
    consume(TOKEN_EOF, "Expect end of expression.");
}
