#include <iostream>
using namespace std;

const int SIZE = 100;

void newArray(int arr[], int result[], int size, int a, int b) {
	int newSize = 0;
	for (int i = 0; i < size; i++) {
		if (a <= arr[i] && arr[i] <= b) {
			result[newSize] = arr[i];
			newSize++;
		}
	}
	for (int j = 0; j < newSize; j++) {
		cout << result[j] << " ";
	}
}

int main() {
	int arr[SIZE];
	int result[SIZE];
	int size;
	int a, b;

	cout << "Enter size of array: ";
	cin >> size;
	cout << "Enter your interval: ";
	cin >> a >> b;
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	newArray(arr, result, size, a, b);
	return 0;
}