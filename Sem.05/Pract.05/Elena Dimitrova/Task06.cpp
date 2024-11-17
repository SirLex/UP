#include <iostream>
using namespace std;

const int SIZE = 100;

int longestRowInArr(int arr[], int size) {
	int currentRow = 0;
	int longestRow = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] > arr[i + 1]) {
			currentRow++;
		}
		else {
			if (currentRow > longestRow) {
				longestRow = currentRow;
			}
			currentRow = 1;
		}
	}
	return longestRow;
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