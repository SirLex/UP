// UP_Sem_6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

const int n = 1000;

double averageArr(int arr[], int n) {
	if (arr == NULL) {
		return;
	}
	double average = 0;
	for (int i = 0; i < n;i++) {
		average += arr[i];
	}

	average /= n;
	return average;

	
	
}
int closestToAverage(int arr[],int n) {
	double average = averageArr(arr,n);
	int closestToAverage = arr[0];
	for (int j = 0; j < n; j++) {
		if (abs(average - arr[j]) < abs(average - closestToAverage)) {
			closestToAverage = arr[j];
		}
	}
	
	return closestToAverage;
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
	cout<<"Average:" <<averageArr(arr, n)<<endl;
	cout << "Closest To Average element:" << closestToAverage(arr, n)<<endl;

}
