#include <iostream>
using namespace std;

const double PI = 3.1416;

void Area(double radius, double& res) {
	res = PI * radius * radius;
}

int main() {
	double area = 0;
	Area(2, area);
	cout << "area: " << area << endl;

	return 0;
}