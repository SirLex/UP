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

void arrIntersection(int* arr1, int arr1Size, int* arr2, int arr2Size, int* result,
                     int& resultSize) {
	for (int i = 0; i < arr1Size; ++i) {
		for (int j = 0; j < arr2Size; ++j) {
			if (arr1[i] == arr2[j] && !contains(result, resultSize, arr1[i])) {
				result[resultSize] = arr1[i];
				resultSize++;
			}
		}
	}
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

int main() {
	const int MAX_ARR_SIZE = 1000;
	int arr1Size;
	int* arr1 = inputArray(arr1Size);
	int arr2Size;
	int* arr2 = inputArray(arr2Size);

	int resultIntersection[MAX_ARR_SIZE];
	int resultIntersSize = 0;
	arrIntersection(arr1, arr1Size, arr2, arr2Size, resultIntersection, resultIntersSize);
	std::cout << "Intersection: ";
	printArr(resultIntersection, resultIntersSize);

	std::cout << std::endl;

	int resultUnion[MAX_ARR_SIZE];
	int resultUnionSize = 0;
	arrUnion(arr1, arr1Size, arr2, arr2Size, resultUnion, resultUnionSize);
	std::cout << "Union: ";
	printArr(resultUnion, resultUnionSize);

	delete[] arr1;
	delete[] arr2;
	return 0;
}