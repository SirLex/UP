#include <iostream>
using namespace std;

const int CAPACITY = 9;

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

bool contains(int digit, int number)
{
	if (digit == 0 && number == 0)
	{
		return true;
	}

	while (number != 0)
	{
		int lastDigit = number % 10;
		number /= 10;

		if (digit == lastDigit)
		{
			return true;
		}
	}

	return false;
}

void modifyArray(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}
	
	for (int idx = 0; idx < size; idx++)
	{
		if (!contains(idx, arr[idx])) 
		{
			arr[idx] = 0;
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

	int size;
	cin >> size;

	readArray(arr, size);
	modifyArray(arr, size);
	printArray(arr, size);

	return 0;
}
