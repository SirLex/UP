
#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;

	int i = 1;
	bool isPowerOfTwo = false;
	while (n >= i)
	{
		if (n == i)
		{
			isPowerOfTwo = true;
		}
		i *= 2;
	}
	if (isPowerOfTwo)
	{
		cout << "True";
	}
	else {
		cout << "False";
	}
}

