#include <iostream>
using namespace std;

int descending(int arr[], int n) {
	if (arr == NULL)
	{
		return -1;
	}

	int longest = 0;
	int current = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[i-1])
		{
			current++;
		}
		else {
			current = 0;
		}

		if (longest < current)
		{
			longest = current;
		}
	}
	return longest;
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

	cout<<descending(arr, n);
}
