#include<iostream>
#include<string>
#include<vector>

namespace glf
{
    namespace predef
    {
    namespace Lisp
    {
        struct Value
        {
            VAL type;
            long num;
            ERROR err;
            std::string sym;
            unsigned count;
            std::vector<Value> cell;
            static Value& Number(const long& val)
            {
                return {VAL::NUM, val, nullptr, nullptr, nullptr, nullptr};
            }
            static Value& Error(const ERROR& error)
            {
                return {VAL::ERROR, nullptr, error, nullptr, nullptr, nullptr};
            }
            static Symbol(const std::string& s)
            {
                return {VAL::SYMBOL, nullptr, nullptr, s, nullptr, nullptr};
            }
            static SExpr()
            {
                return {VAL::SEXPR, nullptr, nullptr, nullptr, 0, {}};
            }
            Value(const VAL& v, const long& n, const ERROR& e, const std::string& symbol, const unsigned& c, const std::vector<Value>& cell_) : type{v}, num{n}, err{e}, sym{symbol}, count{c}, cell{cell_} {}
            ~Value() = default;
            friend std::ostream& operator <<(std::ostream& out, const Value& val)
            {
                switch(val.type)
                {
                    case VAL::NUM: out << val.num; break;
                    case VAL::ERROR:
                    switch(val.err)
                    {
                        case ERROR::ZERODIV: out << "Error: Division by 0!" << std::endl; break;
                        case ERROR::BADOP: out << "Error: Invalid operator!" << std::endl; break;
                        case ERROR::BADNUM: out << "Error: Invalid number!" << std::endl; break;
                    }
                    break;
                }
                return out;
            }
        };
        enum class VAL
        {
            NUM, ERROR, SYMBOL, SEXPR
        };
        enum class ERROR
        {
            ZERODIV, BADOP, BADNUM
        };
        Value& EvalArithmetic(const Value& v1, const std::string& op, const Value& v2)
        {
            if(v1.type == VAL::ERROR) return const_cast<Value&>(v1);
            if(v2.type == VAL::ERROR) return const_cast<Value&>(v2);
            if(op == "+") return Value::Number(v1.num + v2.num);
            if(op == "-") return Value::Number(v1.num - v2.num);
            if(op == "*") return Value::Number(v1.num * v2.num);
            if(op == "/") return !v2.num ? Value::Error(ERROR::ZERODIV) : Value::Number(v1.num / v2.num);
            return Value::Error(ERROR::BADOP);
        }
        class LispInterpreter
    {}
    }
}