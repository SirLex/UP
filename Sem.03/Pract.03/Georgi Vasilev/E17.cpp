#include <iostream>
using namespace std;
int main()
{
	int num; cin >> num;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		for (int z = 0; z < num + (num - i) * 4; z++)
		{
			if (i == num)
			{
				cout << "-";
			}
			else 
			{
				cout << " ";
			}
		}
		for (int m = i; m >= 1; m--)
		{
			cout << " " << m;
		}
		cout << endl;
	}

	for (int i = num-1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j << " ";
		}
		for (int z = 0; z < num + (num - i) * 4; z++)
		{
				cout << " ";
		}
		for (int m = i; m >= 1; m--)
		{
			cout << " " << m;
		}
		cout << endl;
	}
}



