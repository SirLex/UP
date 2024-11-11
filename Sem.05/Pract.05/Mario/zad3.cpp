using namespace std;
#include <iostream>

void RemoveAt(int array[], int size, int index) {
	for (size_t i = index; i < size - 1; i++)
	{
		if (i + 1 != index)
		{
			array[i] = array[i + 1];
		}
		else
		{
			array[i] = array[i + 2];
			i++;
		}
	}

	array[size - 1] = 0;
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

	int index;
	cin >> index;

	RemoveAt(numbers, size, index);
}