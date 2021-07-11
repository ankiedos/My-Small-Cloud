lexer grammar CppScriptLexer;
NEWLINE : '\n';
WS : ([ \r\t])+ ->skip;
SEMI : ';';
PASTE : 'paste';
DEFINITION : 'def';
META : 'meta';
// Code blocks
// if
IF : 'if';
THEN : 'then';
ELSE : 'else';
ENDIF : 'endif';
DO_BLOCK : 'do' ->pushMode(do); // DO ... end
UNLESS : 'unless'; // if not
SELECT : 'select'; // generalised switch
SWITCH : 'switch'; // switch-case instruction
// Loops
WHILE : 'while' ->pushMode(whileloop); // while loop
FOR : 'for'; // for loop
UNTIL : 'until'; // while not
DO_WHILE : NEWLINE 'do' ->pushMode(dowhileloop);
COMMENT : ('#' | 'rem' | 'com' | '--' | '//' | ';' | '$') ->pushMode(comment);
MULTILINECOMMENT : ('##' | '#^' | '{-' | ';;' | '(*' | 'bcom')->pushMode(multicomment);

// Literals
LITERAL :
    BOOL_LITERAL
    |
    NUMERIC_LITERAL
    |
    ALPHA_LITERAL
    |
    ALPHANUMERIC_LITERAL
    ;
BOOL_LITERAL : TRUE | FALSE | UNKNOW_BOOL;
TRUE : 'true';
FALSE : 'false';
UNKNOW_BOOL : 'unknown';
NUMERIC_LITERAL : INTLIT | FLOATLIT | COMPLEXLIT;
mode dowhileloop;
WHILE_DO : 'while' ->popMode; // do ... WHILE 
mode whileloop;
    WHILE_DO_BLOCK : 'do'; // DO ... end
    WHILE_END : 'end' ->popMode; // do ... END
mode comment;
END_COM : NEWLINE ->popMode;
mode multicomment;
END_MULTI_COM : '##' | '^#' | '-}' | ';;' | '*)' | 'bcom' ->popMode;
mode do;
END : 'end'; // do ... END