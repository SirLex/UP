#include <iostream>
using namespace std;

bool isSubnumberInBinary(int n, int k) {
	if (n == 0) {
		return k == 0;
	}

	while (n != 0) {
		
		if ((n & k) == k) {
			return true;
		}

		n = n >> 1;
	}

	return false;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << isSubnumberInBinary(n, k) << endl;
}