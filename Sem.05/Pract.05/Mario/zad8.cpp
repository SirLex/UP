using namespace std;
#include <iostream>

void MakeNumbersNotContainingIndexZero(int array[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		int number = array[i];
		bool isContainingIndex = false;

		while (number > 0)
		{
			int digit = number % 10;
			number /= 10;

			if (digit == i)
			{
				isContainingIndex = true;
				break;
			}
		}

		if (!isContainingIndex)
		{
			array[i] = 0;
		}
	}
}

int main()
{
	const int ArrayCapacity = 9;

	int size;
	cin >> size;

	if (size < 1 || size > 9) {
		cout << "Please enter a number between 1 and 9!";
		return 0;
	}

	int numbers[ArrayCapacity];

	for (size_t i = 0; i < size; i++) {
		int number;
		cin >> number;

		numbers[i] = number;
	}

	MakeNumbersNotContainingIndexZero(numbers, size);
}