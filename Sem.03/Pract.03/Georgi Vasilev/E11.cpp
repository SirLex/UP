#include <iostream>
using namespace std;
int main()
{
	int n; cin >> n;
	int t1 = 1; int t2 = 1; int nextTerm = t1+t2;

	cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";
	while (nextTerm <= n)
	{
		cout << nextTerm << ", ";
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
}
