#include <iostream>
using namespace std;

int changeLastOneBit(int num) {
	return num & (num - 1);
}

int main()
{
	int n;
	cin >> n;
	cout << changeLastOneBit(n) << endl;
}