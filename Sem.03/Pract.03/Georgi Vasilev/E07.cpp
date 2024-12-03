#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;

	int totalSum = 0;
	int currentSum = 0;
	for (int i = 1; i <= n; i++)
	{
		totalSum += i;
	}

	for (int i = 0; i < n-1; i++)
	{
		int num; cin >> num;
		currentSum += num;
	}

	cout << "Missing number: " << totalSum - currentSum;
}