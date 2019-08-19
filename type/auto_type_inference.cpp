#include <iostream>

using namespace std;

auto v1 = false;
auto v2 = 1;
auto v3 = 5'000'000'000;

int main() {
	cout << "v1: " << v1 << "\tsizeof: " << sizeof(v1) << endl;
	cout << "v2: " << v2 << "\tsizeof: " << sizeof(v2) << endl;
	cout << "v3: " << v3 << "\tsizeof: " << sizeof(v3) << endl;
	return 0;
}