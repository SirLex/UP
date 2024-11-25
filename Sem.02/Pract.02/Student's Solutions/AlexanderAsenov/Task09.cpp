// Zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3;
	cout << "Enter three numbers: ";
	cin >> num1 >> num2 >> num3;

	if (num1 > num2) {
		int swap = num1;
		num1 = num2;
		num2 = swap;
	}

	if (num2 > num3) {
		int swap = num2;
		num2 = num3;
		num3 = swap;
	}

	if (num1 > num2) {
		int swap = num1;
		num1 = num2;
		num2 = swap;
	}

	cout << "Sorted: " << num1 << " " << num2 << " " << num3 << endl;
}