#include <iostream>
using namespace std;

int findInArray(int a, int arr[]) {
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == a)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	cout << findInArray(4, arr);
	
}
