#include <iostream>
using namespace std;

void minMax(int arr[], int capacity, int& min, int& max) {
	min = arr[0];
	max = arr[0];
	for (int i = 1; i < capacity; i++)
	{
		if (min > arr[i]) min = arr[i];
		if (max < arr[i]) max = arr[i];
	}
	cout << "Min: " << min << endl << "Max: " << max;
}