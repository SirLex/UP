// zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int Pow(int a, int b) {
	if (b == 0) {
		return 1;
	}

	return a * Pow(a, b - 1);
}

int ReverseNum(int num) {
	int numDigitsCount = 0;

	int numCopy = num;
	while (numCopy > 0) {
		numCopy /= 10;
		numDigitsCount++;
	}

	int numReversed = 0;
	for (int i = numDigitsCount - 1; i >= 0; i--)
	{
		int digit = num % 10;
		numReversed += digit * Pow(10, i);
		num /= 10;
	}

	return numReversed;
}

int main()
{
	int n;
	cin >> n;

	if (n == ReverseNum(n)) {
		cout << "true";
	}
	else {
		cout << "false";
	}
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