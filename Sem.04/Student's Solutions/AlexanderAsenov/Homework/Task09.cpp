// zad9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int getDigitsCount(int num) {
	int result = 0;

	do {
		num /= 10;
		result++;
	} while (num > 0);

	return result;
}

int getDigitAtIndex(int num, int index) {
	int numDigitsCount = getDigitsCount(num);
	int powerOf10 = (int)pow(10, numDigitsCount - index - 1);
	return ((num - num % powerOf10) / powerOf10) % 10;
}

int swapDigitsAtIndexes(int num, int index1, int index2) {
	int numDigitsCount = getDigitsCount(num);
	int digit1 = getDigitAtIndex(num, index1);
	int digit2 = getDigitAtIndex(num, index2);

	num -= digit1 * pow(10, numDigitsCount - index1 - 1);
	num -= digit2 * pow(10, numDigitsCount - index2 - 1);


	num += digit2 * pow(10, numDigitsCount - index1 - 1);
	num += digit1 * pow(10, numDigitsCount - index2 - 1);

	return num;
}


int sortNum(int num) {
	int digitsCount = getDigitsCount(num);
	for (int i = digitsCount - 1; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			int firstDigit = getDigitAtIndex(num, j);
			int nextDigit = getDigitAtIndex(num, j + 1);

			if (firstDigit > nextDigit) {
				num = swapDigitsAtIndexes(num, j, j + 1);
			}
		}
	}

	return num;
}

int main()
{
	int num;
	cin >> num;
	cout << sortNum(num);
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
