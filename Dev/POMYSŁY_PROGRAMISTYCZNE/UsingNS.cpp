#include<iostream> // std::cout, std::operator <<()
#include<string> // std::literals::operator "" s(), std::to_string()
#include<type_traits> // std::is_arithmetic_v<T>
using std::literals::operator ""s;

namespace Hyphens
{
	template<typename T> requires std::is_arithmetic_v<T>
	std::string operator *(T times, std::string str)
	{
		while(times != 0)
		{
			str += str;
			times--;
		}
		return str;
	}
	void PrintSeparator(unsigned short times) { std::cout << (times * "-"s) << "\n"s; }
}
namespace Asterisks
{
	template<typename T> requires std::is_arithmetic_v<T>
	std::string operator *(T times, std::string str)
	{
		while(times != 0)
		{
			str += str;
			times--;
		}
		return str;
	}
	void PrintSeparator(unsigned short times) { std::cout << (times * "*"s) << "\n"s; }
}
template<typename T>
std::string to_string(T val) { return val + ""s; } // Istnieje już std::to_string() (w <string>)
int main()
{
	// using PrintSepHyphens() = Hyphens::PrintSeparator();
	// using Hyphens::PrintSeparator();
	Hyphens::PrintSeparator(10);
	std::cout << "\n"s;
	Asterisks::PrintSeparator(10);
}