#include <cmath>
double avg(int arr[], int capacity, int& clst) {
	double avg = 0;
	for (int i = 0; i < capacity; i++)
	{
		avg += arr[i];
	}
	avg /= capacity;
	double diff = abs(arr[0] - avg);
	clst = arr[0];
	for (int i = 1; i < capacity; i++)
	{
		int currDiff = abs(arr[i] - avg);
		if (currDiff < diff)
		{
			diff = currDiff;
			clst = arr[i];
		}
	}
	return avg;
}