#include <iostream>

using namespace std;

// C++11 recommends list initialization techniques that prevent narrowing.
int largeNum = 50'000'000;
// shortNum{ largeNum };	// Uncomment to the error.
// float someFloat{ largeNum }; 	// Uncomment to the error.
float anotherFloat{ 50'000'000 };

int main() {
	// cout << "Avoid narrowing conversion." << endl;
	return 0;
}