#pragma once

#include<vector>
#include<unordered_map>
#include<map>
#include<string>
#include<charconv>
#include<tuple>
#include<utility>
#include<functional>
#define _GLIBCXX_USE_WCHAR_T
#include<iostream>
#include<fstream>
#include<regex>
#include<numeric>
#include<cmath>
// #include<bits/stdc++.h>
/*
* These are files for C++ Script general purpose programming language designed to be transpiled to C++ or to bytecode (own or LLVM IR) or to be interpreted and based on JavaScript and Python and Ruby and Pascal syntax.
* Files will be divided into different files.
* --------------------------------------------------------------------------------------------------------------------------
* First mind about C++ Script  was 21.01.22021 in Antoni Kiedos' head.
* =====================================================================
* C++ Script 2021 Standard
* 1. Types
* C++ Script later named by CS is staticly-typed programming language with types inferention and newline-terminated lines.
* All types inherit from IObject base class. Types which inherit directly from IObject are: Var, IIO, Container.
* From these types inherit: from Var: INumber, IString, Enum, Struct, Unit, Func, Proc; from IIO: StdIO (Standard IO - console), FIO (File IO) and StrIO (String IO).
* From INumber inherit: Real and Complex, which contains Real instance. From IString: String, StringBuff. From Enum inherit Bool, which, together with Union type are final.
* From type Struct inherit Union and Class from what inherits Interface. Type Unit, which is like C++'s void (only difference is that void type has not any value) or Python's None or Q#'s Unit,
* has only one value called unit. Type Func is for functions and type Proc, which inherits from Func, is for procedures. *IO types are final.
* From Real inherit Int and Float. String types are final. Types Union, Interface and Proc are final. From Int inherit Char and UInt.
* --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
* Diagram:                                                                  |
*           -> Class -i> Interface          --> Bool                        |
*           |                              /i     --> Complex               |
*           /i /---i-> Union        /-i-> Enum   /      ^         /--> UInt |
*        Struct <i----------------\/            /i      |c       /i         |
*               /--i- IObject -i> Var -i> INumber -i> Real -i> Int -i> Char |
*  Container  <-      |i         i/ |i \i               \i                  |
*  |                  v          |  \   ---> IString     \--> Float         |
*  v        StdIO <-- IIO        v   -> Unit    |i \__i                     |
*  Some containers... |i \i      Function   ^   v       \--> StringBuff     |
*                     v   --> FIO       \i  c\  String                      |
*                     StrIO              --> Proc                           |
* ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
* =======================================================================================================================================================================================
* 2. Keywords
* Most keywords are the same as their C++'s synonyms, but there are also changed keywords:
* - paste "iostream" // #include<iostream>
* - use ns std # using namespace std;
* - Func Int -> Char** -> Int Main(argc, argv) do #^ int main(int argc, char** argv) { ^#
* - Var x ; auto x = 0; (When there is Var declaration, then is 0 deduced)
* - until x != 0 -- while(x == 0)
* - unless x =/= 2 then ;; if(!(x neq 2)) { (Of course in CS there are also while and if
* - if x > 0 then x plusassign 2 else if x == 0 then x -= 2 else x++ endif (* full if statement *)
* - while x greater 0 do dec x end com full while loop
* As you can see, there are a lot of comment characters and alphabetic chars for operators. This is unwanted inspiration from VBA -- variables used by parser and transpiler.
* Syntax: meta meta_variable ONEOFPOSSIBLEVALUES
* Example: meta neq_op SLASH -- unequality operator is now '=/='
* Second example: meta multiline_comment DDOLLAR $$ now multi line comment is begun and terminated by 2 $ chars $$
* It is possible to change declared earlier meta variables an to declare it not at beginning, but it is not recommended, because it is in contradition with clean code rules.
* More about keywords is in other sections
* ============================================================================================================================================================================
* 3. Standard Library
* - all of C++'s standard libraries + https://github.com/nlohmann/json (nlohmann/json.hpp) + https://github.com/Dobiasd/FunctionalPlus (fplus/fplus.hpp and its dependicies)
* + https://github.com/kennytm/utils/blob/master/traits.hpp (function traits) + https://github.com/kennytm/utils/blob/master/property.(hpp|cpp) (properties in C++) + https://github.com/ankiedos/extension-cmath/blob/master/ext_cmath.hpp (physical and mathematical extension to cmath, cna be incorporated with library-plus-plus)
* + https://github.com/ankiedos/library-plus-plus (extended C++ standard library)
* and in the future probably more...
* =========================================================================================================================================================================================================================================================================================
* 4. Language
* 4.1. Program Structure
*
* meta comment REM
* meta multiline_comment SLASHASTERISK
* meta neq_op SLASH
* meta logical_ops ALPHA
* paste "iostream" rem for print()
* paste "fplus/fplus.hpp" rem for interact()
* use ns std
* use ns fplus
* Func Real -> Float Square(x) do
*   return x ^ 2 rem CS right associative power operator
* end
* Func Int Main() do rem Main() function args are optional like in C++ (In interpreted CS dialect Main is not required)
*   Int x = 0
*   print("Give a number: ") rem transpiled to cout <<
*   interact(Square, x) rem does cin >>, then input gives to x and x gives to Square and prints result
*   return 0
* end
**/
/** Remark: 86: In later standards there will be print statement instead of print() function and C++ STL will be in cpp::std ns (there will be also extern "C++").
**/
/** Remark 2: 102: cppScript ns will be std ns. Stdlib code can be also in C++, but wrapped with extern "C++" (or CPP do code _here end) and CS code can be used in C++,
* but it must be transformed by transpiler's pragma to keep C++ source or with transpiler's option. CS can also be used in C++ like PHP with extern "C++S".
**/
/** Remark 3: 30, 42, 51, 81, 84: Func in interpreted and Function in transpiled.
**/
/**
* @file c++s/math/generators.hpp
* @author Antoni Kiedos
**/
/// auto f = Fibonacci(5ull, 1, 1).fibs; // f = {1, 1, 2, 3, 5};
namespace cppScript
{
    namespace Math
    {
        namespace Generators
        {
            class Fibonacci
            {
                public:
                    explicit Fibonacci(size_t range, int first, int second)
                    {
                        int tmp;
                        fibs[0] = first; fibs[1] = second;
                        for(auto i = 2; i < range; i++)
                        {
                            tmp = second;
                            second += first;
                            first = second;
                            fibs[i] = second;
                        }
                    }
                    explicit Fibonacci(int max_idx, int first, int second)
                    {
                        int tmp;
                        fibs[0] = first; fibs[1] = second;
                        for(size_t i = 2; i <= max_idx; i++)
                        {
                            tmp = second;
                            second += first;
                            first = second;
                            fibs[i] = second;
                        }
                    }
                    std::vector<int> fibs;
            };

