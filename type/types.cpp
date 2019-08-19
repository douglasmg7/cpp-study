#include <iostream>

using namespace std;

// POD (Plain Old Data).
bool t_bool = false;
char t_char = ' ';
short t_short = 0;
int t_int = 0;
long t_long = 0;
long long t_long_long = 0;
float t_float = 70'000.2;
double t_double = 3.141'592'653'59;
// unsigned long long int, for unsigned values.
// int8_t uint8_t, fixed-width integer types, need include <cstdint>.

int main() {
	cout << "*** Size in bytes ***" << endl;
	// cout << "bool: " << sizeof(t_bool) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "char: " << sizeof(char) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	return 0;
}