#ifndef GLF_LEXER_HPP_INCLUDED
#define GLF_LEXER_HPP_INCLUDED
#include<string>
#include<vector>
#include<Rule.hpp>

class Lexer
{
    Rule rule;
    std::string file_content;
    std::vector<std::vector<std::string>> lex(const std::string&);
protected:
    std::vector<std::vector<std::string>> Error(const std::string&);
public:
    explicit Lexer(const Rule& rule_) : rule{rule_} {}
    Lexer(const Lexer& other) : rule{other.rule}, file_content{other.file_content} {}
    ~Lexer() = default;
};
#endif