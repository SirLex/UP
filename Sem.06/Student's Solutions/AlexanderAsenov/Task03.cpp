#include <iostream>
using namespace std;

int toggleLastOne(int num) {
	return num & (num - 1);
}

int main()
{
	int num;
	cin >> num;
	cout << toggleLastOne(num) << endl;
}