// #include<memory>

// class Register
// {
// public:
// 	unsigned bits : 8;
// 	unsigned val;
// 	Register() = default;
// 	~Register() = default;
// };
// class RegisterX : Register
// {
// public:
// 	std::unique_ptr<Register> r1;
// 	std::unique_ptr<Register> r2;
// 	RegisterX() = default;
// 	~RegisterX() = default;
// };
// class RegisterE : RegisterX
// {
// public:
// 	std::unique_ptr<RegisterX> r;
// 	RegisterE() = default;
// 	~RegisterE() = default;
// };
// Register AH, AL, BH, BL, CH, CL, DH, DL;
// RegisterX AX, BX, CX, DX;
// AX.r1 = AH, AX.r2 = AL;
// BX.r1 = BH, BX.r2 = BL;
// CX.r1 = CH, CX.r2 = CL;
// DX.r1 = DH, DX.r2 = DL;
// RegisterE EAX, EBX, ECX, EDX;
// EAX
#include<functional>
#include<stack>
std::stack<unsigned char> stack_uc;
std::stack<unsigned short> stack_us;
std::stack<unsigned> stack_u;
std::stack<unsigned long> stack_ul;
unsigned char AH, AL, BH, BL, CH, CL, DH, DL;
unsigned char BP, SP = stack_uc.top();
unsigned char DI;
unsigned short AX, BX, CX, DX;
unsigned EAX, EBX, ECX, EDX;
unsigned EBP, ESP = stack_u.top();
unsigned EDI;
unsigned long RAX, RBX, RCX, RDX;
unsigned long RBP, RSP = stack_ul.top();
unsigned long RDI;
template<typename T, typename U>
T mov(T& r1, U& r2)
{
	r1 = r2;
	return r1;
}
template<typename T>
T add(T& r1, T& r2)
{
	r1 += r2;
	return r1;
}
template<typename T>
T sub(T& r1, T& r2)
{
	r1 -= r2;
	return r1;
}
template<typename T>
T mul(T& r1, T& r2)
{
	r1 *= r2;
	return r1;
}
template<typename T>
T div(T& r1, T& r2)
{
	r1 /= r2;
	return r1;
}
template<typename T>
T xor_(T& r1, T& r2)
{
	r1 ^= r2;
	return r1;
}
template<typename T>
T and_(T& r1, T& r2)
{
	r1 &= r2;
	return r1;
}
template<typename T>
T test(T& r1, T& r2)
{
	return r1 & r2;
}
template<typename T>
T or_(T& r1, T& r2)
{
	r1 |= r2;
	return r1;
}
template<typename T>
T neg(T& r)
{
	r = -r;
	return r;
}
template<typename T>
T not_(T& r)
{
	r = ~r;
	return r;
}
template<typename T>
T inc(T& r) { return ++r; }
template<typename T>
T dec(T& r) { return --r; }
template<typename T>
T call(std::function<T> func) { return [](){ func(); }; }
template<typename T>
void push(T& r)
{
	stack.push(r);
	xor_(r, r);
}
template<typename T>
void pop(T& r)
{
	mov(r, stack.top());
	stack.pop();
}
unsigned ret() { return EAX; }
// ret, push, pop