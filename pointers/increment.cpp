#include <iostream>

using namespace std;

// & referencing operator.
// * dereferencing operator (indirection operator).
int main() {
	cout << "How many integers you wish to enter? ";
	int numEntries = 0;
	cin >> numEntries;

	int* ptrToInts = new int [numEntries];

	// Insert numbers.
	for (int i = 0; i < numEntries; i++) {
		cout << "Enter the number " << i + 1 << ": ";
		cin >> *(ptrToInts + i);
	}

	// Show all numbers.
	cout << "Displaying all numbers entered: " << endl;
	for (int i = 0; i < numEntries; i++) {
		cout << *(ptrToInts++) << " ";
	}
	cout << endl;
	
	// Return pointer ro initial position.
	ptrToInts -= numEntries;

	delete[] ptrToInts;

	return 0;
}