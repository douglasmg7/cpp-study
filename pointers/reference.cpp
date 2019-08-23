#include <iostream>
using namespace std;

int main() {
	int original = 30;
	cout << "Original: " << original << endl;
	cout << "Original at address: " << &original << endl;

	int& ref1 = original;
	cout << "ref1: " << ref1 << endl;
	cout << "ref1 at address: " << &ref1 << endl;


	int& ref2 = ref1;
	cout << "ref2: " << ref2 << endl;
	cout << "ref2 at address: " << &ref2 << endl;

	return 0;
}