#include <iostream>
using namespace std;

int returnNumberOfOnesInBinary(int num) {
	int count = 0;
	while (num != 0) {
		if (num & 1) {
			count++;
		}
		num = num >> 1;
	}

	return count;
}

int main()
{
	int n;
	cin >> n;
	cout << returnNumberOfOnesInBinary(n) << endl;
}