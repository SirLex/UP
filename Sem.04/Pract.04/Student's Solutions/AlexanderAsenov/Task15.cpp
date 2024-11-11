// zad15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int pow(int base, unsigned int power) {
	int result = 1;

	for (int i = 1; i <= power; i++)
	{
		result *= base;
	}

	return result;
}

int main()
{
	int base;
	unsigned int power;

	cin >> base >> power;

	while (power <= 0) { // power == 0
		cout << "Power must be bigger than 0. Enter it again ";
		cin >> power;
	}


	cout << pow(base, power) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
