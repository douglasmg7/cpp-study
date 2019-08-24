#include <iostream>
#include <string>
using namespace std;

class Human {
	private:
		int age = 0;

	public:
		string name;

		// Constructor inside.
		Human() {
			cout << "A new Human was created!" << endl;
		}

		// Constructor need be declared to be defined outside.
		Human(int age);

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

// Constructor defined outside.
Human::Human(int age) {
	this->SetAge(age);
	cout << "A new Human was created with age of " << this->GetAge() << "!" << endl;
}

int main() {
	Human firstMan(99);
	firstMan.name = "Adam";
	// firstMan.SetAge(35);

	Human firstWoman;
	firstWoman.name = "Eve";
	firstWoman.SetAge(28);

	firstMan.IntroduceSelf();
	cout << "Age of first man: " << firstMan.GetAge() << endl;
	firstWoman.IntroduceSelf();
	cout << "Age of first woman: " << firstWoman.GetAge() << endl;

	return 0;
}