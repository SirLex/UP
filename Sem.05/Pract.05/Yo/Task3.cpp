#include <iostream>
#include "input.h"

int* shortenedArr(int* arr, int arrSize) {
	if (arrSize <= 1) return nullptr;
	int* newArr = new int[arrSize - 1];
	int indexToRm;

	do {
		std::cout << "Index to remove(0:" << arrSize - 1 << "): ";
		std::cin >> indexToRm;

	} while (indexToRm < 1 || indexToRm > arrSize);

	for (int i = 0, j = 0; i < arrSize; ++i) {
		if (i == indexToRm) continue;
		newArr[j++] = arr[i];
	}

	return newArr;
}

int main() {
	int arrSize;
	int* arr = inputArray(arrSize);
	int* newArr = shortenedArr(arr, arrSize);
    if (newArr != nullptr) {
        for (int i = 0; i < arrSize - 1; ++i) {
            std::cout << newArr[i] << " ";
        }

        delete[] newArr;
    }

	delete[] arr;
	return 0;
}