using namespace std;
#include <iostream>

int MinElement(int array[], int size) {
	int minEl = 10000;

	for (size_t i = 0; i < size; i++)
	{
		if (array[i] < minEl)
		{
			minEl = array[i];
		}
	}

	return minEl;
}

int MaxElement(int array[], int size) {
	int maxEl = -10000;

	for (size_t i = 0; i < size; i++)
	{
		if (array[i] > maxEl)
		{
			maxEl = array[i];
		}
	}

	return maxEl;
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

	cout << MinElement(numbers, size) << endl;
	cout << MaxElement(numbers, size) << endl;
}