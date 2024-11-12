#include <iostream>
#include "input.h"

int longestDecreasingSequence(int* arr, int arrSize) {
	int longest = 0, tempLongest = 1;
	for (int i = 1; i < arrSize; ++i) {
		if (arr[i] < arr[i - 1]) {
			tempLongest++;
		} else {
			longest = tempLongest > longest ? tempLongest : longest;
			tempLongest = 1;
		}
	}
	if (tempLongest > longest) {
		longest = tempLongest;
	}

	return tempLongest > longest ? tempLongest : longest;
}

int main() {
	int arrSize;
	int* arr = inputArray(arrSize);
	std::cout << longestDecreasingSequence(arr, arrSize);
	delete[] arr;
	return 0;
}