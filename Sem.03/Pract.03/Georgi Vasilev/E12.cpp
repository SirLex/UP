#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;

	int digitCount = 0;

	int temp = n;
	while (temp != 0)
	{
		temp /= 10;
		digitCount++;
	}

	int result = 0;
	int pow = 1;
	if (digitCount % 2 == 0)
	{
		for (int i = 1; i <= digitCount; i++)
		{
			if (i == digitCount / 2 || i == digitCount / 2 + 1)
			{
				n /= 10;
				continue;
			}
			result += (n % 10) * pow;
			n /= 10;
			pow *= 10;
		}
		pow = 1;
	}
	else {
		for (int i = 1; i <= digitCount; i++)
		{
			if (i == digitCount / 2 + 1)
			{
				n /= 10;
				continue;
			}
			
			
			result += (n % 10) * pow;
			n /= 10;
			pow *= 10;
		}
	}

	cout << result << " ";
	result++;
	cout << result;
}

