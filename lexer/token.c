#include <stdio.h>

#include "token.h"

const LexerTokenMap keyword_token_type_map[] = {
    {"let", TOKEN_LET},
    {"int", TOKEN_INT_TYPE},
    {"char", TOKEN_CHAR_TYPE},
    {"float", TOKEN_FLOAT_TYPE},
    {"bool", TOKEN_BOOL_TYPE},
    {"true", TOKEN_TRUE},
    {"false", TOKEN_FALSE},
    {NULL, -1},
};

const LexerTokenMap single_token_type_map[] = {
    {"=", TOKEN_SINGLE_EQUALS},
    {";", TOKEN_SEMI_COLON},
    {":", TOKEN_COLON},
    {NULL, -1},
};