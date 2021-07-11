# 6 "tests\\..\\include\\CppS.hpp"
std::runtime_error InterpretedVersionRequired(const std::string& what_should, const std::string& what_dont)
{
    return std::runtime_error(std::string("Use " + what_should + " instead of " + what_dont + "!\n" + what_dont + " is available only in interpreted version of C++Script!\n").c_str());
}
# 26 "tests\\..\\include\\CppS.hpp"
using procedure = void;

using unit = void;

template<typename T>
using maybe = std::optional<T>;
# 3 "tests\\test.cpp" 2

auto sum(auto a, auto b) {
    return a + b;
}
int main() {
    std::cout<< "Hello World from simple preproccessed C++ Script!\n";
    std::clog<< "Sum(2, 1): ";
    std::clog<< sum(2, 1);
    std::clog<< "\n";
    return 0;
}