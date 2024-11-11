#include <iostream>
using namespace std;

const int CAPACITY = 1000;

void enterNumber(int& n) {
    do {
        cout << "Enter n [1;  " << CAPACITY << "]: ";
        cin >> n;
    } while (n < 1 || 1000 < n);
}

void enterArray(int arr[], const int SIZE) {
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
}

double findAverage(int arr[], const int SIZE) {
    double average = 0;
    for (int i = 0; i < SIZE; i++)
    {
        average += arr[i];
    }
 
    average /= (SIZE * 1.0);
    
    return average;
}

int abs1(int a) {
    return a < 0 ? (-1) * a : a;
}

double findClosestNumber(int arr[], const int SIZE, double searchedValue) {
    double minDifference = abs1(arr[0] - searchedValue);
    int result = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if (abs1(arr[i] - searchedValue) < minDifference) {
            minDifference = abs1(arr[i] - searchedValue);
            result = arr[i];
        }
    }

    return result;
}

void averageAndClosestNumber(int arr[], const int SIZE, double& average, double& closestNum) {
    average = findAverage(arr, SIZE);
    closestNum = findClosestNumber(arr, SIZE, average);
}

int main()
{
    int n;
    enterNumber(n);

    int arr[CAPACITY];

    enterArray(arr, n);

    double average, closestNum;
    averageAndClosestNumber(arr, n, average, closestNum);

    cout << "Average: " << average << "\nClosest Num: " << closestNum << endl;

}