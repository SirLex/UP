#include <iostream>

using namespace std;

const size_t ARRAY_MAX_SIZE = 10;

void readArray(int arr[], size_t arrSize) {
	for (size_t i = 0; i < arrSize; i++)
		cin >> arr[i];
}

void swap(int& a, int& b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

void flipPartOfArray(int arr[], size_t arrSize, size_t beg, size_t end) {
	if (beg >= end || beg >= arrSize || end >= arrSize) {
		cout << "Error! Entered indexes are invalid!";
		return;
	}

	size_t arrayPartHalfLength = (end - beg + 1) / 2;
	for (size_t i = 0; i < arrayPartHalfLength; i++)
		swap(arr[beg + i], arr[end - i]);
}

void flipHalfsOfArray(int arr[], size_t arrSize) {
	if (arrSize <= 3) return;

	size_t endOfFirstHalfIndex = arrSize / 2 - 1;
	size_t begOfSecondHalfIndex = endOfFirstHalfIndex + arrSize % 2 + 1;

	flipPartOfArray(arr, arrSize, 0, endOfFirstHalfIndex);
	flipPartOfArray(arr, arrSize, begOfSecondHalfIndex, arrSize - 1);
}

void printArray(int arr[], size_t arrSize) {
	for (size_t i = 0; i < arrSize; i++)
		cout << arr[i] << ' ';
	cout << endl;
}

int main() {
	int arr[ARRAY_MAX_SIZE];
	size_t arrSize;

	cout << "Enter size of array (must be <= 10): ";
	cin >> arrSize;

	if (arrSize > ARRAY_MAX_SIZE) {
		cout << "Error! Entered size is invalid!";
		return 0;
	}

	cout << "Enter array elements: ";
	readArray(arr, arrSize);
	if (arrSize == 0) cout << endl;

	flipHalfsOfArray(arr, arrSize);

	cout << "Array after flipping: ";
	printArray(arr, arrSize);

	return 0;
}
