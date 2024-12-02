// Task05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isSymmetrical(int arr[], int size) {

	bool result = true;
	int firstIndex = 0;
	int lastIndex = size - 1;

	while (true)
	{
		if (firstIndex == lastIndex || firstIndex > lastIndex) {
			break;
		}

		if (arr[firstIndex] != arr[lastIndex]) {
			result = false;
			break;
		}
		firstIndex++;
		lastIndex--;
	}
	return result;
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

	cout << "Is this array symmetrical? " << endl;

	if (isSymmetrical(arr,size))
	{
		cout << "-yes";
	}
	else
	{
		cout << "-no";
	}
}
