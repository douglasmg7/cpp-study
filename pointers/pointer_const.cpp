#include <iostream>

using namespace std;

int main() {
	int daysInMonth = 30;

/**** The address contained in the pointer is constant and cannot be changed ****/
	// Point const.
	int* const pDaysInMonth = &daysInMonth; 
	// Ok, data pointed to can be changed.
	*pDaysInMonth = 31;

	int daysInLunarMonth = 28;
	// Not ok, cannot change addres.
	// pDaysInMonth = &daysInLunarMonth;


/**** Data pointed is constant and connot be changed ****/
	int hoursInDay = 24;
	const int* pToInt = &hoursInDay;

	int monthsInYear = 12;
	// Ok, address can be changed.
	pToInt = &monthsInYear;
	// Not ok, cannot change data being pointed to.
	// *pToInt = 13;
	// Not ok, cannot assign const to non-const.
	// int* newPointer = pToInt;


/**** Both the address contained in the pointer and the value being pointed to are constant and cannot be changed ****/
	const int* const pHoursInDay = &hoursInDay; 
	// Not ok, cannot change data being pointed to.
	// *pHoursInDay = 25;
	// Not ok, cannot change the address.
	// pHoursInDay = &hoursInDay;
}