using namespace std;
#include <iostream>

double AverageSumOfElements(int array[], int size) {
	double average = 0;

	for (size_t i = 0; i < size; i++)
	{
		average += array[i];
	}

	average /= size;

	return average;
}

int ClosestNumberToAverageSum(int array[], int size) {
	double average = AverageSumOfElements(array, size);
	int minDiff = 10000;

	int closestNum = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (abs(average - array[i]) < minDiff)
		{
			minDiff = abs(average - array[i]);
			closestNum = array[i];
		}
	}

	return closestNum;
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

	cout << AverageSumOfElements(numbers, size) << endl;
	cout << ClosestNumberToAverageSum(numbers, size) << endl;
}