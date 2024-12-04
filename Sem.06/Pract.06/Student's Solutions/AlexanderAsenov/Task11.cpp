#include <iostream>
using namespace std;

int toggleBit(int num, int pos) {
	int mask = 1 << pos;
	return num ^ mask;
}


int main()
{
	int n, p;
	cin >> n >> p;
	cout << toggleBit(n, p) << endl;
}