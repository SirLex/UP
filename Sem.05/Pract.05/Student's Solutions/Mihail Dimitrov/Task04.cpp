#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void elementsInRange(int arr[], int n, int result[], int a, int b) {

	if (arr == NULL)
	{
		return;
	}

	int j = 0;

	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= a && arr[i] <= b)
		{
			result[j] = arr[i];
			j++;
		}
	}

	printArray(result, j);
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
	int result[1000]{};
	int a, b;
	cin >> a >> b;

	printArray(arr, n);

	elementsInRange(arr, n, result, a, b);
}
