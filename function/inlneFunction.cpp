#include <iostream>
using namespace std;

// Inline function, will be expanded inline where called and not translated to a CALL instruction.
// Best use for small functions, so justify avoid CALL instruction overhead.
inline long DoubleNum(int num) {
	return num * 2;
}

int main() {
	cout << "Doubled num: " << DoubleNum(6) << endl;
}