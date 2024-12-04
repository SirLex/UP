#include <iostream>
using namespace std;

int ChangeLastOneBitInNumber(int number) {
	return number ^ (number & -number);
}

int main()
{
	int number = 0;
	cin >> number;

	cout << ChangeLastOneBitInNumber(number);
}