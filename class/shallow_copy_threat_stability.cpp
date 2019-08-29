#include <iostream>
#include <string.h>
using namespace std;

class MyString {
	private:
		char* buffer;

	public:
		MyString(const char* initString) {
			if (initString) {
				buffer = new char [strlen(initString + 1)];
				strcpy(buffer, initString);
			} 
			else
				buffer = NULL;
		}

		~MyString() {
			cout << "Invoking destructor, clearing up." << endl;
			if (buffer != NULL)
				delete [] buffer;
		}

		int GetLength() {
			return strlen(buffer);
		}

		const char* GetString() {
			return buffer;
		}
};

// Shallow copy param str (binary copy).
// buffer from the copy of  MyString point to the same memory location as the orginal.
void UseMyString(MyString str) {
	cout << "String buffer in MyString is: " << str.GetLength() << " characters long" << endl;
	cout << "Buffer contains: " << str.GetString() << endl;
	return;
	// str desctructor will be called, and the region memory that buffer points to will be released. So original object will have a invalid buffer.
}

int main() {
	MyString sayHello("Hello from String Class!");
	UseMyString(sayHello);

	return 0;
	// Error MyString destructor can not delete buffer, because it alredy have been deleted.
}