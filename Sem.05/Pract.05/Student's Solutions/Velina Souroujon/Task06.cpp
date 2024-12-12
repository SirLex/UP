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

int longestDecreasingSubsequence(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return - 1;
	}

	int maxLength = 1;
	int currentLength = 1;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			currentLength++;

			if (maxLength < currentLength)
			{
				maxLength = currentLength;
			}
		}
		else
		{
			currentLength = 1;
		}
	}

	return maxLength;
}

int main()
{
	int arr[CAPACITY];

	int size;
	cin >> size;

	readArray(arr, size);
	cout << longestDecreasingSubsequence(arr, size);

    return 0;
}
