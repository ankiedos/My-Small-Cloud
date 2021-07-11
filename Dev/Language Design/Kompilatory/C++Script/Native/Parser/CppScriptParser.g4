parser grammar CppScriptParser;
options
{
    tokenVocab=CppScriptLexer;
}
instructions : instruction*;
condition : (condition | BOOL_LITERAL) WS BOOL_OP WS (condition | BOOL_LITERAL);
if : IF WS THEN WS NEWLINE WS instructions WS (ELSE WS (IF)?)? WS NEWLINE WS ENDIF WS NEWLINE WS;
loop : for | while | dowhile | until;
for :       FOR         WS decl WS SEMI WS condition WS SEMI stat WS DO_BLOCK NEWLINE WS    instructions WS NEWLINE WS END                  WS NEWLINE WS;
while :     WHILE       WS condition WS WHILE_DO_BLOCK NEWLINE WS                           instructions WS NEWLINE WS WHILE_END            WS NEWLINE WS;
dowhile :   DO_WHILE    WS NEWLINE WS                                                       instructions WS NEWLINE WS WHILE_DO condition   WS NEWLINE WS;
until :     UNTIL       WS condition WS WHILE_DO_BLOCK NEWLINE WS                           instructions WS NEWLINE WS WHILE_END            WS NEWLINE WS;