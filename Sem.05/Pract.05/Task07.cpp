// Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int longestSequenceOf≈qualNums(int arr[],int size ) {

	int currentSequence = 1;
	int longestSequence = 1;

	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] == arr[i+1])
		{
			currentSequence++;
		}
		else
		{
			if (currentSequence > longestSequence) {
				longestSequence = currentSequence;
			}

			currentSequence = 1;
		}
	}
	if (currentSequence > longestSequence)
	{
		longestSequence = currentSequence;
	}
	return longestSequence;
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

	cout << "The longest sequence of equal nums has length of " << longestSequenceOf≈qualNums(arr, size);
}
