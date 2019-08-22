#include <iostream>
using namespace std;

const int SIZE = 4;
void DisplayArray(int[], int);
void ChangeAndDisplayArray(int[], int);

int main() {
	int nums[] { 2, 4, 6, 8 };

	cout << "*** Original array ***" << endl;
	DisplayArray(nums, SIZE);

	cout << endl << "*** Modified array ***" << endl;
	ChangeAndDisplayArray(nums, SIZE);

	cout << endl << "*** Original array ***" << endl;
	DisplayArray(nums, SIZE);
	cout << endl;

	return 0;
}

void DisplayArray(int items[], int length) {
	for (int i = 0; i < length; i++) {
		cout << items[i] << " - ";
	}
}

void ChangeAndDisplayArray(int items[], int length) {
	items[0] = 1234;
	for (int i = 0; i < length; i++) {
		cout << items[i] << " - ";
	}
}