#include <iostream>
using namespace std;

void bubbleSortArray(int arr[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++) {
			if (arr[i] < arr[j])
			{
				int c = arr[i];
				arr[i] = arr[j];
				arr[j] = c;
			}
		}
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
	int arr[10] = {1,42,45,23,436,65,87,234,132,0};

	bubbleSortArray(arr, 10);
	
	printArray(arr, 10);
}
