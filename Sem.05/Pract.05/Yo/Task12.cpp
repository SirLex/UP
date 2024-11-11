#include <iostream>
#include "input.h"

bool arrLinearDependence(int* arr1, int arr1Size, int* arr2, int arr2Size) {
	if (arr1Size != arr2Size) return false;
	int arr1_ref = 0, arr2_ref = 0;
	bool ref_set = false;

	for (int i = 0; i < arr1Size; ++i) {
		if (arr1[i] == 0 && arr2[i] == 0) continue;

		if (arr1[i] == 0 && arr2[i] != 0) return false;

		if (!ref_set) {
			arr1_ref = arr1[i];
			arr2_ref = arr2[i];
			ref_set = true;
		} else {
			if (arr1[i] * arr2_ref != arr2[i] * arr1_ref) return false;
		}
	}

	return true;
}

int main() {
	int arr1Size;
	int* arr1 = inputArray(arr1Size);
	int arr2Size;
	int* arr2 = inputArray(arr2Size);

	if (arrLinearDependence(arr1, arr1Size, arr2, arr2Size)) {
		std::cout << "yes";
	} else {
		std::cout << "no";
	}

	delete[] arr1;
	delete[] arr2;
	return 0;
}