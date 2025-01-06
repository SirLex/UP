// Task06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int longestDescendingSequence(int arr[], int size) {

	int countCurrent = 1;
	int countLongest = 1;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			countCurrent++;
		}
		else
		{
			if (countCurrent > countLongest)
			{
				countLongest = countCurrent;
			}
			countCurrent = 1;
		}
	}
	if (countCurrent > countLongest)
	{
		countLongest = countCurrent;
	}
	return countLongest;
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

	cout << "The longest descending sequence has length of " << longestDescendingSequence(arr,size);
}
