#include <iostream>
using namespace std;

int binarySearchInArray(int el, int arr[], int n) {
	int left = 0, right = n-1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] == el)
		{
			return mid;
		}
		if (arr[mid] > el)
		{
			right = mid-1;
		}
		else {
			left = mid+1;
		}
	}
	return -1;
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

	cout << binarySearchInArray(4, arr, 10);
	
}
