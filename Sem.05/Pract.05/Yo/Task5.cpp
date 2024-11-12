#include <iostream>
#include "input.h"

bool isSymmetrical(int* arr, int arrSize) {
	int midPoint = arrSize / 2;
	for (int i = midPoint; i < arrSize; ++i) {
		if (arr[i] != arr[arrSize - i - 1]) return false;
	}
	return true;
}

int main() {
	int arrSize;
	int* arr = inputArray(arrSize);
	std::cout << isSymmetrical(arr, arrSize);
	delete[] arr;
	return 0;
}