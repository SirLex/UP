#include <iostream>
using namespace std;

int getSingleElement(int arr[], int count)
{
	int result = 0;
	for (int i = 0; i < count; i++)
	{
		result ^= arr[i];
	}
	return result;
}

int main()
{
	int arr[] = { 12, 12, 15, 6, 15 };
	cout << getSingleElement(arr, 5);
}