// zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>;
using namespace std;

int getDigitsCount(int num) {
	int result = 0;

	do {
		num /= 10;
		result++;
	} while (num > 0);

	return result;
}

int concatenateNums(int num1, int num2) {
	return num1 * pow(10, getDigitsCount(num2)) + num2;
}

int reverseNum(int num) {
	int result = 0;
	int countDigits = getDigitsCount(num);

	for (int i = countDigits - 1; i >= 0; i--)
	{
		int digit = num % 10;
		result += digit * pow(10, i);
		num /= 10;
	}

	return result;
}

int concatenateWithReversed(int num) {
	return concatenateNums(reverseNum(num), num);
}

int main()
{
	int num;
	cin >> num;
	cout << concatenateWithReversed(num);
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
