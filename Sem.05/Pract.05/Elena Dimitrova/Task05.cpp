#include <iostream>
using namespace std;

const int SIZE = 1000;

void readArray(int arr[], int size) {
	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

bool isSymetric(int arr[], int size) {
	int halfSize = size / 2;
	for (int i = 0; i < halfSize; i++) {
		if (arr[i] != arr[size - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter size of array: ";
	cin >> size;

	readArray(arr, size);

	if (isSymetric(arr, size)) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}