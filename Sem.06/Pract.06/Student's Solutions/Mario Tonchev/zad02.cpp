#include <iostream>
using namespace std;

int CountOfOnesInBinarySystem(int number) {
	int numberInBinary = 0;
	int result = 0;

	while (number > 0)
	{
		int remainder = number % 2;
		number /= 2;

		numberInBinary *= 10;
		numberInBinary += remainder;
	}

	while (numberInBinary > 0)
	{
		int digit = numberInBinary % 10;
		numberInBinary /= 10;

		if (digit == 1)
		{
			result++;
		}
	}

	return result;
}

int main()
{
	int number = 0;
	cin >> number;

	cout << CountOfOnesInBinarySystem(number);
}