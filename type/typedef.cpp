#include <iostream>

using namespace std;

typedef long long big_num;

int main() {
	// The compiler substitues big_num to long long.
	big_num num = 10'000'000;
	cout << "num: " << num << endl;
	return 0;
}