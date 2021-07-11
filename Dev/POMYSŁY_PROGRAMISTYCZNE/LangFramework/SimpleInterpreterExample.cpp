#include<Interpreter.hpp>
#include<Rule.hpp>
#include<Lexer.cpp>

using vecstr = std::vector<std::string>;
using vecchar = std::vector<char>;
Rule rule{false, false, false, vecstr{}, vecstr{}, false, false, false, true, vecchar{'\\', '`', '$', '#', '@', '?', '~', '%'}, true};
enum class TOKEN
{
    ID, NUM, QUOTE, APOS, COMMENT, DOT
};
class ABCLexer : Lexer
{
    std::vector<std::vector<std::string>> lex(const std::string&)
}

Lexer lexer{rule};
Tokeniser<TOKEN> tokeniser{};
Parser<TOKEN> parser{};
Driver<Interpreter<TOKEN>> drv{argv[1]};
Interpreter<TOKEN> interp{{".abc"}, lexer, tokeniser, parser, drv};