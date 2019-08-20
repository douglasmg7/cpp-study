#include <iostream>
#include <cstring>

using namespace std;

int main() {

	// Such C-style strings are a sepcial case of character arrays in that last character always precedes the null-terminator '\0'.
	char hello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	cout << hello << endl;
	cout << "Array size: " << sizeof(hello) << endl;
	cout << "String length: " << strlen(hello) << endl;

	cout << "Replace space with null" << endl;
	hello[5] = '\0';
	cout << hello << endl;
	cout << "Array size: " << sizeof(hello) << endl;
	cout << "String length: " << strlen(hello) << endl;

	return 0;

}