#include <iostream>
using namespace std;

const int SIZE = 100;

void arrayIncludingIndex(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		int num = 0;
		int copyOfElement = arr[i];
		bool containIndex = false;

		while (arr[i] != 0) {
			num = arr[i] % 10;
			if (num == i) {
				containIndex = true;
			}
			arr[i] /= 10;
		}

		if (containIndex) {
			arr[i] = copyOfElement;
		}
	}

	for (int j = 0; j < size; j++) {
		cout << arr[j] << " ";
	}
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter size of array: ";
	cin >> size;
	if (size > 9) {
		cout << "That size is too big...";
	}

	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	arrayIncludingIndex(arr, size);
	return 0;
}