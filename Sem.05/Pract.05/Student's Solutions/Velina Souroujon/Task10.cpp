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

int unionArrays(int arr1[], int firstSize, int arr2[], int secondSize, int result[])
{
	if (arr1 == NULL || arr2 == NULL || result == NULL)
	{
		cout << "Array cannot be null!";
		return -1;
	}

	const int MAX_NUM = 1000;
	bool containsNumberMap[MAX_NUM] = {};

	for (int i = 0; i < firstSize; i++)
	{
		int element = arr1[i];
		result[i] = element;
		containsNumberMap[element] = true;
	}

	int resultIdx = firstSize;
	for (int i = 0; i < secondSize; i++)
	{
		int element = arr2[i];

		if (containsNumberMap[element])
		{
			continue;
		}

		result[resultIdx] = element;
		resultIdx++;
	}

	return resultIdx;
}

int intersectArrays(int arr1[], int firstSize, int arr2[], int secondSize, int result[])
{
	if (arr1 == NULL || arr2 == NULL || result == NULL)
	{
		cout << "Array cannot be null!";
		return - 1;
	}

	const int MAX_NUM = 1000;
	bool containsNumberMap[MAX_NUM] = {};

	for (int i = 0; i < firstSize; i++)
	{
		int element = arr1[i];
		containsNumberMap[element] = true;
	}

	int resultIdx = 0;
	for (int i = 0; i < secondSize; i++)
	{
		int element = arr2[i];

		if (containsNumberMap[element])
		{
			result[resultIdx] = element;
			resultIdx++;
		}
	}

	return resultIdx;
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
	int result[FIRST_ARRAY_CAPACITY + SECOND_ARRAY_CAPACITY];

    int firstArrSize, secondArrSize, resultSize = 0;
    cin >> firstArrSize >> secondArrSize;

	readArray(firstArray, firstArrSize);
	readArray(secondArray, secondArrSize);

	resultSize = intersectArrays(firstArray, firstArrSize, secondArray, secondArrSize, result);
	cout << "Intersection: ";
	printArray(result, resultSize);

	resultSize = unionArrays(firstArray, firstArrSize, secondArray, secondArrSize, result);
	cout << "Union: ";
	printArray(result, resultSize);

    return 0;
}
