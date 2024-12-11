#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	char symbol; cin >> symbol;
	if (n > 9 || n < 2)
	{
		cout << "Invalid input!";
		return 0;
	}
	for (int i = 1; i <=n; i++)
	{
		for (int k = 1; k <= n - i; k++)
		{
			cout << " ";
		}
		for (int k = 0; k < i * 2 - 1; k++)
		{
			cout << symbol;
		}
		cout << endl;
	}
	for (int i = n-1; i >= 1; i--)
	{
		for (int k = 1; k <= n - i; k++)
		{
			cout << " ";
		}
		for (int k = 0; k < i * 2 - 1; k++)
		{
			cout << symbol;
		}
		cout << endl;
	}
}