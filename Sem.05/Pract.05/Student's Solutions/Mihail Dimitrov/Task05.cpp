#include <iostream>
using namespace std;

bool isSymetric(int arr[], int n) {
	if (arr == NULL)
	{
		return false;
	}

	int j = 0;

	for (int i = 0; i < n/2; i++)
	{
		if (arr[i] != arr[n-i-1])
		{
			return false;
		}
	}
	return true;
}


int main()
{
	int n;
	cin >> n;

	int arr[1000]{};

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout<<(isSymetric(arr, n)?"yes" : "no");
}
