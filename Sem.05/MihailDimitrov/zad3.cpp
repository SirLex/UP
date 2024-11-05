#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
	for (int i = 0; i < n/2; i++)
	{
		int c = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = c;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	reverseArray(arr, 10);

	printArray(arr, 10);
	
}
