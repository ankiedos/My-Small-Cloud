parser grammar JaiParser;
options
{
    tokenVocab=JaiLexer;
}
file: lines=line+;
line: stat (NL | EOF);
stat: decl | expr;
enum_body: ENUM WS* (ENUM_MEMBER COMMA WS*)* ENUM_MEMBER WS* ENUM_END;
struct_body: STRUCT WS* (STRUCT_MEMBER WS* TERMINATOR WS*)* STRUCT_MEMBER WS* TERMINATOR;
decl:
    (ID WS* DECL_OP WS* TERMINATOR)
    |
    (ID WS* ASSIGN WS* expr WS* TERMINATOR)
    ;
expr:
    //(left=expr WS* operator=(PLUS | MINUS) WS* right=expr)
    //|
    //(left=expr WS* operator=(MULT | DIV) WS* right=expr)
    //|
    //(left=expr WS* operator=POW WS* right=expr)
    //|
    plus
    |
    minus
    |
    mult
    |
    div
    |
    pow
    |
    (MINUS expr)
    |
    (LPAREN expr RPAREN)
    |
    VAR
    |
    CONST
    |
    LITERAL
    ;
plus: (left=(mult | div) WS* operator=PLUS WS* right=(mult | div));
minus: (left=(mult | div) WS* operator=MINUS WS* right=(mult | div));
mult: (left=pow WS* operator=MULT WS* right=pow);
div: (left=pow WS* operator=DIV WS* right=pow);
pow: (left=expr WS* operator=POW WS* right=expr);