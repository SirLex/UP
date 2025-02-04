#include <iostream>
using namespace std;

const int SIZE = 10;

int minOfArr(int arr[], int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

int maxOfArr(int arr[], int size) {
	int max = arr[0];
	for (int i = 1; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

void readArray(int arr[], int size) {
	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

int main(){
	int size;
	int arr[SIZE];

	cout << "Enter size of the array:";
	cin >> size;

	readArray(arr, size);

	cout << "Min: " << minOfArr(arr, size) << endl;
	cout << "Max: " << maxOfArr(arr, size);
 return 0;
}