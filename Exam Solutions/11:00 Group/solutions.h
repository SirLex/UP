#pragma once
#include <iostream>

using namespace std;

// 1.

int* toDigitArr(long number, int& arrSize) {
	if (number == 0) {
		arrSize = 1;
		return new int[1] {0};
	}

	long numberCopy = number;
	arrSize = 0;

	while (numberCopy) {
		arrSize++;
		numberCopy /= 10;
	}

	int* digitArr = new int[arrSize];
	for (size_t i = 0; i < arrSize; i++) {
		digitArr[arrSize - i - 1] = number % 10;
		number /= 10;
	}

	return digitArr;
}

bool isMonotonic(const int* arr, int arrSize, int skipInd) {
	if (!arr) return false;
	if (arrSize == 1) return true;

	bool isMonotonicUp = true;
	bool isMonotonicDown = true;

	int zeroIndexShift = skipInd == 0 ? 1 : 0;

	int prevNumber = arr[0 + zeroIndexShift];
	for (size_t i = 1 + zeroIndexShift; i < arrSize; i++) {
		if (i == skipInd) continue;

		if (arr[i] < prevNumber) {
			isMonotonicUp = false;
		} else if (arr[i] > prevNumber) {
			isMonotonicDown = false;
		}

		prevNumber = arr[i];
	}

	return isMonotonicUp || isMonotonicDown;
}

bool checkNum(long number) {
	int digitArrSize = 0;
	int* digitArr = toDigitArr(number, digitArrSize);

	const int NEEDED_SIZE_FOR_CHECK = 3;
	if (digitArrSize < NEEDED_SIZE_FOR_CHECK) return true;

	for (size_t i = 0; i < digitArrSize; i++) {
		if (isMonotonic(digitArr, digitArrSize, i)) {
			delete[] digitArr;
			return true;
		}
	}

	delete[] digitArr;
	return false;
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

bool isDigit(char ch) {
	return ch >= '0' && ch <= '9';
}

bool isAllDigits(const char* str) {
	if (!str) return false;

	while (*str) {
		if (!isDigit(*str)) return false;

		str++;
	}

	return true;
}

int toDigit(char ch) {
	if (isDigit(ch)) return ch - '0';

	return -1;
}

int smallestNumber(int num1, int num2, int num3) {
	if (num1 <= num2 && num1 <= num3) return num1;
	if (num2 <= num1 && num2 <= num3) return num2;
	return num3;
}

int largestNumber(int num1, int num2, int num3) {
	if (num1 >= num2 && num1 >= num3) return num1;
	if (num2 >= num1 && num2 >= num3) return num2;
	return num3;
}

void mySwap(int& num1, int& num2) {
	num1 ^= num2;
	num2 ^= num1;
	num1 ^= num2;
}

int findNumber(const char* str) {
	if (!str) return -1;

	const int NEEDED_LEN = 3;
	int strLen = myStrlen(str);

	if (strLen != NEEDED_LEN) return -2;
	if (!isAllDigits(str)) return -3;

	int digit1 = toDigit(str[0]);
	int digit2 = toDigit(str[1]);
	int digit3 = toDigit(str[2]);

	if (digit1 + digit2 + digit3 == 0) return -4;

	int smallestDigit = smallestNumber(digit1, digit2, digit3);
	int largestDigit = largestNumber(digit1, digit2, digit3);
	int middleDigit = (digit1 + digit2 + digit3) - (smallestDigit + largestDigit);

	int sortedDigits[NEEDED_LEN]{ smallestDigit, middleDigit, largestDigit };

	if (sortedDigits[0] == 0) {
		for (size_t i = 1; i < NEEDED_LEN; i++) {
			if (sortedDigits[i] != 0) {
				mySwap(sortedDigits[0], sortedDigits[i]);
				break;
			}
		}
	}

	int smallestPalindrome = 0;
	int lastDifferentDigitInd = 0;

	for (size_t i = 0; i < NEEDED_LEN; i++) {
		smallestPalindrome = smallestPalindrome * 10 + sortedDigits[i];

		if (sortedDigits[lastDifferentDigitInd] != sortedDigits[i]) {
			lastDifferentDigitInd = i;
		}
	}

	for (int i = lastDifferentDigitInd - 1; i >= 0; i--) {
		smallestPalindrome = smallestPalindrome * 10 + sortedDigits[i];
	}

	return smallestPalindrome;
}

// 3.

int* spiralRead(const int* const* matrix, size_t rows, size_t cols) {
	if (!matrix) return nullptr;

	int* result = new int[rows * cols];
	int resultNextFreeInd = 0;

	const int MATRIX_SIDES_COUNT = 4;
	int constraints[MATRIX_SIDES_COUNT]{ rows - 1, cols - 1, 0, 0 };

	while (constraints[0] > constraints[2] && constraints[1] > constraints[3]) {
		for (int i = constraints[3]; i <= constraints[1]; i++) {
			result[resultNextFreeInd++] = matrix[constraints[0]][i];
		}
		constraints[0]--;
		for (int i = constraints[0]; i >= constraints[2]; i--) {
			result[resultNextFreeInd++] = matrix[i][constraints[1]];
		}
		constraints[1]--;
		for (int i = constraints[1]; i >= constraints[3]; i--) {
			result[resultNextFreeInd++] = matrix[constraints[3]][i];
		}
		constraints[2]++;
		for (int i = constraints[2]; i <= constraints[0]; i++) {
			result[resultNextFreeInd++] = matrix[i][constraints[3]];
		}
		constraints[3]++;
	}

	return result;
}
