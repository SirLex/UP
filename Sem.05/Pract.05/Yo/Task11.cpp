#include <iostream>
#include "input.h"

void printArr(int* arr, int arrSize) {
	for (int i = 0; i < arrSize; ++i) {
		std::cout << arr[i] << " ";
	}
}

bool contains(int* arr, int arrSize, int num) {
	for (int i = 0; i < arrSize; ++i) {
		if (arr[i] == num) {
			return true;
		}
	}
	return false;
}

void arrUnion(int* arr1, int arr1Size, int* arr2, int arr2Size, int* result, int& resultSize) {
	for (int i = 0; i < arr1Size; ++i) {
		if (!contains(result, resultSize, arr1[i])) {
			result[resultSize] = arr1[i];
			resultSize++;
		}
	}
	for (int i = 0; i < arr2Size; ++i) {
		if (!contains(result, resultSize, arr2[i])) {
			result[resultSize] = arr2[i];
			resultSize++;
		}
	}
}

void bubbleSort(int* arr, int arrSize) {
	for (int i = 0; i < arrSize - 1; ++i) {
		for (int j = 0; j < arrSize - i - 1; ++j) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main() {
	const int MAX_ARR_SIZE = 1000;
	int arr1Size;
	int* arr1 = inputArray(arr1Size);
	int arr2Size;
	int* arr2 = inputArray(arr2Size);

	std::cout << std::endl;

	int result[MAX_ARR_SIZE];
	int resultSize = 0;
	arrUnion(arr1, arr1Size, arr2, arr2Size, result, resultSize);
	bubbleSort(result, resultSize);
	printArr(result, resultSize);

	delete[] arr1;
	delete[] arr2;
	return 0;
}