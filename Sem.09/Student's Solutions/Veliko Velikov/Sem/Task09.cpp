#include <iostream>
using namespace std;

void InputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void PrintPowerSet(int* arr, int size) {
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "], ";
}

void GetPowerSet(int* arr, int n) {
    int totalSubsets = (1 << n);
    for (int subsetSize = 1; subsetSize <= n; subsetSize++) {
        for (int mask = 0; mask < totalSubsets; mask++) {
            int* currentSubset = new int[n];
            int currentSize = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    currentSubset[currentSize++] = arr[i];
                }
            }
            if (currentSize == subsetSize) {
                PrintPowerSet(currentSubset, currentSize);
            }
            delete[] currentSubset;
        }
    }
}

int main() {
    int n; cin >> n;
    int* arr = new int[n];

    InputArray(arr, n);
    GetPowerSet(arr, n);
    return 0;

    delete[] arr;
}
