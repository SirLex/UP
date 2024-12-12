#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int remaindersCount = -1;
	int temp = n;
	while (temp != 0)
	{
		temp /= 2;
		remaindersCount++;
	}

	while (n != 0)
	{
		int remainder = n % 2;
		n /= 2;
		if (remainder == 1)
		{
			cout << "2^" << remaindersCount;
			remaindersCount--;
			if (remaindersCount >= 0)
			{
				cout << " + ";
			}
		}
		else {
			remaindersCount--;
		}
		
	}
}

