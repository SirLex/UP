#include <iostream>
using namespace std;

const int FIRST_ARRAY_CAPACITY = 1000;
const int SECOND_ARRAY_CAPACITY = 1000;

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

void assignRemainingElementsFromIndex(int sourceArray[], int size, int sArrayIdx, int destinationArray[], int dArrayIdx)
{
	if (sourceArray == NULL || destinationArray == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	for (int i = sArrayIdx; i < size; i++)
	{
		destinationArray[dArrayIdx] = sourceArray[i];
		dArrayIdx++;
	}
}

void sortUnionArray(int firstArray[], int size1, int secondArray[], int size2, int result[])
{
	if (firstArray == NULL || secondArray == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	int idx1 = 0;
	int idx2 = 0;
	int idxResult = 0;

	while (true)
	{
		if (firstArray[idx1] <= secondArray[idx2])
		{
			result[idxResult] = firstArray[idx1];
			idx1++;
		}
		else
		{
			result[idxResult] = secondArray[idx2];
			idx2++;
		}

		idxResult++;

		if (idx1 == size1)
		{
			assignRemainingElementsFromIndex(secondArray, size2, idx2, result, idxResult);
			break;
		}
		
		if (idx2 == size2)
		{
			assignRemainingElementsFromIndex(firstArray, size1, idx1, result, idxResult);
			break;
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

	cout << endl;
}

int main()
{
	int firstArray[FIRST_ARRAY_CAPACITY];
	int secondArray[SECOND_ARRAY_CAPACITY];
	int resultArray[FIRST_ARRAY_CAPACITY + SECOND_ARRAY_CAPACITY];

	int firstArrSize, secondArrSize;
	cin >> firstArrSize >> secondArrSize;
	int resultSize = firstArrSize + secondArrSize;

	readArray(firstArray, firstArrSize);
	readArray(secondArray, secondArrSize);

	sortUnionArray(firstArray, firstArrSize, secondArray, secondArrSize, resultArray);
	printArray(resultArray, resultSize);

    return 0;
}