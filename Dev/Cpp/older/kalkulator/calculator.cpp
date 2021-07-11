#include<string>
#include<iostream>
#include<vector>
#include<numeric>
#include<exception>
#include<cstdlib>
// template<typename T>
// int Calc(char** str)
// {
//     for(size_t i = 1; i < str.size(); i++)
//     {
//         if(str[i] == "add")
//         {
//             return (Calc(str[i + 1]) + Calc(str[i + 2]));
//         }
//         else if(str[i] == "sub")
//         {
//             return (Calc(str[i + 1]) - Calc(str[i + 2]));
//         }
//         else if(str[i] == "mult")
//         {
//             return (Calc(str[i + 1]) * Calc(str[i + 2]));
//         }
//         else if(str[i] == "div")
//         {
//             return (Calc(str[i + 1]) / Calc(str[i + 2]));
//         }
//     }
// }
typedef unsigned short _;
typedef int num;
typedef std::vector<num> nums;
typedef unsigned nat;

nat n_fact = 0;
unsigned long long ret_fact = 1;
_ numof = 0;
nums adds;
nums subs;
unsigned long long factorial();
int add();
int sub();
void mult();
void div();
void pow();
void root();

int main(int argc, char** argv)
{
    
    
    if(argv[1] == "factorial") factorial();    
    else if(argv[1] == "add") add();
    else if(argv[1] == "sub") sub();
    else if(argv[1] == "mult") mult();
    else if(argv[1] == "div") div();
    else if(argv[1] == "pow") pow();
    else if(argv[1] == "root") root();
    else if(argv[1] == "triangle") goto trygonometric;
    else if(argv[1] == "geo") goto geometry;
    else if(argv[1] == "func") goto functions;
    else if(argv[1] == "bin") goto binary_op;
    else
    {
        throw("Exception: Not implemented");
        return 0;
    }
    trygonometric:
        return 0;

    geometry:
        return 0;
    binary_op:
        return 0;
    functions:
        return 0;
    
    /*num result = 0;
    num ret = Calc(argv);
    std::cout << "Result is: ";
    std::cout << ret;*/
    return 0;
}
unsigned long long factorial()
{
    std::cout << "Give n: ";
    std::cin >> n_fact;
    if(n_fact == 0) std::cout << "\nThe result of " << n_fact << "! is: " << 1;
    for(num i = 1; i <= n_fact; i++)
    {
        ret_fact *= i;
    }
    std::cout << "\nThe result of " << n_fact << "! is: " << ret_fact << "\n";
    return ret_fact;
}
num add()
{
    std::cout << "Tell me how much numbers you want to add: ";
    std::cin >> numof;
    for(_ i = 1; i <= numof; i++)
    {
        std::cout << "Give me " << i << " nummber: ";
        adds.emplace_back(0);
        std::cin >> adds[i];
    }
    std::cout << "\nThe result of ";
    for(_ i = 0; i < numof; i++)
        std::cout << adds[i] << " + ";
    std::cout << " is: " << std::accumulate(adds.begin(), adds.end(), 0) << "\n";
    system("pause");
    return std::accumulate(adds.begin(), adds.end(), 0);
}
num sub()
{
    std::cout << "Tell me how much numbers you want to substract: ";
    std::cin >> numof;
    for(_ i = 0; i < numof; i++)
    {
        std::cout << "Give me " << i << " number: ";
        subs.emplace_back(0);
        std::cin >> subs[i];
    }
    std::cout << "\nThe result of ";
    for(_ i = 0; i < numof; i++)
        std::cout << subs[i] << " - ";
    std::cout << " is: " << std::accumulate(subs.begin(), subs.end(), 0, std::minus<num>{});
    system("pause");
    return std::accumulate(subs.begin(), subs.end(), 0, std::minus<num>{});
}
void mult() // return-type: num
{
    throw("Exception: Not implemented");
    system("pause");
}

void div() // return-type: long double
{
    throw("Exception: Not implemented!");
    system("pause");
}

void pow() // return-type: long long
{
    throw("Exception: Not implemented!");
    system("pause");
}

void root() // return-type: std::pair<unsigned long long, long long>
{
    throw("Exception: Not implemented!");
    system("pause");
}