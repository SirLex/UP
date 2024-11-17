#include <iostream>
using namespace std;

const int SIZE = 100;

int longestRowInArr(int arr[], int size) {
	int currentSequence = 0;
	int longestSequence = 0;
	for (int i = 0; i < size; i++) {
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
	return longestSequence;
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter size of array: ";
	cin >> size;

	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << longestRowInArr(arr, size);
	return 0;
}