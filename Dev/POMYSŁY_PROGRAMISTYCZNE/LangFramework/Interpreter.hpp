#ifndef GLF_INTERPRETER_INCLUDED
#define GLF_INTERPRETER_INCLUDED
#include<vector>
#include<string>
#include<map>
#include<State.hpp>

namespace glf // Generic Language Framework
{
    namespace types
    {
        struct Value;
        struct Procedure;
        struct Function;
        #ifdef GLF_OOP_ENABLED
        struct Type;
        #endif
    }
}
State state{1, 1};


template<typename Token>
class Tokeniser
{
    std::vector<std::vector<std::string>> parsed_file_content;
    std::vector<std::vector<Token>> tokenise(const std::vector<std::vector<std::string>>&);
protected:
    virtual void Error(...) {};
public:
    explicit Tokeniser() = default;
    ~Tokeniser() = default;
};
class AST;
template<typename Program>
class Driver
{
    std::map<std::string, glf::types::Value> vars;
    std::map<std::string, glf::types::Value> constants;
    std::map<std::string, glf::types::Procedure> procs;
    std::map<std::string, glf::types::Function> funcs;
    #ifdef GLF_OOP_ENABLED
    std::map<std::string, glf::types::Type> types;
    #endif
    AST program;
public:
    Driver(const std::string& file)
    {
        for(auto& ext : Program::file_exts)
        {
            if(file.substr(file.size() - ext.size(), file.size()) == '.' + ext) valid_ext = true;
            else vald_ext = false;
        }
        if(!valid_ext) throw glf::errors::InvalidExtension(Program::file_exts, file);
    }
    ~Driver() = default;
    Driver& RegisterVar(const std::string& name, const glf::types::Value& val) { vars[name] = val; return *this; }
    Driver& RegisterConstant(const std::string& name, const glf::types::Value& val) { constants[name] = val; return *this; }
    Driver& RegisterProc(const std::string& name, const glf::types::Procedure& proc) { procs[name] = proc; return *this; }
    Driver& RegisterFunc(const std::string& name, const glf::types::Function& func) { funcs[name] = func; return *this; }
    #ifdef GLF_OOP_ENABLED
    Driver& RegisterType(const std::string& name, const glf::types::Type& type) { types[name] = type; return *this; }
    #endif
};
template<typename Token>
class Parser
{
    AST parse(const std::vector<std::vector<Token>>&);
public:
    explicit Parser() = default;
    ~Parser() = default;
};
template<typename Token>
class Interpreter
{
    std::vector<std::string> file_exts;
    Lexer* lexer;
    Tokeniser<Token>* tokeniser;
    Parser<Token>* parser;
    glf::runtime::STATUS interpret(const AST&, const std::vector<std::string>& argv);
    Driver<Interpreter>* drv;
    public:
    Interpreter(const std::vector<std::string>& exts, const Lexer& lexer_, const Tokeniser<Token>& tokeniser_, const Parser<Token>& parser_, const Driver<Interpreter>& drv_)
    : file_exts{exts}, lexer{lexer_}, tokeniser{tokeniser_}, parser{parser_}, drv{drv_} {}
    ~Interpreter()
    {
        delete lexer;
        delete tokeniser;
        delete parser;
        delete drv;
    }
};
// std::ifstream file{"file.cpps"};
// Lexer lexer{rule};
// Tokeniser<TOKEN> tokeniser{};
// Parser<TOKEN> parser{};
// Driver drv{"file.cpps"};
// Interpreter<TOKEN> interp{{".cpps", ".hpps"}, lexer, tokeniser, parser, drv};
// std::string content{};
// char ch{};
// while(file >> ch) content += ch;
// auto lexed = lexer.lex(content);
// auto tokenised = tokeniser.tokenise(lexed);
// auto parsed = parser.parse(tokenised);
// drv.SetAST(parsed);
// interp.interpret(argv);
#endif