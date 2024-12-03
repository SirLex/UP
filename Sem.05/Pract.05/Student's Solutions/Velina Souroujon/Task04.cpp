#include <iostream>
using namespace std;

const int CAPACITY = 1000;

bool isInInterval(int number, int from, int to)
{
	return number >= from
		&& number <= to;
}

void readArray(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void fillArray(int arr[], int arrSize, int result[], int& resultSize, int from, int to)
{
	if (arr == NULL || result == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	int resultIdx = 0;

	for (int i = 0; i < arrSize; i++)
	{
		int element = arr[i];

		if (isInInterval(element, from, to))
		{
			result[resultIdx] = element;
			resultIdx++;
			resultSize++;
		}
	}
}

void printArray(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[CAPACITY];
	int result[CAPACITY];

	int size;
	cin >> size;

	readArray(arr, size);

	int from, to;
	cin >> from >> to;

	int resultSize = 0;

	fillArray(arr, size, result, resultSize, from, to);
	printArray(result, resultSize);

    return 0;
}