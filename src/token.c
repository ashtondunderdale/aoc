#include "token.h"

char *print_token(TokenType type) {
    switch (type) {
        case PLUS: return "PLUS";
        case MINUS: return "MINUS";
        case STAR: return "STAR";
        case SLASH: return "SLASH";
        case MODULO: return "MODULO";
        case PLUSEQ: return "PLUSEQ";
        case MINUSEQ: return "MINUSEQ";
        case STAREQ: return "STAREQ";
        case SLASHEQ: return "SLASHEQ";
        case MODULOEQ: return "MODULOEQ";
        case LBRACE: return "LBRACE";
        case RBRACE: return "RBRACE";
        case LPAREN: return "LPAREN";
        case RPAREN: return "RPAREN";
        case LSQBRACK: return "LSQBRACK";
        case RSQBRACK: return "RSQBRACK";
        case SEMICOLON: return "SEMICOLON";
        case COMMA: return "COMMA";
        case DOT: return "DOT";
        case LESST: return "LESST";
        case GREATERT: return "GREATERT";
        case LESSTEQ: return "LESSTEQ";
        case GREATERTEQ: return "GREATERTEQ";
        case EQUALS: return "EQUALS";
        case NEQUALS: return "NEQUALS";
        case ASSIGNMENT: return "ASSIGNMENT";
        case NOT: return "NOT";
        case OR: return "OR";
        case AND: return "AND";
        case IDENTIFIER: return "IDENTIFIER";
        case NUMBER: return "NUMBER";
        case STRING: return "STRING";
        case WHITESPACE: return "WHITESPACE";
        case BAD_TOKEN: return "BAD TOKEN";
        case EOF_TOKEN: return "EOF_TOKEN";
        default: return "UNKNOWN";
    }
}

// typedef enum {
//     PLUS, MINUS, STAR, SLASH, MODULO, PLUSEQ, MINUSEQ, STAREQ, SLASHEQ, MODULOEQ, 
//     LBRACE, RBRACE, LPAREN, RPAREN, LSQBRACK, RSQBRACK, SEMICOLON, COMMA, DOT,
//     LESST, GREATERT, LESSTEQ, GREATERTEQ, EQUALS, NEQUALS, ASSIGNMENT, NOT, OR, AND,

//     IDENTIFIER, NUMBER, STRING,
//     WHITESPACE, BAD_TOKEN, EOF_TOKEN
// } TokenType;

Token init_token(TokenType type, char* lexeme) {
    Token token;
    token.type = type;
    token.lexeme = lexeme;

    return token;
}