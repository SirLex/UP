// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void setToZero(int arr[],int size) {

	for (int i = 0; i < size; i++)
	{
		bool containsIndex = false;
		int currentElement = arr[i];
		while (currentElement != 0)
		{
			int lastDigit = currentElement % 10;
			currentElement /= 10;

			if (lastDigit == i) {
				containsIndex = true;
				break;
			}
		}

		if (!containsIndex)
		{
			arr[i] = 0;
		}
	}
}

void printArray(int arr[], int size) {

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
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
	int arr[100] = {};

	cout << "Enter the size of the array: ";

	int size;
	cin >> size;

	readArray(arr, size);

	setToZero(arr,size);

	cout << "After setting the elements to 0: ";
	printArray(arr, size);
}
