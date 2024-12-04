#include <iostream>
using namespace std;

int ToggleBitAt(int n, int p) {
	int mask = 1 << p;

	return n ^ mask;
}

int main()
{
	int number = 0;
	int p = 0;

	cin >> number >> p;

	cout << ToggleBitAt(number, p);
}