#include <iostream>
#include <string>
using namespace std;

int main() {
	int someNums[] = { 1, 54, -676, 345 };

	for (const int& aNum : someNums)
		cout << aNum << ' ';
	cout << endl;

	for (auto anElement : { 3, 5, 6, 7, 8 })
		cout << anElement << ' ';
	cout << endl;

	string sayHello{"Hello World!"};
	for (auto anElement : sayHello)
		cout << anElement << ' ';
	cout << endl;

	return 0;
}