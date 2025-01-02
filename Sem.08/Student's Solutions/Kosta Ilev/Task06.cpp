int lengthNum(int num)
{
	int length = 0;
	while (num != 0)
	{
		length++;
		num /= 10;
	}
	return length;
}

int findDigitOnPositionK(int num, int k)
{
	for (int i = 1; i < k; i++)
	{
		num /= 10;
	}
	return num % 10;
}

int NumCalc(long num, int k, int l)
{
	int length = lengthNum(num);
	if (k <= 0 || k > length || l <= 0 || l > length || num < 0)
	{
		return -1;
	}
	int firstDigit = findDigitOnPositionK(num, k);
	int secondDigit = findDigitOnPositionK(num, l);
	int sum = firstDigit + secondDigit;
	return sum;
}
