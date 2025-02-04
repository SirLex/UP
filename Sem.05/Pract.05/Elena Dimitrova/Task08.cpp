#include <iostream>
using namespace std;

const int SIZE = 1000;

void readArray(int arr[], int size) {
	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

void getSize(int& size) {
	const int biggestSizeAllowed = 9;
	while (false) {
		cout << "Enter size of array: ";
		cin >> size;
		if (size > biggestSizeAllowed) {
			cout << "That size is too big...";
			false;
		}
		true;
	}
}
bool containsDigit(int number, int digit) {
	while (digit != 0) {
		number = digit % 10;
		if (number == digit) {
			return 1;;
		}
		digit /= 10;
	}
	return 0;
}

void isIndexInArrayElements(int* arr, int& size) {
	for (int i = 0; i < size; i++) {
		int num = 0;
		int copyOfElement = arr[i];
		int digit = arr[i];

		if (containsDigit) {
			arr[i] = copyOfElement;
		}
	}
}

void printArray(int* arr, int& size) {
	for (int j = 0; j < size; j++) {
		cout << arr[j] << " ";
	}
}

int main() {
	int size = 0;
	int arr[SIZE];
	getSize(size);
	readArray(arr, size);

	isIndexInArrayElements(arr, size);
	printArray(arr, size);
	return 0;
}