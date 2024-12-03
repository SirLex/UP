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

int getMinElement(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return - 1;
	}

	int minElement = arr[0];

	for (int i = 1; i < size; i++)
	{
		int currentElement = arr[i];

		if (minElement > currentElement)
		{
			minElement = currentElement;
		}
	}

	return minElement;
}

int getMaxElement(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return -1;
	}

	int maxElement = arr[0];

	for (int i = 1; i < size; i++)
	{
		int currentElement = arr[i];

		if (maxElement < currentElement)
		{
			maxElement = currentElement;
		}
	}

	return maxElement;
}

int main()
{
	int arr[CAPACITY];

	int size;
	cin >> size;

	readArray(arr, size);

	int minElement = getMinElement(arr, size);
	int maxElement = getMaxElement(arr, size);

	cout << "Min: " << minElement << endl;
	cout << "Max: " << maxElement << endl;

    return 0;
}
