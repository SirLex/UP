#include <iostream>
using namespace std;

double fabs(double num);

int abs(int num)
{
	return fabs(num);
}

double fabs(double num)
{
	return num >= 0
		? num
		: - 1 * num;
}

int main()
{
	int integer;
	double floatingNum;
	cin >> integer >> floatingNum;

	cout << abs(integer) << endl << fabs(floatingNum);

	return 0;
}
