#include <iostream>

using namespace std;

int main() {
	// Define an array of ints, initialized with 0.
	// int nums[5] = {343, 5};

	// Array of two elements.
	int nums[] = {343, 5};

	// Set all values to 0;
	// int nums[5] = {};

	// Junk values.
	// int nums[5];

	// Number of array items.
	int length = sizeof(nums) / sizeof(*nums);

	cout << "sizeof(nums): " << sizeof(nums) << endl;
	cout << "sizeof(*nums): " << sizeof(*nums) << endl;

	for (int i=0; i < length; i++) {
		cout << "num[" << i << "]: " << nums[i] << endl;
	}

	return 0;
}