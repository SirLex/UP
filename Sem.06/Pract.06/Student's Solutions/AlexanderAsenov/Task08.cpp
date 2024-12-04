#include <iostream>
using namespace std;

const int SIZEOFBYTE = 8;

int removeBits(int num, int pos, int numOfBits) {
	unsigned int leftBits = num << (sizeof(int) * SIZEOFBYTE - pos - 1);
	leftBits = leftBits << numOfBits;
	leftBits = leftBits >> numOfBits;
	leftBits = leftBits >> (sizeof(int) * SIZEOFBYTE - pos - 1);
	
	num = num >> (pos + 1);
	num = num << (pos - numOfBits + 1);
	num += leftBits;

	return num;
}

int main()
{
	int x, m, n;
	cin >> x >> m >> n;
	//m--;
	cout << removeBits(x, m, n);
}