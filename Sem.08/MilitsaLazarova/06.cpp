#include <iostream>

int getNumLength(int num) {
	int length = 0;
	while (num != 0)
	{
		length++;
		num /= 10;
	}
	return length;
}

int* getNumDigits(int num, int* numDigits, int& arrSize) {
	while (num != 0)
	{
		numDigits[arrSize++] = num % 10;
		num /= 10;
	}
	return numDigits;
}

int NumCalc(long num, int k, int l) {
	if (k < 0 || l < 0) return -1;
	int length = getNumLength(num);
	if (k >= length || l >= length) return -1;

	int numDigits[19] = { 0 };
	int arrSize = 0;
	getNumDigits(num, numDigits, arrSize);

	int kIndex = arrSize - k;
	int lIndex = arrSize - l;
	return numDigits[kIndex] + numDigits[lIndex];
}
int main() {

}