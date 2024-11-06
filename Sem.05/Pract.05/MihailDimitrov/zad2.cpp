#include <iostream>
using namespace std;

void minAndMax(int arr[], int n) {

	if (arr == NULL)
	{
		return;
	}

	int max = arr[0], min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}else if (min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << min << " " << max;
}

int main()
{
	int n;
	cin >> n;

	int arr[1000];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	minAndMax(arr, n);
}
