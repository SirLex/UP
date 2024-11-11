#include <iostream>
#include "input.h"

bool isDigitInNumber(int num, int digit) {
	while (num != 0) {
		if (num % 10 == digit) {
			return true;
		}
		num /= 10;
	}
	return false;
}

void zeroIfDigitAppearsInArr(int* arr, int arrSize) {
	for (int i = 0; i < arrSize; ++i) {
		if (!isDigitInNumber(arr[i], i)) {
			std::cout << "0 ";
			continue;
		}
		std::cout << arr[i] << " ";
	}
}

int main() {
	int arrSize;
	const int MAX_ARR_SIZE = 9;
	int* arr = inputArray(arrSize, MAX_ARR_SIZE);
	zeroIfDigitAppearsInArr(arr, arrSize);
    delete[] arr;
 	return 0;
}