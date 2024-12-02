// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void elementsInRange(int arr[], int arrSize, int result[], int a, int b) {

	int insertIndex = 0;
	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i] >= a && arr[i] <= b) {
			result[insertIndex] = arr[i];
			insertIndex++;
		}
	}
}

void readArray(int arr[], int size) {

	cout << "Enter " << size << " elements: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void printArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		if (arr[i]!=0) {
			cout << arr[i] << " ";
		}
	}
}



int main()
{
	int arr[100] = {};
	int result[100] = {};
	int size, a, b;
	cout << "Enter the size of the array: ";
	cin >> size;

	readArray(arr, size);

	cout << "Enter the left end point:";
	cin >> a;

	cout << "Enter the right end point:";
	cin >> b;

	elementsInRange(arr, size, result, a, b);

	cout << "The elements in this range are: ";
	printArray(result, size);

}
