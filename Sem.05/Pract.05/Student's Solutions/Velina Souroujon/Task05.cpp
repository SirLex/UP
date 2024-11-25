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

bool isSymmetrical(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return false;
	}

	for (int i = 0; i < size / 2; i++)
	{
		if (arr[i] != arr[size - 1 - i])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int arr[CAPACITY];

	int size;
	cin >> size;

	readArray(arr, size);

	if (isSymmetrical(arr, size))
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}

    return 0;
}
