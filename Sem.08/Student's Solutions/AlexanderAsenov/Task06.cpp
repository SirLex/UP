#include <iostream>
using namespace std;

int getNumLength(long num) {
	int count = 0;

	do {
		num /= 10;
		count++;
	} while (num > 0);

	return count;
}

int getDigit(long num, int k) {
	int length = getNumLength(num);
	for (int i = 0; i < length - k; i++)
	{
		num /= 10;
	}

	return num % 10;
}

int NumCalc(long num, int k, int l) {
	int length = getNumLength(num);

	if (k > length || l > length) {
		return -1;
	}

	return getDigit(num, k) + getDigit(num, l);
}

int main()
{
	long num;
	int k, l;
	cin >> num >> k >> l;

	cout << NumCalc(num, k, l) << endl;
}