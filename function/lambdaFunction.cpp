#include <iostream>
// stl algoritm for_each.
#include <algorithm>
#include <vector>
using namespace std;

// The syntax of a lambda function is [optional parameters](parameter list){statements}.
void DisplayNums(vector<int>& dynArray) {
	for_each (dynArray.begin(), dynArray.end(), [](int Element) {cout << Element << " ";});
	cout << endl;
}

int main() {
	vector<int> myNums;
	myNums.push_back(501);
	myNums.push_back(-1);
	myNums.push_back(25);
	myNums.push_back(-35);
	
	DisplayNums(myNums);

	cout << "Sorting them in descending order" << endl;

	sort (myNums.begin(), myNums.end(), [](int num1, int num2) {return (num2 > num1);});

	DisplayNums(myNums);

	return 0;
}