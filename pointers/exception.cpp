#include <iostream>
using namespace std;

int main() {
	try {
		// Request a lot of memory!
		int* pointToManyNums = new int [0xffffffff];
		// Use the allocated memory.
		cout << "Allocated." << endl;

		delete[] pointToManyNums;
	}
	catch (bad_alloc) {
		cout << "Memory allocation failed. Ending program." << endl;
	}
	return 0;
}