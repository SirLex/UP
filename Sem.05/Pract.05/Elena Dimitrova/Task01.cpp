#include <iostream>
using namespace std;

const int SIZE = 1000;

void readArray(int arr[], int size) {
	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}

double averageOfArr(int arr[], int size) {
	double average = 0;
	for (int i = 0; i < size; i++) {
		average += arr[i];
	}
	return average / size;
}

bool custom_abs_diff(int a, int b) {
	if (a >= b){
		return a - b;
	}
	else {
		return b - a;
	}
}

int closestToAvg(int arr[], int size) {
	double average = averageOfArr(arr, size);
	int closest = arr[0];
	for (int i = 1; i < size; i++) {
		if (custom_abs_diff(average, closest) > custom_abs_diff(average, arr[i])) {
			closest = arr[i];
		}
	}
	return closest;
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter a size of the array:";
	cin >> size;

	readArray(arr, size);

	cout << "Average of array:" << averageOfArr(arr, size) << endl;
	cout << "Closest number to average:" << closestToAvg(arr, size);
 return 0;
}