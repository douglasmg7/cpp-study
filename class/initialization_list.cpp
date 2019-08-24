#include <iostream>
#include <string>
using namespace std;

class Human {
	private:
		int age = 0;

	public:
		string name;

		// Default constructor(no params, optional) and initialization list.
		Human(string humanName="Adam", int humanAge = 18) 
			:name(humanName), age(humanAge)
		{
			cout << "A new Human was created!" << endl;
		}

		void SetAge(const int& age) {
			if (age > 0) {
				this->age = age;
			}
		}

		int GetAge() {
			if (this->age > 30)
				return (this->age - 2);
			return this->age;
		}

		void IntroduceSelf() {
			cout << "I am " + name << endl;
		}
};

int main() {
	Human firstMan;

	Human firstWoman("Eve", 23);

	firstMan.IntroduceSelf();
	cout << "Age of first man: " << firstMan.GetAge() << endl;
	firstWoman.IntroduceSelf();
	cout << "Age of first woman: " << firstWoman.GetAge() << endl;

	return 0;
}