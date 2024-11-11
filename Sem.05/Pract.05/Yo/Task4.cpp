#include <iostream>
#include "input.h"

const int MAX_ARR_SIZE = 1000;

void filterArrBetweenAB(int* arr, int arrSize, int* result, int& resultSize, int a, int b) {
    for (int i = 0; i < arrSize; ++i) {
         if (arr[i] >= a && arr[i] <= b) {
            result[resultSize] = arr[i];
            resultSize++;
        }
    }
}

int main() {
    int arrSize;
	int* arr = inputArray(arrSize);
    int result[MAX_ARR_SIZE];
    int resultSize = 0;
    int a, b;

    std::cout << "a: ";
    std::cin >> b;
    std::cout << "b: ";
    std::cin >> b;

    filterArrBetweenAB(arr, arrSize, result, resultSize, a, b);

    for (int i = 0; i < resultSize; ++i) {
        std::cout << result[i] << " ";
    }

    delete[] arr;
    return 0;
}