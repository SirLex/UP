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

int getMostFrequentNumber(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return - 1;
	}

	const int MAX_NUM = 1000;
	int numbersCountMap[MAX_NUM] = {};

	int maxCount = 1;
	int mostFrequentNum = arr[0];

	for (int i = 0; i < size; i++)
	{
		int number = arr[i];
		numbersCountMap[number]++;

		int currentCount = numbersCountMap[number];

		if (maxCount < currentCount)
		{
			maxCount = currentCount;
			mostFrequentNum = arr[i];
		}
	}

	return mostFrequentNum;
}

int main()
{
	int arr[CAPACITY];

	int size;
	cin >> size;

	readArray(arr, size);
	int mostFrequentNum = getMostFrequentNumber(arr, size);
	cout << mostFrequentNum;

    return 0;
}
