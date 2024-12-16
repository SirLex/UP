#include <iostream>
using namespace std;

int countOnesInBinary(int num) {
	int count = 0;

	while (num > 0) {
		count += num & 1;
		num = num >> 1;
	}

	return count;
}

int main()
{
	int num;
	cin >> num;
	cout << countOnesInBinary(num);
}