#include <iostream>

using namespace std;

// & referencing operator.
// * dereferencing operator (indirection operator).
int main() {
	int i = 3;
	cout << "Address of i: " << &i << endl;

	int* ptrI = &i;
	cout << "Address of i: " << ptrI << endl;
	cout << "Value of i: " << *ptrI << endl;
	return 0;
}