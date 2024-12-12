#include <iostream>
using namespace std;
int main()
{
	int n;

	while (true)
	{
		cin >> n;
		if (n >= 2 && n <= 9)
		{
			break;
		}
	}
	char s; cin >> s;

	for (int i = 1; i <= n; i++)
	{
		for (int z = n * 2 - 1; z > i; z--)
		{
			cout << " ";
		}
		for (int j = 1; j <= i * 2 - 1; j++)
		{
			cout << s;
		}
		cout << endl;
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int z = i; z <= n * 2 - 2; z++)
		{
			cout << " ";
		}
		for (int j = i*2-2; j >= 0; j--)
		{
			cout << s;
		}
		cout << endl;
	}
}


