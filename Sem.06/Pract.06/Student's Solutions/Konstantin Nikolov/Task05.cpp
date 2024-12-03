#include <iostream>
using namespace std;

bool isPartOf(int num1, int num2)
{
	int xorResult = num1 ^ num2;
	return (num2 & xorResult) == 0;
}

int main()
{
	cout << isPartOf(15, 3);
}