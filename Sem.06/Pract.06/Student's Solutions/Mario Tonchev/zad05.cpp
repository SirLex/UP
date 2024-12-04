#include <iostream>
using namespace std;

int CountBits(int number) {

	int bits = 0;

	while (number > 0) {
		bits++;
		number /= 2;
	}
	return bits;
}

bool IsKBinaryFoundInNBinary(int n, int k) {
	int kBitsCount = CountBits(k);
	int mask = (1 << kBitsCount) - 1;

	while (n >= k)
	{
		if ((n & mask) == k)
		{
			return true;
		}

		n >>= 1;
	}

	return false;
}

int main()
{
	int number = 0;
	int k = 0;
	cin >> number >> k;

	cout << IsKBinaryFoundInNBinary(number, k);
}