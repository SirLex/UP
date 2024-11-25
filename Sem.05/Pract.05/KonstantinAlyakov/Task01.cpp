#include <iostream>
#include <cmath>

using namespace std;

void calculateAverageAndClosest(int arr[], int size, double& average, int& closest) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    average = (sum * 1.0) / size;

    closest = arr[0];
    double minDifference = abs(arr[0] - average);

    for (int i = 1; i < size; i++) {
        double currentDifference = abs(arr[i] - average);
        if (currentDifference < minDifference) {
            minDifference = currentDifference;
            closest = arr[i];
        }
    }
}

int main() {
   const int size = 4;

    int arr[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    double average;
    int closest;

    calculateAverageAndClosest(arr, size, average, closest);

    cout << "Average: " << average << endl;
    cout << "Closest element to the average: " << closest << endl;

    return 0;
}
