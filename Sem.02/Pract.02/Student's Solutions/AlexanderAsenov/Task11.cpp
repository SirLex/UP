// Zad11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter 3 digits: ";
	cin >> a >> b >> c;

	if (a > b) {
		int swap = a;
		a = b;
		b = swap;
	}

	if (b > c) {
		int swap = b;
		b = c;
		c = swap;
	}

	if (a > b) {
		int swap = a;
		a = b;
		b = swap;
	}

	cout << c << b << a << endl;
}