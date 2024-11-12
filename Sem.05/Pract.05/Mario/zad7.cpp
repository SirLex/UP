using namespace std;
#include <iostream>

int LenghtOfLongestSequenceOfRepeatingNumbers(int array[], int size) {
	int currentLength = 1;
	int biggestLength = 1;

	for (size_t i = 0; i < size - 1; i++)
	{
		if (array[i] == array[i + 1])
		{
			currentLength++;
		}
		else
		{
			if (currentLength > biggestLength)
			{
				biggestLength = currentLength;
			}

			currentLength = 1;
		}
	}

	if (currentLength > biggestLength)
	{
		biggestLength = currentLength;
	}

	return biggestLength;
}

int main()
{
	const int ArrayCapacity = 1000;

	int size;
	cin >> size;

	if (size < 1 || size > 1000) {
		cout << "Please enter a number between 1 and 1000!";
		return 0;
	}

	int numbers[ArrayCapacity];

	for (size_t i = 0; i < size; i++) {
		int number;
		cin >> number;

		numbers[i] = number;
	}

	cout << LenghtOfLongestSequenceOfRepeatingNumbers(numbers, size);
}