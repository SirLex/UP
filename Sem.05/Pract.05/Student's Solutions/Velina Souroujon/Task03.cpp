#include <iostream>
using namespace std;

const int CAPACITY = 1000;

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

bool isInInterval(int number, int from, int to)
{
	return number >= from
		&& number <= to;
}

void removeAt(int position, int arr[], int& size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	int index = position - 1;

	if (!isInInterval(index, 0, size - 1))
	{
		cout << "Index out of range!";
		return;
	}

	for (int i = index; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	size--;
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

	int size;
	cin >> size;

	readArray(arr, size);

	int positionToRemove;
	cin >> positionToRemove;

	removeAt(positionToRemove, arr, size);
	printArray(arr, size);

    return 0;
}