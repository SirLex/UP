
#include <iostream>
using namespace std;
int main()
{
	int a, b; cin >> a >> b;
	int temp;
	if (a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b; i++)
	{
		bool isSimple = true;
		if (i == 1)
		{
			isSimple = false;
		}
		for (int j = 2; j < i; j++)
		{
			if (i% j ==0)
			{
				isSimple = false;
			}
		}
		if (isSimple)
		{
			cout << i << " ";
		}
	}
}
