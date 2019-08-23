#include <iostream>
using namespace std;

int main() {
	// Request a lot of memory!
	// nothrow not throw a exception, but return null.
	int* pointToManyNums = new(nothrow) int [0xffffffff];

	if (pointToManyNums) {
		// Use the allocated memory.
		cout << "Allocated." << endl;
		delete[] pointToManyNums;
	} 
	else
		cout << "Memory allocation failed, null returned. Ending program." << endl;

	return 0;
}