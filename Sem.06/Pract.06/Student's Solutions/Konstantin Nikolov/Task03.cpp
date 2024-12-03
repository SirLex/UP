#include <iostream>
using namespace std;

int switchRightmostOne(int number)
{
	int count = 0;
	while ((number & 1) == 0)
	{
		number >>= 1;
		count++;
	}
	number >>= 1;
	number <<= (count+1);
	return number;
}

int main()
{
	cout << switchRightmostOne(12);
}