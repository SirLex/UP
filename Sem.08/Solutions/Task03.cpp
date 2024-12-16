void ConvertNum(long& num) {
	long numCopy = 0;

	while (num) {
		numCopy *= 10;
		numCopy += num % 10;
		num /= 10;
	}

	num = numCopy;
}