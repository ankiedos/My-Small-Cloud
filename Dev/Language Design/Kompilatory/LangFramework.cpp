/**
* A good language should have:
* - Parser
* - Lexer
* - Tokenizer
* - Optimizer
* - Compiler
* - Transpiler
* - Interpreter
* - REPL
* - VM
* - LLVM front-end
* - Debugger
* - IDE
* - Syntax Highlighting
* - Semantic Highlighting
* - LSP Client
* - Preproccessor
**/
Token Tokenize(std::string tok)
{
    switch(tok)
    {
#ifdef EXPORT_MATHOPS
    case "+":
        return Token::T_PLUS; break;
    case "-":
        return Token::T_MINUS; break;
    case "*":
        return Token::T_MULT; break;
    case "/":
        return Token::T_DIV; break;
# ifdef EXPORT_POWEROP
    case "^":
        return Token::T_POW; break;
# endif
#endif
#ifdef EXPORT_LOGOPS
    case "||":
        return Token::T_LOGOROP; break;
    case "&&":
        return Token::T_LOGANDOP; break;
    case "!":
        return Token::T_LOGNOTOP; break;
# ifdef EXPORT_IMPLICATION
    case "=>":
        return Token::T_LOGIMPLOP; break;
# endif
# if defined(EXPORT_CONDOP) && defined(EXPORT_COMPAREOPS)
    case "?":
        if(Tokenize(Lexer::GetNextToken(1)) == Token::T_ID)
        {
            for(auto& i : Tokens::COMPAREOPS)
            {
                if(Tokenize(Lexer::GetNextToken(2)) == i)
                {
                    if(Tokenize(Lexer::GetNextToken(3) == Token::T_ID)
                        if(Tokenize(Lexer::GetNextToken(4) == Token::T_COLON) COLONMODE = CONDITIONAL; return Token::T_CONDOP; break;
                }
            }
            if(Tokenize(Lexer::GetNextToken(2)) == Token::T_COLON) COLONMODE &= ~CONDITIONAL; return Token::T_CONDOP; break;
            break;
        e
#endif

#ifdef EXPORT_BINOPS
    case "|":
        return Token::T_BITOROP; break;
    case "&":
        return Token::T_BITANDOP; break;
    case "~":
        return Token::T_BITNOTOP; break;
    case "\\":
        return Token::BITXOROP; break;
#endif