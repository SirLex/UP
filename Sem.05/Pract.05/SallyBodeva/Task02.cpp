// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int minAndMaxOfArray(int arr[], int size, int& minElement, int& maxElement) {

	 minElement = arr[0];
	 maxElement = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minElement) {
			minElement = arr[i];
		}
		if (arr[i] > maxElement)
		{
			maxElement = arr[i];
		}

	}

	return 0;
}

void readArray(int arr[], int size) {

	cout << "Enter " << size << " elements: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int main()
{
	int minElement = 0;
	int maxElement = 0;

	cout << "Please, enter the size of the array: ";
	int size;
	cin >> size;

	int arr[100] = {};

	readArray(arr,size);
	
	minAndMaxOfArray(arr, size, minElement, maxElement);

	cout << "Min element: " << minElement << endl;
	cout << "Max element: " << maxElement << endl;

}
