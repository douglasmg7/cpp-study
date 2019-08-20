#include <iostream>
using namespace std;

enum CardinalDirections {
	North = 25,
	South,
	East = 35,
	West
};

enum AS {
	No = 35,
	// North, // Error, conflit with previous declaration.
};

int main() {
	cout << "Displaying directions and their symbolic values\n"; 
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

	CardinalDirections windDirection = South;
	cout << "Wind direction: " << windDirection << endl;
}