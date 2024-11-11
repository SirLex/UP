#include <iostream>
#include "input.h"

int mostCommonNumInArr(int* arr, int arrSize) {
    int mostCommonNum = 0, mostCommonNumCount = 0;

    for (int i = 0; i < arrSize; ++i) {
        if (arr[i] == mostCommonNum) continue;
        int currNumCount = 0;
        for (int j = 0; j < arrSize; ++j) {
            if (arr[i] == arr[j]) currNumCount++;
        }
        if (currNumCount > mostCommonNumCount) {
            mostCommonNum = arr[i];
            mostCommonNumCount = currNumCount;
        }
    }

    return mostCommonNum;
}

int main() {
    int arrSize;
	int* arr = inputArray(arrSize);
    std::cout << mostCommonNumInArr(arr, arrSize);
    delete[] arr;
    return 0;
}