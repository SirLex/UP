#include <iostream>
#include <math.h>
using namespace std;

const int SIZE = 100;

int readArray(int arr[], int size) {
	cout << "Enter array:";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	return 0;
}

double averageOfArr(int arr[], int size) {
	double average = 0;
	for (int i = 0; i < size; i++) {
		average += arr[i];
	}
	average /= size;
	return average;
}

int closestToAvg(int arr[], int size) {
	double average = averageOfArr(arr, size);
	int closest = arr[0];
	for (int i = 0; i < size; i++) {
		if (abs(average - closest) > abs(average - arr[i])) {
			closest = arr[i];
		}
	}
	return closest;
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter a size of the array:";
	cin >> size;

	readArray(arr, size);

	cout << "Average of array:" << averageOfArr(arr, size) << endl;
	cout << "Closest number to average:" << closestToAvg(arr, size);
}