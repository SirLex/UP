#include <iostream>
using namespace std;

int FindNumberFormedByKLastBits(int number, int k) {
	int mask = (1 << k) - 1;

	return number & mask;
}

int main()
{
	int number = 0;
	int k = 0;
	cin >> number >> k;

	cout << FindNumberFormedByKLastBits(number, k);
}