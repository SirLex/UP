#include <iostream>
using namespace std;

int getLastKBits(int number, int k)
{
	int mask = (1 << k) - 1;
	return number & mask;
}

int main()
{
	cout << getLastKBits(189, 4);
}