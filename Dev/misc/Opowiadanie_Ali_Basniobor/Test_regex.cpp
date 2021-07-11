#include <iostream>
using namespace std;
// ostream, istream
#define STDIS_ERR 1						// istream
#define STDOS_ERR 10						// ostream
// ifstream, ofstream
#define FIS_ERR 1						// ifstream
#define FOS_ERR 100						// ofstream
// istringstream, ostringstream
#define SIS_ERR 1						// istringstream
#define SOS_ERR 1000						// ostringstream
// x-oriented io
#define STDIOS_ERR (STDIS_ERR | STDOS_ERR)			// iostream						// 11
#define FIOS_ERR (FIS_ERR | FOS_ERR)				// fstream						// 101
#define SIOS_ERR (SIS_ERR | SOS_ERR)				// stringstream						// 1001

// i
#define IS_ERR (~((STDIS_ERR | FIS_ERR | SIS_ERR) & 110))	// i							// 1111
// o
#define OS_ERR (~((STDOS_ERR | FOS_ERR | SOS_ERR) &  110))	// o							// 0110
// io
#define IOS_ERR (~(IS_ERR | OS_ERR))				// ~(STDIOS_ERR | FIOS_ERR | SIOS_ERR) też może być	// 0000
enum ERROR { STDI, STDO, STDIO, FI, FO, FIO, SI, SO, SIO, I, O, IO, CORR };
ERROR error = CORR;
// std::string exception = (error == CORR) ? "" : ((error == STDIO) ?
// 	"ERROR STDIO: Something went wrong..." : (
// 	(error == FIO) ?
// 		"ERROR FILE I/O: Something went wrong..." : (
// 		(error == SIO) ?
// 			"ERROR STRING I/O: Something went wrong..." : (
// 			(error == I) ?
// 				"INPUT ERROR: Something went wrong..." : (
// 				(error == O) ?
// 					"OUTPUT ERROR: Somtehing went wrong..." : (
// 					(error == IO) ?
// 						"I/O ERROR: Something went wrong..." : "META-ERROR: Exception unknow"))))));
// namespace std
// {
//     // template<typename T>
//     // struct Stack : private std::vector<T>
//     // {
//     //     using Stack::emplace_back;
//     //     T* insert(std::vector<T>::const_iterator index, std::initializer_list<T> ini_list)
//     //     {
//     //         return Stos.insert(index, ini_list)
//     //     }
//     //     Stack()
//     //     {
//     //         vector<T>();
//     //     }
//     //     ~Stack()
//     //     {
//     //         ~vector<T>();
//     //     }
//     //     std::vector<Stack> Stos;
//     //     T* begin()
//     //     {
//     //         return Stos[0];
//     //     }
//     // };
// }
template <typename T>
struct defer {
private:
    T cleanup_;
public:
    explicit defer(T cleanup) : cleanup_(move(cleanup)) { }
    ~defer() {
        cleanup_();
    }
};
 
template <typename T>
defer(T) -> defer<T>;
 
int main()
{
    unsigned flag;
    if(error = STDO)
        flag |= STDOS_ERR;
    else if(error = STDI)
        flag |= STDIS_ERR;
    else if(error == STDIO)
        flag |= STDIOS_ERR;
    else if(error == IO)
        flag |= IOS_ERR;
    else if(error == CORR)
        flag &= ~IOS_ERR;
    auto resource = new int[123];
    cout.operator<<(flag);
    defer _([&]{ delete[] resource; cout << "cleaned up\n"; });
    return 0;
}