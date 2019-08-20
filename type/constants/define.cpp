#include <iostream>
using namespace std;

// Defining constants using preprocessor via #define is deprected and should not be used.
// It os a preprocessor command, a text replacement, the compile don't know about this.
#define pi 3.14286

 int main() {
	 cout << "Pi: " << pi << endl;
	 return 0;
 }