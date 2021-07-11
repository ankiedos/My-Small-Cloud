// regex int_decl("int [A-Za-z_]+");
// regex age_decl("age [A-Za-z_]+");
// regex var_decl("var [A-Za-z_]+");

struct Summable
{
	int sum;
	Summable(int ini_sum) : sum(ini_sum) {}
	//	template<typename ...T>
	//	auto sum(auto a = 0, T ...pack)
	//	{
	//		if(sizeof...(...pack) == 0) return sum + a;
	//		else return sum + a + ...pack;
	//	}
};
//	concept Summable
//	{
//		requires() { a
//	}
//	struct Eq
//	{
//		auto Equal(auto a, auto b) return ((a - b) == 0);
//	};
#include <iostream>
struct Func1
{
	double a, b;
	static float math_func_arg;
	
	double operator ()(double x) const
	{
        return a * x + b;
	}
};
std::ostream& operator <<(std::ostream& func_args, Func1 f)
{
	return func_args << "Params: [a = " << f.a << ", b = " << f.b << "]\n" << "Arg: [x = " << Func1::math_func_arg << "]\n";
}
//	inline static std::ostream& operator <<(std::ostream& func_form, Func1 f)
//	{
//		return func_form << "f = " << f.a << Func1::math_func_arg << " + " << f.b;
//	}
std::istream& operator >>(std::istream& func, Func1 f)
{
	return func >> f.a >> f.b;
}
int main()
{
	Func1 f{1.0, 2.0};
	double f_3 = f(3);
	std::cout << f_3;
	std::cout << "Wpisz parametry funkcji: ";
	std::cin >> f;
	std::cout << "Miejsce zerowe funkcji: " << (-f.b) / f.a;
	Func1::math_func_arg = 0;
	std::cout << f;
	std::cout << "\n";
	// func_form << f;
	return 0;
}