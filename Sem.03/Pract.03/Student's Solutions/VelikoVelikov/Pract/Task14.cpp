#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	if (n == 0)
		cout << false;
	else
	{
		while (n != 0)
		{
			if (n % 2 == 1 && n > 1)
			{
				cout << false;
				return 0;
			}
			n /= 2;
		}
		cout << true;
	}
}