using namespace std;
#include <iostream>

int FirstMostOftenRepeatingNumber(int array[], int size) {
	int currentCount = 1;
	int record = 1;
	int number = 0;

	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = i + 1; j < size; j++)
		{
			if (array[i] == array[j])
			{
				times++;
			}
		}

		if (times > record)
		{
			record = times;
			number = array[i];
		}

		times = 1;
	}

	return number;
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

	cout << FirstMostOftenRepeatingNumber(numbers, size);
}