#include <iostream>
using namespace std;
void symmetry(int arr [], int size) {
	for (int i = 0; i <= size/2; i++)
	{
		if (arr[i] != arr[size - i - 1])
		{
			cout << "no";
			return;
		}
	}
	cout << "yes";
}