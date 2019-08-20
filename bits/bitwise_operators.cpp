#include <iostream>
#include <bitset>
using namespace std;

int main() {
	cout << "Enter a number (0 - 255): ";
	unsigned short inputNum = 0;
	cin >> inputNum;

	bitset<8> inputBits (inputNum);
	cout << inputNum << " in binary is " << inputBits << endl;

	bitset<8> bitwiseNOT (~inputBits);
	cout << "Logical NOT: ~" << endl;
	cout << "~" << inputBits << " = " << bitwiseNOT << endl;

	cout << "Logical AND: & with 00001111" << endl;
	bitset<8> bitwiseAND = (0x0F & inputNum);
	cout << "00001111 & " << inputBits << " = " << bitwiseAND << endl;

	cout << "Logical OR: | with 00001111" << endl;
	bitset<8> bitwiseOR (0x0F | inputNum);
	cout << "00001111 | " << inputBits << " = " << bitwiseOR << endl;

	cout << "Logical "
		

	return 0;

}
