int numLen(long num) {
	if (num == 0) return 1;

	int len = 0;
	while (num) {
		num /= 10;
		len++;
	}

	return len;
}

void swap(int& a, int& b) {
	a ^= b;
	b ^= a;
	a ^= b;
}

char digitToChar(int digit) {
	if (digit >= 0 && digit <= 9) {
		return digit + '0';
	}

	return -1;
}

int numToStr(long num, char* str) {
	if (str == nullptr) return -1;

	int numlen = numLen(num);

	while (num != 0) {
		*str = digitToChar(num % 10);
		str++;
		num /= 10;
	}
}

int charToDigit(char ch) {
	if (ch >= '0' && ch <= '9') {
		return ch - '0';
	}

	return -1;
}

int NumCalc(long num, int k, int l) {
	int numlen = numLen(num);

	if (k < 1 || k > numlen || l < 1 || l > numlen) return -1;

	if (k > l) swap(k, l);

	const int LONG_MAX_LEN = 10;
	char numStr[LONG_MAX_LEN] = { 0 };

	numToStr(num, numStr);

	return charToDigit(numStr[numlen - k]) + charToDigit(numStr[numlen - l]);
}