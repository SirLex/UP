#include <iostream>
using namespace std;
int main()
{
	int n;
	while (true)
	{
		cin >> n;
		if (n >= 0 && n <= 100)
		{
			break;
		}
	}

	int c;
	int cnt = 0;
	while (true)
	{
		cin >> c;
		cnt++;
		if (c > n)
		{
			cout << "Въведеното число е по-голямо от даденото";
		}
		else if (c < n)
		{
			cout << "Въведеното число е по-малко от даденото";
		}
		else {
			cout << "Позна!\n";
			cout << "Брой опити направени " << cnt;
			break;
		}
	}
}
