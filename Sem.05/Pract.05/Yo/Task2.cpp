#include <iostream>
#include "input.h"

void ArrMinMax(int* arr, int arrSize, int& min, int& max) {
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < arrSize; ++i) {
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
}

int main() {
	int arrSize;
	int* arr = inputArray(arrSize);
	int min, max;
	ArrMinMax(arr, arrSize, min, max);

	std::cout << "Min: " << min << std::endl
	          << "Max: " << max << std::endl;

	delete[] arr;
	return 0;
}