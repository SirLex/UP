using namespace std;
#include <iostream>

bool IsArraySymmetrical(int array[], int size) {
	for (size_t i = 0; i < size / 2; i++)
	{
		if (array[i] != array[size - 1 - i])
		{
			return false;
		}
	}

	return true;
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

	if (IsArraySymmetrical(numbers, size))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}