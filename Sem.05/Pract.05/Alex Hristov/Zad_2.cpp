#include <iostream>

using namespace std;

const int n = 1000;

int maxEl(int a[], int n) {
	
	int max = a[0];
	for (int i = 1; i < n;i++) {
		if (a[i]>max) {
			max = a[i];
		}
		
	}
	return max;
}
int minEl(int a[], int n) {
	int min = a[0];
	
	for (int i = 1; i < n; i++) {
		
		if (a[i] < min) {
			min = a[i];
		}
	}
	return min;
}

int main()
{
	int n;
	cout << "Enter length of arr:";
	cin >> n;
	
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "Min element:" << minEl(arr, n)<<endl;
	cout << "Max element:" << maxEl(arr, n)<<endl;


}
