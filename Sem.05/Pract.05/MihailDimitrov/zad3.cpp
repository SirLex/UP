#include <iostream>
using namespace std;

void removeIndex(int arr[], int n, int idx) {

	if (arr == NULL)
	{
		return;
	}

	for (int i = idx; i < n-1; i++)
	{
		arr[i] = arr[i + 1];
	}
}

void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
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
	int idx;
	cin >> idx;

	printArray(arr, n);

	removeIndex(arr, n, idx-1);

	printArray(arr, n-1);
}
