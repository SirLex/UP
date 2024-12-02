// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void removeAt(int arr[], int size, int index) {

	for (int i = index; i < size-1; i++)
	{
		arr[i] = arr[i + 1];
	}
	arr[size - 1] = 0;
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
		cout << arr[i] << " ";
	}
}


int main()
{
	int size,index;
	
	cout << "Please, enter the size of the array: ";
	cin >> size;

	int arr[100] = {};
	readArray(arr, size);

	cout << "Please, enter the index of the element you would like to remove: ";
	cin >> index;

	removeAt(arr,size,index);
	size--;

	cout << "The result after removing the element: ";
	printArray(arr,size);
}
