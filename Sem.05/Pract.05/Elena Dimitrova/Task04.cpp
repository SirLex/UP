#include <iostream>
using namespace std;

const int SIZE = 1000;

void readArray(int arr[], int size) {
	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void secondArray(int arr[], int result[], int size, int& secondSize, int a, int b) {
	for (int i = 0; i < size; i++) {
		if (a <= arr[i] && arr[i] <= b) {
			result[secondSize] = arr[i];
			secondSize++;
		}
	}
}

void printArray(int result[], int& secondSize) {
	for (int j = 0; j < secondSize; j++) {
		cout << result[j] << " ";
	}
}

int main() {
	int arr[SIZE];
	int result[SIZE];
	int size;
	int a, b;
	int secondSize = 0;

	cout << "Enter size of array: ";
	cin >> size;

	readArray(arr, size);

	cout << "Enter your interval: ";
	cin >> a >> b;
	
	secondArray(arr, result, size, secondSize, a, b);
	printArray(arr, secondSize);
	return 0;
}