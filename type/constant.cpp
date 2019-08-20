#include <iostream>

// Constant expression.
// Must be outsite function.
constexpr double GetPi() { return 22.0 / 7; }
// In compile-time each TwicePi() is replaced by 6.28571.
constexpr double TwicePi() { return 2 * GetPi(); }
// If not possible the constexpr is ignored and the function is compiled as regular function, so lost the compile-time optimization.

using namespace std;

int main() {
	// Literal constant.
	cout << "This is a literal constant" << endl;
	// 10 is a literal constant.
	int num = 10;
	// Defining a constants.
	// Octal. 12 = 1*8^1 + 2*8^0 = 1*8 + 2*1 = 8 + 2 = 10
	const int const_num = 012;
	// Binary. 1010 = 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 = 1*8 + 0*4 + 1*2 + 0*1 = 8 + 2 = 10
	const int const_num2 = 0b1010;
	// Pi.
	const double pi = 22.0 / 7;
	// Log.
	cout << "const_num: " << const_num << endl;
	cout << "const_num2: " << const_num2 << endl;
	cout << "pi: " << pi << endl;
	cout << "GetPi(): " << GetPi() << endl; 
	cout << "TwicePi(): " << TwicePi() << endl; 
	return 0;
}