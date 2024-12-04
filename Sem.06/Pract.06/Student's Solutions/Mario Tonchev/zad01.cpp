#include <iostream>
using namespace std;

void ReverseNumber(int& number) {
	int reversedNumber = 0;

	while (number > 0)
	{
		int digit = number % 10;

		reversedNumber *= 10;
		reversedNumber += digit;

		number /= 10;
	}

	number = reversedNumber;
}

void ConvertBaseToDecimalBase(int base, int& number) {
	int transformedNumber = 0;
	int counter = 0;

	while (number > 0)
	{
		int digit = number % 10;
		number /= 10;

		transformedNumber += digit * pow(base, counter++);
	}

	number = transformedNumber;
}

void ConvertDecimalBaseToOtherBase(int base, int& number) {
	int transformedNumber = 0;

	while (number > 0)
	{
		int remainder = number % base;
		number /= base;

		transformedNumber *= 10;
		transformedNumber += remainder;
	}

	number = transformedNumber;
	ReverseNumber(number);
}

void ConvertFromBaseToOtherBase(int fromBase, int toBase, int& number) {
	ConvertBaseToDecimalBase(fromBase, number);
	ConvertDecimalBaseToOtherBase(toBase, number);
}

int main()
{
	int number = 0;
	cin >> number;

	ConvertFromBaseToOtherBase(2, 10, number);

	cout << number;
}