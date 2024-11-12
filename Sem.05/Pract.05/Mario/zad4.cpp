using namespace std;
#include <iostream>

void FillArrayWithNumbersInRange(int arr[], int result[], int size, int a, int b) {
	int resultCounter = 0;

	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] >= a && arr[i] <= b)
		{
			result[resultCounter] = arr[i];
			resultCounter++;
		}
	}
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
	int result[ArrayCapacity];

	for (size_t i = 0; i < size; i++) {
		int number;
		cin >> number;

		numbers[i] = number;
	}

	int a;
	int b;
	cin >> a >> b;

	FillArrayWithNumbersInRange(numbers, result, size, a, b);
}