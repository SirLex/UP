// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double avgOfArray(int arr[], int size, int& closets) {

	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	double avg = sum / (double)size;

	double minDiff = (avg - arr[0] > 0) ? avg - arr[0] : (avg - arr[0]) * (-1);
	closets = 0;

	for (int i = 1; i < size; i++)
	{
		double currentDiff = (avg - arr[i] > 0) ? avg - arr[i] : (avg - arr[i]) * (-1);

		if (currentDiff < minDiff)
		{
			minDiff = avg - arr[i];
			closets = arr[i];
		}
	}

	return avg;

}
void readArray(int arr[], int size) {

	cout << "Enter " << size << " elements: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int main()
{
	int arr[1000] = {};
	int size;
	int closestElement = 0;

	cout << "Enter the size of the array: ";
	cin >> size;

	readArray(arr, size);

	double avg = avgOfArray(arr, size, closestElement);

	cout << "The average value of the elements is " << avg << endl;
	cout << "The element that is closest to the average is " << closestElement << endl;

	return 0;
}


