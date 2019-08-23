#include <iostream>

using namespace std;

int main() {
	int arrNums[5] {0};
	arrNums[2] = 123;

	// Array variable is a pointer to the first element.
	int* pNums = arrNums;

	// Get the same address.
	cout << "Address: " << arrNums << endl;
	cout << "Address: " << pNums << endl;
	cout << "Address: " << &arrNums[0] << endl << endl;

	// Get same value from the same address.
	cout << "Element 2: " << arrNums[2] << endl;
	cout << "Element 2: " << *(arrNums + 2) << endl;
	cout << "Element 2: " << pNums[2] << endl;
	cout << "Element 2: " << *(pNums + 2) << endl;
}