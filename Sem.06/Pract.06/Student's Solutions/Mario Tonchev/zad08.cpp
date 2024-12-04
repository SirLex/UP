#include <iostream>
using namespace std;

int GetBitsAt(int x, int m, int n) {
	int mask = (1 << n) - 1;

	int shiftAmount = m - (n - 1);
	int shiftedX = x >> shiftAmount;

	return shiftedX & mask;
}

int main()
{
	int number = 0;
	int m = 0;
	int n = 0;
	cin >> number >> m >> n;

	cout << GetBitsAt(number, m, n);
}