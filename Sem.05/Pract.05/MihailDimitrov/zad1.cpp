#include <iostream>
using namespace std;

void average(int arr[], int n) {
	double average = 0;
	for (int i = 0; i < n; i++)
	{
		average += arr[i];
	}
	average /= n;
	cout << average << endl;
	int closest = arr[0];

	for (int i = 1; i < n; i++)
	{
		if (abs(average - arr[i]) < abs(average - closest)) {
			closest = arr[i];
		}
	}

	cout << closest;

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

	average(arr, n);
}
