#include <iostream>
using namespace std;

const int SIZE = 1000;

void readArray(int arr[], int size) {
	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int longestRowInArr(int arr[], int size) {
	int currentSequence = 1;
	int longestSequence = 1;
	for (int i = 0; i < size - 1; i++) {
		if (arr[i] == arr[i + 1]) {
			currentSequence++;
		}
		else {
			if (currentSequence > longestSequence) {
				longestSequence = currentSequence;
			}
			currentSequence = 1;
		}
	}
	if (currentSequence > longestSequence) {
		longestSequence = currentSequence;
	}
	return longestSequence;
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter size of array: ";
	cin >> size;

	readArray(arr, size);

	cout << longestRowInArr(arr, size);
	return 0;
}