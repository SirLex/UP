#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int numSquared = n * n;
	while (numSquared % 10 == 0)
	{
		numSquared /= 10;
	}
	int reversedNum = 0;
	while (numSquared !=0)
	{
		reversedNum *= 10;
		reversedNum += numSquared % 10;
		numSquared /= 10;
	}
	cout << reversedNum;
}
