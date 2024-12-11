#include <iostream>

using namespace std;

int main()
{
	int a, b; cin >> a >> b;

	bool check;

	if (b < a)
	{
		a += b;
		b = a - b;
		a = a - b;
	}

	for (int i = a; i <= b; i++)
	{
		check = true;
		for (int k = 2; k < i; k++)
		{
			if (i % k == 0 || i == 1)
			{
				check = false;
				break;
			}
		}
		if (check)
		{
			cout << i << " ";
		}

	}
}