// Zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "Enter the sides of the triangle: ";
	cin >> a >> b >> c;

	bool sideAIsValid = (b + c) > a;
	bool sideBIsValid = (a + c) > b;
	bool sideCIsValid = (a + b) > c;

	if (sideAIsValid && sideBIsValid && sideCIsValid) {
		cout << "The triangle is valid" << endl;
	}
	else {
		cout << "The triangle is invalid" << endl;
	}


}