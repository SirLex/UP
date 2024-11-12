#include <iostream>
#include "input.h"

int abs(int a) { return a < 0 ? a * -1 : a; }

double avrgAndClosest(int* arr, int arrSize, int& closest) {
	if (arr == NULL) return -1;
	double arrAvrg = 0;

	for (int i = 0; i < arrSize; ++i)
		arrAvrg += arr[i];
	arrAvrg /= arrSize;

	closest = arr[0];
	for (int i = 1; i < arrSize; ++i) {
		if (abs(arrAvrg - arr[i]) < abs(arrAvrg - closest)) {
			closest = arr[i];
		}
	}

	return arrAvrg;
}

int main() {
	int arrSize;
	int* arr = inputArray(arrSize);
	int closest = 0;

	std::cout << avrgAndClosest(arr, arrSize, closest) << std::endl;
	std::cout << closest << std::endl;

	delete[] arr;
	return 0;
}