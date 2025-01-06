// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool isLinearlyDependent(int arr1[], int arr2[], int arraysSize){

	double diff = arr2[0] / (double)arr1[0];

	for (int i = 1; i < arraysSize; i++)
	{
		double currentDiff = arr2[i] / (double)arr1[i];
		if (diff != currentDiff)
		{
			return false;
		}
	}
	return true;
}

void readArray(int arr[], int size) {

	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int main()
{
	int firstArr[100] = {};
	int secArr[100] = {};

	cout << "Enter the size of the two arrays: ";

	int size;
	cin >> size;

	cout << "Enter the elements of the first array: ";
	readArray(firstArr, size);

	cout << "Enter the elements of the second array: ";
	readArray(secArr, size);


	cout << "Are those two arrays linearly dependent: " << endl;

	if (isLinearlyDependent(firstArr,secArr, size))
	{
		cout << "-yes";
	}
	else
	{
		cout << "-no";
	}

}
