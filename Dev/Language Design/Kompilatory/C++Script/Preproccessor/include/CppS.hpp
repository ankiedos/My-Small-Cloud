#include<iostream>
#include<optional>
#include<stdexcept>
// #define def #define
// #define paste #include
std::runtime_error InterpretedVersionRequired(const std::string& what_should, const std::string& what_dont)
{
    return std::runtime_error(std::string("Use " + what_should + " instead of " + what_dont + "!\n" + what_dont + " is available only in interpreted version of C++Script!\n").c_str());
}
#define until(x) while(!(x))
#define __do {
#define begin {
#define end }
#define then {
#define endif }
#define endfor }
#define unless(x) if(!(x))
#define use using
#define ns namespace
#define ret InterpretedVersionRequired("return", "ret"); return
#define var auto
#define interface class
#define function auto
#define entrypoint int
#define func InterpretedVersionRequired("function", "func"); auto
using procedure = void;
#define proc InterpretedVersionRequired("procedure", "proce"); void
using unit = void;

template<typename T>
using maybe = std::optional<T>;

#define procedure std::runtime_error("Use proc instead of procedure!\n");
#define print std::cout<<
#define scan std::cin>>
#define log std::clog<<
#define err std::cerr<<