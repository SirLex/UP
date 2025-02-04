#pragma once
#include <iostream>

using namespace std;

// 1.

double myAbs(double number) {
	return number >= 0 ? number : -number;
}

int findMaxMin(const int* arr, size_t arrSize, int& minVal, int& maxVal) {
	if (!arr) {
		cout << "Error! Array is nullptr." << endl;
		return -1;
	}
	if (arrSize == 0) {
		cout << "Error! Array is empty." << endl;
		return -2;
	}

	double sum = 0;
	minVal = maxVal = arr[0];

	for (size_t i = 0; i < arrSize; i++) {
		int currentElement = arr[i];

		sum += currentElement;

		if (minVal > currentElement) {
			minVal = currentElement;
		}
		if (maxVal < currentElement) {
			maxVal = currentElement;
		}
	}

	double arrayAvg = sum / arrSize;
	int closestToAvg = 0;
	double difference = myAbs(arr[closestToAvg] - arrayAvg);

	for (size_t i = 1; i < arrSize; i++) {
		if (myAbs(arr[i] - arrayAvg) < difference) {
			closestToAvg = i;
			difference = myAbs(arr[i] - arrayAvg);
		}
	}

	return arr[closestToAvg];
}

// 2.

int myStrlen(const char* str) {
	if (!str) return -1;

	int size = 0;
	while (str[size]) {
		size++;
	}

	return size;
}

bool checkStr(const char* str) {
	if (!str) return false;

	const int MIN_STR_LEN = 2;
	int strLen = myStrlen(str);

	if (strLen < MIN_STR_LEN) {
		return false;
	}
	if (strLen == MIN_STR_LEN || strLen == MIN_STR_LEN + 1) {
		return true;
	}

	for (size_t i = 0; i < strLen - 1; i++) {
		for (size_t j = i + 1; j < strLen; j++) {
			int leftPtr = 0, rightPtr = strLen - 1;
			bool foundPalindrome = true;

			while (leftPtr < rightPtr) {
				if (leftPtr == i || leftPtr == j) {
					leftPtr++;
					continue;
				}
				if (rightPtr == i || rightPtr == j) {
					rightPtr--;
					continue;
				}

				if (str[leftPtr] != str[rightPtr]) {
					foundPalindrome = false;
					break;
				}

				leftPtr++;
				rightPtr--;
			}

			if (foundPalindrome) {
				return true;
			}
		}
	}

	return false;
}

// 3.

int toNumber(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}

	const int DIGITS_COUNT = 10;

	if (ch >= 'A' && ch <= 'Z') {
		return ch - 'A' + DIGITS_COUNT;
	}
	if (ch >= 'a' && ch <= 'z') {
		return ch - 'a' + DIGITS_COUNT;
	}

	return -1;
}

int convert(const char* str, int k) {
	if (!str) return -1;

	const int LOWER_BOUND = 2;
	const int UPPER_BOUND = 36;

	if (k < LOWER_BOUND || k > UPPER_BOUND) return -1;

	int strLen = myStrlen(str);
	int baseToCurrentPow = 1;
	int result = 0;

	for (int i = strLen - 1; i >= 0; i--) {
		result += toNumber(str[i]) * baseToCurrentPow;
		baseToCurrentPow *= k;
	}

	return result;
}
