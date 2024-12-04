#include <iostream>
using namespace std;

int toggleBit(int num, int pos) {
	int mask = 1 << pos;
	return num ^ mask;
}

int changeBit(int num, int pos, int bitValue) {
	
	int bit = ((num >> pos) & 1);
	
	if (bit == bitValue) {
		return num;
	}

	return toggleBit(num, pos);
}

int main()
{
	int n, p, b;
	cin >> n >> p >> b;
	cout << changeBit(n, p, b);
}