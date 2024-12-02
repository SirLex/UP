// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


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


void unionSet(int arr1[], int arr1Size, int arr2[], int arr2Size, int result[]) {

	int insertIndex = 0;
	int resultArraySize = arr1Size + arr2Size;

	for (int i = 0; i < arr1Size; i++)
	{
		result[insertIndex] = arr1[i];
		insertIndex++;
	}
	for (int j = 0; j < arr2Size; j++)
	{
		if (!contains(result, resultArraySize, arr2[j]))
		{
			result[insertIndex] = arr2[j];
			insertIndex++;
		}
	}
}

void swap(int arr[], int index1, int index2) {
	
	int temp = arr[index1];
	arr[index1] = arr[index2];
	arr[index2] = temp;
}

void sortArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		for (int j = i+1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr,i,j);
			}
		}
	}
}

void printArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i] != 0) {
			cout << arr[i] << " ";
		}
	}
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

	int size1, size2;
	cin >> size1;

	readArray(firstArr, size1);

	cout << "Enter the size of the second array: ";
	cin >> size2;

	readArray(secArr, size2);

	int resultSize = size1 + size2;

	int result[100] = {};

	cout << "The sorted union of the two arrays: ";

	unionSet(firstArr, size1, secArr, size2, result);
	sortArray(result, resultSize);
	printArray(result, resultSize);
}
