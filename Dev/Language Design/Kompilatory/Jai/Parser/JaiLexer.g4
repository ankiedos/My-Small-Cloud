lexer grammar JaiLexer;
TERMINATOR: ';'+;
LPAREN: '(';
RPAREN: ')';
VAR:
    SIMPLE
    |
    ENUM_ID
    |
    STRUCT_ID
    ;
CONST:
    SIMPLE
    |
    ENUM_ID
    |
    STRUCT_ID
    ;
SIMPLE: ID;
ENUM_ID: ID;
STRUCT_ID: ID;
// Operators
ASSIGN:
    (VAR_DECL_OP WS* '=')
    |
    (CONST_DECL_OP WS* '=')
    ;
CONST_DECL_OP: ':' WS* TYPE? WS* ':';
VAR_DECL_OP: ':' WS* TYPE?;
DECL_OP: CONST_DECL_OP | VAR_DECL_OP;
PLUS: '+';
MINUS: '-';
MULT: '*';
DIV: '/';
POW: '^';
// Types
TYPE: INT | SIGNED | UNSIGNED | FLOAT | FLOAT64 | STRUCT | ENUM;
INT: 'int';
SIGNED: 's' SIZE_IN_BYTES;
UNSIGNED: 'u' SIZE_IN_BYTES;
FLOAT: 'float';
FLOAT64: FLOAT '64';
STRUCT: 'stuct' WS* '{' ->pushMode(STRUCT_DECL);
ENUM: 'enum' (UNSIGNED | SIGNED) WS* '{' ->pushMode(ENUM_DECL);
BLOCK_BEGIN: '{' ->pushMode(BLOCK);
// Literals
LITERAL: INTLIT | SIGNEDLIT | UNSIGNEDLIT | FLOATLIT | UNSIGNEDFLOATLIT | SIGNEDFLOATLIT;
//   Ints
INTLIT: UNSIGNEDLIT | SIGNEDLIT;
SIGNEDLIT: SIGN WS* DIGITS SIGNEDSUFFIX;
UNSIGNEDLIT:    DIGITS UNSIGNEDSUFFIX;
//   Floats
FLOATLIT: SIGNEDFLOATLIT | UNSIGNEDFLOATLIT;
UNSIGNEDFLOATLIT:    DIGITS '.' DIGITS_AFTER_DEC UNSIGNEDSUFFIX FLOATSUFFIX;
SIGNEDFLOATLIT: SIGN WS* DIGITS '.' DIGITS_AFTER_DEC SIGNEDSUFFIX   FLOATSUFFIX;
WS: (NL | '\t' | ' ') ->skip;
NL: ('\n' | '\r' | '\f')+;
fragment DIGIT_NONZERO: [123456789];
fragment DIGIT: [0123456789];
fragment DIGITS: DIGIT_NONZERO DIGIT*;
fragment DIGITS_AFTER_DEC: DIGIT*;
ID: [a-zA-Z_] (DIGITS [a-zA-Z_]*)*;
fragment ALPHA: [a-zA-Z]*;
fragment ALPHANUM: (ALPHA DIGIT)*;
fragment STRING: .*?;
fragment SIZE_IN_BYTES: '8' | '16' | '32' | '64' | '128';
COMMA: ','; // Only for parser
/*
* Althought maybe there are non-standard tokens, KiEnT Jai allows them
*/
fragment UNSIGNEDSUFFIX: [uU]?;
fragment SIGNEDSUFFIX: [sS]?;
fragment FLOATSUFFIX: [fF]?;
fragment SIGN: [-+]?;
/* End non-standard rules */
mode BLOCK;
    BLOCK_END: '}' ->popMode;
mode STRUCT_DECL;
    STRUCT_END: '}' WS* TERMINATOR ->popMode;
    STRUCT_MEMBER: ID | (ID WS* ASSIGN WS* LITERAL);
mode ENUM_DECL;
    ENUM_END: '}' WS* TERMINATOR ->popMode;
    ENUM_MEMBER: ID;