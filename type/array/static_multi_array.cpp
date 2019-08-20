#include <iostream>

using namespace std;

int main() {
	// Define a multidimensional array of ints.
	// int nums[2][3] = {{0, 1, 2}, {3, 4, 5}};
	int nums[2][3] = {0, 1, 2, 3, 4, 5};


	cout << "sizeof(nums): " << sizeof(nums) << endl;
	cout << "sizeof(*nums): " << sizeof(*nums) << endl;

	return 0;
}