#include <iostream>
using namespace std;

const int n = 1000;


void removeElement(int arr[], int n, int k) {
	const int capacity = n - 1;
	for (int i = 0; i < n-1;i++) {
		if (i >= k-1) {
			arr[i] = arr[i + 1];
		}
	}
    for (int i = 0; i < capacity; i++) {
		cout << " " << arr[i];
	}

}
int main()
{
	int n, k;
	cout << "Enter length of arr:";
	cin >> n;
	cout << "Enter index:";
	cin >> k;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
    removeElement(arr,n,k);
    return 0;

}
