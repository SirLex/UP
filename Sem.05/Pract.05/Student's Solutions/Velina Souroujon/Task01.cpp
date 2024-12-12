#include <iostream>
using namespace std;

const int CAPACITY = 1000;

double fabs(double num)
{
	return num >= 0
		? num
		: -1 * num;
}

void readArray(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return;
	}

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

double getAverage(int arr[], int size)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return -1;
	}

	double average = 0;

	for (int i = 0; i < size; i++)
	{
		average += arr[i];
	}

	average /= size;

	return average;
}

double getClosestToAverage(int arr[], int size, double& average)
{
	if (arr == NULL)
	{
		cout << "Array cannot be null!";
		return -1;
	}

	average = getAverage(arr, size);

	double closestToAverage = arr[0];
	double minAbs = fabs(arr[0] - average);

	for (int i = 1; i < size; i++)
	{
		double currentAbs = fabs(arr[i] - average);

		if (minAbs > currentAbs)
		{
			minAbs = currentAbs;
			closestToAverage = arr[i];
		}
	}

	return closestToAverage;
}

int main()
{
	int arr[CAPACITY];

	int size;
	cin >> size;

	readArray(arr, size);

	double average = 0;
	int closestToAvg = getClosestToAverage(arr, size, average);

	cout << average << endl;
	cout << closestToAvg << endl;

	return 0;
}