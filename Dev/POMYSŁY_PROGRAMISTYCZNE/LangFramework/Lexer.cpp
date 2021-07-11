#include<Lexer.hpp>
#include<iostream>
#include<State.hpp>
extern State state;
std::vector<std::vector<std::string>> Lexer::Error(const std::string& str)
{
    std::cerr << "In file: " << state.file_name << ":" state.line << ":" << state.col << ": LexerError: " << str << std::endl;
    return {};
}
std::vector<std::vector<std::string>> Lexer::lex(const std::string& content)
{
    std::string line{};
    std::string token{};
    std::vector<std::string> program{};
    char last_ch{};
    for(auto i = 0; i < content.size(); i++)
    {
        if(isspace(content[i]))
        {
            program.push_back(token);
            token.clear();
            continue;
        }
        if(!isalpha(content[i]) && !rule.not_standalone_tokens.find(content[i]))
        {
            if(program.back() != token && isalnum(last_ch))
            {
                program.push_back(token);
                token.clear();
            }
            token += content[i];
        }
        if(!rule.leading_zeros_in_num && content[i] == '0' && isspace(last_ch) && isdigit(content[i + 1])) return Error("Leading zero detected!");
        if(!rule.ids_can_start_with_digits && isdigit(content[i]) && (isalpha(content[i + 1]) || rule.not_standalone_tokens.find(content[i + 1])))
        {
            if(rule.literals_exist)
            {
                if(!rule.literals_can_be_user_defined)
                {
                    std::string literal{};
                    for(auto j = i; !isspace(j); j++) literal += content[j];
                    if(!rule.suffix_literals.find(literal)) return Error("Unrecognised literal `" + literal + "'!");
                }
            }
            else return Error("Identifiers cannot start with digits!");
        }
        last_ch = i;
    }
}