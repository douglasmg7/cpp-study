#include <iostream>
using namespace std;

int main() {
	cout << "It is sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	// Declare pointer and initialize.
	bool* const pIsSunny = new bool;
	*pIsSunny = false;

	if (userInput == 'y')
		*pIsSunny = true;

	cout << "Boolean flag sunny says: " << *pIsSunny << endl;

	// Release valid memory.
	delete pIsSunny;

	return 0;
}