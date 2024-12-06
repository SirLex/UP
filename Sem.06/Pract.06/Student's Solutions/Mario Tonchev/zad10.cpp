#include <iostream>
using namespace std;

int ChangeBitAt(int n, int p, int b) {
	int mask = 1 << p;

	if (b == 1)
	{
		return n | mask;
	}
	else if (b == 0)
	{
		return n & ~mask;
	}

}

int main()
{
	int number = 0;
	int p = 0;
	int b = 0;

	cin >> number >> p >> b;

	cout << ChangeBitAt(number, p, b);
}