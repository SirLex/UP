// Task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void inetersection(int arr1[], int arr1Size, int arr2[], int arr2Size, int result[]) {
	
	int insertIndex = 0;
	for (int i = 0; i < arr1Size; i++)
	{
		int currentElementInFirstArray = arr1[i];

		for (int j = 0; j < arr2Size; j++)
		{
			if (arr1[i] == arr2[j]) {
				result[insertIndex] = arr1[i];
				insertIndex++;
			}
		}
	}

}

bool contains(int arr1[], int arr1Size, int element) {

	for (int i = 0; i < arr1Size; i++)
	{
		if (arr1[i] == element)
		{
			return true;
		}
	}
	return false;
}


void unionSet (int arr1[], int arr1Size, int arr2[], int arr2Size, int result[]) {

	int insertIndex = 0;
	int resultArraySize = arr1Size + arr2Size;

	for (int i = 0; i < arr1Size; i++)
	{
		result[insertIndex] = arr1[i];
		insertIndex++;
	}
	for (int j = 0; j < arr2Size; j++)
	{
		if (!contains(result, resultArraySize,arr2[j]))
		{
			result[insertIndex] = arr2[j];
			insertIndex++;
		}
	}
}

void printArray(int arr[], int size) {

	cout << "[ ";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0) {
			cout << arr[i] << " ";
		}
	}
	cout << "]";
}

void readArray(int arr[], int size) {

	cout << "Enter " << size << " elements: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int main()
{
	int firstArr[100] = {};
	int secArr[100] = {};

	cout << "Enter the size of the first array: ";

	int size1,size2;
	cin >> size1;

	readArray(firstArr, size1);

	cout << "Enter the size of the second array: ";
	cin >> size2;

	readArray(secArr, size2);

	int resultSize = size1 + size2;

	int result[100] = {};

	inetersection(firstArr, size1, secArr, size2, result);
	cout << "The intersection of the two arrays: ";
	printArray(result, resultSize);

	cout << "The union of the two arrays: ";
	unionSet(firstArr,size1,secArr,size2,result);
	printArray(result, resultSize);
	
}

