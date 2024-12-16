#include <iostream>
using namespace std;

bool isEven(int num) {
	return !(num & 1);
}

int powerOfTwo(int k) {
	return 1 << k;
}

int clearBit(int num, int bitPos) {
	return num & (~(1 << bitPos));
}

int makeBitOne(int num, int bitPos) {
	return num | (1 << bitPos);
}

int getBitValue(int num, int bitPos) {
	return (num >> bitPos) & 1;
}

int reverse(int num, int bitPos) {
	return num ^ (1 << bitPos);
}

int setBitValue(int num, int bitPos, int bitValue) {
	if (bitValue != 0 && bitValue != 1) {
		return num;
	}

	if (getBitValue(num, bitPos) != bitValue) {
		return reverse(num, bitPos);
	}
	
	return num;
}


int main()
{
}