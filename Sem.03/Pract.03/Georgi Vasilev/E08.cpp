#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n; cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
		{
			for (int z = j; z <= n; z++)
			{
				if ((z * z) == (j * j) + (i * i))
				{
					cout << "a:" << i << " b:" << j << " c:" << z << endl;;
				}
			}
		}
	}
}
