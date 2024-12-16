#include <iostream>
using namespace std;

int getNumLength(int num) {
	int count = 0;
	
	do {
		count++;
		num /= 10;
	} while (num > 0);

	return count;
}

void ConvertNum(long& num) {
	long result = 0;

	bool isNegative = false;
	if (num < 0) {
		num *= (-1);
		isNegative = true;
	}


	int numLength = getNumLength(num);

	

	long power = 1;
	for (int i = 1; i < numLength; i++)
	{
		power *= 10;
	}

	while (num != 0) {
		int digit = num % 10;
		num /= 10;

		result += power * digit;
		power /= 10;
	}

	if (isNegative) {
		result *= -1;
	}

	num = result;
}

int main()
{
	long n = -123456789;
	ConvertNum(n);
	cout << n << endl;
}