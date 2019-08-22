#include <iostream>

using namespace std;

int main() {
	int arrNums[5] {0};
	// Array variable is a pointer to the first element.
	int* pNums = arrNums;
	cout << "Address: " << arrNums << endl;
	cout << "Address: " << pNums << endl;
	cout << "Address: " << &arrNums[0] << endl;
}