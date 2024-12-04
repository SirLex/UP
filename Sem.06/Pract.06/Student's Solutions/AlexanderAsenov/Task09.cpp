#include <iostream>
using namespace std;

const int KEY = 51926;

int toggleCodeNumber(int num) {
	return num ^ KEY;
}

int main()
{
	int n;
	cin >> n;
	cout << toggleCodeNumber(n)<< endl;
}