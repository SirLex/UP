
#include <iostream>

using namespace std;

int main()
{
	int n; cin >> n;
	int k = 0;
	while (n != 0)
	{
		k = k * 10 + n % 10;
		n /= 10;
	}
	k++;
	cout << k;
}
