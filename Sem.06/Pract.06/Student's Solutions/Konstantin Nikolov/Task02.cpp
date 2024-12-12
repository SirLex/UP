#include <iostream>
using namespace std;

int onesCount(int number)
{
	int count = 0;
	while (number > 0)
	{
		if (number & 1)
		{
			count++;
		}
		number >>= 1;
	}
	return count;
}

int main()
{
	cout << onesCount(189);
}