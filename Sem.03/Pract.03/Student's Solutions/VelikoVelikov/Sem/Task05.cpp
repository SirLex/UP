#include <iostream>

using namespace std;

int main()
{
	int a, b; cin >> a >> b;
	int tempA = a, tempB = b;
	int gcd = 0;

	while (tempB != 0)
	{
		int temp = tempB;
		tempB = tempA % tempB;
		tempA = temp;
	}
	gcd = tempA;

	int lcm = (a * b) / gcd;

	cout << lcm;
}