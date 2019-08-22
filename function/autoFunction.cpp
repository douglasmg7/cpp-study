#include <iostream>
using namespace std;

// Compiler deduce the return type.
// Function must be defined here, not just declared.
auto DoubleNum(int num) {
	return num * 2;
}

int main() {
	cout << "Doubled num: " << DoubleNum(6) << endl;
}