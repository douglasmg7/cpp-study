#include <iostream>

using namespace std;

// & referencing operator.
// * dereferencing operator (indirection operator).
int main() {
	// Create a pointer, and point to new alocated memory.
	int* ptrI = new int;
	// Point to memory area of 100 ints (array).
	int* ptrArray = new int[100];

	*ptrI = 123;
	ptrArray[3] = 333;

	cout << "Value of i: " << *ptrI << endl;
	cout << "Value of ptrArray[3]: " << ptrArray[3] << endl;
	cout << "Value of ptrArray[3]: " << *(ptrArray + 3) << endl;

	// Free the memory allocated.
	delete ptrI;
	delete[] ptrArray;

	return 0;
}