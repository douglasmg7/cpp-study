#include <iostream>
#include <vector>

using namespace std;

int main() {

	// Dynamic array of int (std::vector).
	vector<int> dynArray(3);

	dynArray[0] = 356;
	dynArray[1] = -234;
	// dynArray[2] = 111;

	cout << "Number of integers in array: " << dynArray.size() << endl; 

	cout << "Enter another element to insert: ";
	int newValue = 0;
	cin >> newValue;
	dynArray.push_back(newValue);

	cout << "Number of integers in array: " << dynArray.size() << endl; 
	cout << "Last element in array: " << dynArray[dynArray.size() - 1] << endl;

	return 0;
}
