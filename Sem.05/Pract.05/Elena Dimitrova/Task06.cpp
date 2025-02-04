#include <iostream>
using namespace std;

const int SIZE = 1000;

void readArray(int arr[], int size) {
	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int longestDecrecingSubarrayLength(int arr[], int size) {
	int currentLongest = 1;
	int newLongest = 1;
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1]) {
			currentLongest++;
		}
		else {
			if (currentLongest > newLongest) {
				newLongest = currentLongest;
			}
			currentLongest = 1;
		}
	}
	if (currentLongest > newLongest) {
		newLongest = currentLongest;
	}
	return newLongest;
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter size of array: ";
	cin >> size;

	readArray(arr, size);

	cout << longestDecrecingSubarrayLength(arr, size);
	return 0;
}