            /// std::cout << fibonacciNum(4).searched_val; // Output: 3
            class fibonacciNum
            {
                public:
                    explicit fibonacciNum(size_t idx)
                    {
                        fibs = Fibonacci(idx, 1, 1).fibs;
                        searched_val = fibs[idx - 1];
                    }
                    static std::vector<int> fibs;
                    int searched_val;
            };
            template<typename T>
            class Generator
            {
                public:
                    T val;
            };

            /// std::cout << Identity(4).val; // Output: 4
            template<typename T>
            class basic_Identity : Generator<T>
            {
                public:
                    basic_Identity(T num) : val(num) {}
            };

            /// std::cout << OddDefault(4).val; // Output: 9
            template<typename T>
            class basic_oddDefault : Generator<T>
            {
                public:
                    explicit basic_oddDefault(T num) : val(2 * num + 1) {}
            };

            /// std::cout << OddMinus(4).val; // Output: 7
            template<typename T>
            class basic_OddMinus : Generator<T>
            {
                public:
                    explicit basic_OddMinus(T num) : val(2 * num - 1) {}
            };

            /// std::cout << Even(3).val; // Output: 6
            template<typename T>
            class basic_Even : Generator<T>
            {
                public:
                    explicit basic_Even(T num) : val(2 * num) {}
            };
        };
    };
};
/**
* @file c++s/math/generators_fwd.hpp
* @author Antoni Kiedos
**/
namespace cppScript
{
    namespace Math
    {
        namespace Generators
        {
            namespace Fwd
            {
                using Identity = basic_Identity<int>;
                using oddDefault = basic_oddDefault<int>;
                using oddMinus = basic_OddMinus<int>;
                using Even = basic_Even<int>;
            }
        };
    };
};
/**
* @file c++s/types/converters.hpp
* @author Antoni Kiedos
**/
namespace cppScript
{
    namespace Types
    {
        namespace Convert
        {
            std::map<char, int> ASCIIConverter =
            {
                {'a', 92}
            };
            /// Example: std::cout << SignToWord[Digits(1234)[0]) + " " + NatToWord[Digits(1234)[1]] + " " + NatToWord[Digits(1234)[2]] + " " + NatToWord[Digits(1234)[3]];
            std::map<unsigned long long, std::string> NatToWord =
            {
                {0, "zero"},
                {1, "one"},
                {2, "two"},
                {3, "three"},
                {4, "four"},
                {5, "five"},
                {6, "six"},
                {7, "seven"},
                {8, "eight"},
                {9, "nine"},
                {10, "ten"},
                {11, "eleven"},
                {12, "twelve"},
                {13, "thirteen"},
                {14, "fourteen"},
                {15, "fifteen"},
                {16, "sixteen"},
                {17, "seventeen"},
                {18, "eighteen"},
                {19, "nineteen"},
                {20, "twenty"},
                {30, "thirty"},
                {40, "fourty"},
                {50, "fifty"},
                {60, "sixty"},
                {70, "seventy"},
                {80, "eighty"},
                {90, "ninety"},
                {100, "hundred"},
                {1000, "thousand"},
                {1000000, "million"},
                {1000000000000, "billion"}
            };
            std::map<char, std::string> SignToWord =
            {
                {'-', "minus"},
                {'+', "plus"}
            };
            std::tuple<char, std::vector<unsigned long long>> Digits(long long number)
            {
                using ::cppScript::Containers::Operators::operator *, ::cppScript::Containers::Operators::operator +, ::std::literals::operator ""s;
                std::vector<char> n;
                for(size_t i = 0; i < std::to_string(number).size(); i++) n.push_back(std::to_string(number)[i]);
                std::vector<unsigned long long> res;
                std::vector<char> partial_res;
                std::string str_partial_res = "";
                char sign = '\0';
                for(size_t i = 0; i < n.size(); i++)
                {
                    if(i == 0) (n[i] == '-') ? (sign = n[i]) : (sign = '+');
                    else
                    {
                        for(size_t j = 0; j < (("0"s * (n.size() - i)) += n[i]).size(); j++) partial_res.push_back((("0"s * (n.size() - i)) += n[i])[j]);
                        for(size_t j = 0; j < partial_res.size(); j++) str_partial_res += partial_res[j];
                        res.push_back(std::stoi(str_partial_res));
                    }
                }
                return std::tuple<char, std::vector<unsigned long long>>{sign, res};
            }
        };
    };
};
/**
* @file c++s/containers/operators.hpp
* @author Antoni Kiedos
**/
/** Remark 4: 288-339: Will be in library-plus-plus classes (behind fo that, operator *(int, char) is not working, so if this will be operator *(int, Char), it will be working).
**/
namespace cppScript
{
    namespace Containers
    {
        namespace Operators
        {
            #ifdef YOU_CAN_CREATE_OPERATOR_IN_CPP
                template<typename T>
                T operator><(T lhs, T rhs)
                {
                    T tmp = lhs;
                    lhs = rhs;
                    rhs = tmp;
                    return std::tuple<T>{lhs, rhs};
                }
            #endif
            std::string operator *(const std::string& str, int times)
            {
                std::string res = "";
                for(size_t i = 0; i < times; i++) res += str;
                return res;
            }
            std::string operator *(const int& times, const std::string& str)
            {
                std::string res = "";
                for(size_t i = 0; i < times; i++) res += str;
                return res;
            }
            std::vector<char> operator *(const char& ch, const int& times)
            {
                std::vector<char> res;
                for(size_t i = 0; i < times; i++) res.push_back(ch);
                return res;
            }
            std::vector<char> operator *(const int& times, const char& ch)
            {
                std::vector<char> res;
                for(size_t i = 0; i < times; i++) res.push_back(ch);
                return res;
            }
            template<typename T>
            std::vector<T> operator +=(std::vector<T>& v, T _new)
            {
                v.push_back(_new);
                return v;
            }
            template<typename T>
            std::vector<T> operator +(T new_, std::vector<T>& v)
            {
                return std::vector<T>(new_, v);
            }
            template<typename T>
            std::vector<T> operator +(std::vector<T>& v, T _new)
            {
                return std::vector<T>(v, _new);
            }
        };
    };
};
/**
* @file c++s/syntax.hpp
* @author Antoni Kiedos
**/
namespace cppScript
{
    namespace Core
    {
        namespace Operators
        {
            template<typename T>
            bool operator !(T arg)
            {
                return (1 - arg) ? true : false;
            }
            template<typename T>
            bool operator ==(T lhs, T rhs)
            {
                return lhs - rhs ? false : true; // Another possible implementation: (1 - (lhs - rhs)) ? true : false;
            }
            template<typename T>
            bool operator !=(T lhs, T rhs)
            {
                return !(lhs == rhs);
            }
            /// Lazy evaluation
            /// @{
            template<typename T>
            bool operator &&(T lhs, T rhs)
            {
                return (lhs == true) ? (rhs == true) : false; // Other possible implementations: ((lhs & rhs) != 0) ? true : false; and (lhs * rhs) ? true : false;
            }
            template<typename T>
            bool operator ||(T lhs, T rhs)
            {
                return (lhs == true) ? true : (rhs == true); // Other possible implementations: ((lhs | rhs) != 0) ? true : false; and ((lhs + rhs) % 2) ? true : false;
            }
            /// @}
            template<typename T>
            bool operator <(T lhs, T rhs)
            {
                return std::to_string(lhs - rhs).at(0) == '-' ? true : false;
            }
            template<typename T>
            bool operator >=(T lhs, T rhs)
            {
                return !(lhs < rhs);
            }
            template<typename T>
            bool operator >(T lhs, T rhs)
            {
                return (lhs >= rhs) && (lhs != rhs) ? true : false;
            }
            template<typename T>
            bool operator <=(T lhs, T rhs)
            {
                return (lhs < rhs) || (lhs == rhs) ? true : false;
            }
        }
        namespace Syntax
        {
            /// Switch statement permitting strings (thank you, Dobiasd for the idea!)
            /// Use (in C++):
            /// Select(to_select,
            /// {
            ///     {"option 1", Call(func1, 1, 2, 3)}, // 1, 2, 3 <- args for func1
            ///     {"option 2", Call(func2, "sasadwewcxe", 239, ERROR)},
            ///     {"option 3", Call(func3, "2e282d", 1, false)},
            /// }, Call(default_option, 1, true));
            /// In CS:
            /// select to_select do
            ///     "option 1" -> func1(1, 2, 3),
            ///     "option 2" -> func2("sasadwewcxe", 239, ERROR),
            ///     "option 3" -> func3("2e28d", 1, false),
            ///     default -> default_option(1, true)
            /// end
            template<typename Key>
            void Select(const Key& key, const std::vector<std::pair<Key, std::function<void()>>>& pairs, const std::function<void()>& Default)
            {
                std::unordered_map<Key, std::function<void()>> dict;

                for(const auto& entry : pairs) dict.insert(entry);

                assert(dict.size() == pairs.size());
                const auto it = dict.find(key);

                if(it != dict.end()) it->second();
                else Default();
            }
            /// Call function; Support for Select() (thank you, Dobiasd for this idea!)
            template<typename Func, typename... Args>
            std::function<void()> Call(Func f, Args ... args)
            {
                return [f, args...]()
                {
                    f(args...);
                };
            }
        };
    };
};
int main(int argc, char** argv)
{
    using cppScript::Containers::Operators::operator*;
    using cppScript::Core::Syntax::Select, cppScript::Core::Syntax::Call;
    std::ifstream CppS(argv[1] + ".cpps");
    std::ofstream Cpp(argv[2] + ".cpp");
    std::map<std::string, std::string> Transpiler =
    {
        {"paste", "#include<"},
        {"use", "using"},
        {"ns", "namespace"},
        {"object", "IObject"},
        {"var", "Var"},
        {"number", "INumber"},
        {"real", "Real"},
        {"complex", "Complex"},
        {"int", "Int"},
        {"float", "Float"},
        {"char", "Char"},
        {"uint", "UInt"},
        {"func", "Func"},
        {"proc", "Proc"},
        {"string", "String"},
        {"stringbuff", "StringBuff"},
        {"IO", "IIO"},
        {"stdIO", "StdIO"},
        {"fIO", "FIO"},
        {"strIO", "StrIO"},
        {"enum", "Enum"},
        {"bool", "Bool"},
        {"struct", "Struct"},
        {"union", "Union"},
        {"class", "Class"},
        {"interface", "Interface"},
        {"unit", "Unit"},
        {"def", "#define"},
        {"pragma", "#pragma"},
        {"select", "Select("}
    };
    unsigned long long aux = 0;
    std::vector<unsigned long long> strs_in_lines;
    std::vector<std::vector<std::string>> program;
    while(CppS.peek() != CppS.eof())
    {
        while(CppS.peek() != ' ' && CppS.peek() != '\n')
        {
            strs_in_lines.push_back(0);
            strs_in_lines[aux]++;
        }
        strs_in_lines[aux]++; // Newline also matter!
        aux++;
    }
    unsigned long long strs_in_program = std::accumulate(strs_in_lines.begin(), strs_in_lines.end(), 0, std::plus<>{});
    while(!CppS.eof())
    {
        for(auto line = 0; line < std::floor(strs_in_program / strs_in_lines.size()); line++)
        {
            auto str = 0;
        for(str = 0; str < strs_in_lines[line] - 1; str++) // strs_in_lines[line] - 1, because if without -1, getline will not stop on line line!
        {
            program.push_back("0");
            CppS.getline(program[line][str], sizeof(std::string), ' ');
        }
        CppS.getline(program[line][str], sizeof(std::string), '\n'); // Upper comment
        #ifndef _NDEBUG
            system("start");
            std::clog
        #endif // _NDEBUG
    }
    /// Linker @{
    std::fstream includes_stdlib("linker/stdlib.txt");
    std::fstream custom_includes("linker/custom.txt");
    std::vector<std::string> libraries;
    for(unsigned short i = 0; i < 100; i++)
    {
        if(!includes_stdlib.eof())
        {
            libraries.push_back(std::to_string(i));
            includes_stdlib >> libraries[i];
        }
    }
    for(unsigned short i = 0; i < 100; i++)
    {
        if(!custom_includes.eof())
        {
            libraries.push_back(std::to_string(i));
            custom_includes >> libraries[i];
        }
    }
    /// @}
    auto x = 0;
    std::cin >> x;
    cppScript::Core::Syntax::Select(x,
    {
            { 0, Call(exit, 0) },
            { 1, Call(main) },
            { 2, Call(Select, x,
                {
                    { -1, [](){ return -1; } },
                    { 0, [](){ return 0; } }
                }, []() { return 10; }
                )
            },
            { 3, Call(std::operator<<, std::cout, "ABCDEFGHIJKLMNOPQRSTUVWXYZ") },
            { 4, Call(std::operator>>, std::cin, x) }
    }, [](){ return 0; });
}
// Preprocessing: in .cpp extern "C++S" {...} \
                  in .cpps CPP do ... end
