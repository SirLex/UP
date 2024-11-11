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

double findMinOrMaxValue(int arr[], const int SIZE, bool isFindingMin = true) {
    int result = arr[0];
    for (int i = 1; i < SIZE; i++)
    {
        if ((arr[i] < result) == isFindingMin) {
            result = arr[i];
        }
    }

    return result;
}

double findMax(int arr[], const int SIZE) {
    return findMinOrMaxValue(arr, SIZE, false);
}

double findMin(int arr[], const int SIZE) {
    return findMinOrMaxValue(arr, SIZE);
}

int main()
{
    int n;
    enterNumber(n);

    int arr[CAPACITY];

    enterArray(arr, n);

    cout << "Min: " << findMin(arr, n) << endl;
    cout << "Max: " << findMax(arr, n) << endl;
}