#include <iostream>

using namespace std;

void filterInRange(int arr[], int size, int result[], int& resultSize, int a, int b) {
    resultSize = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] >= a && arr[i] <= b) {
            result[resultSize++] = arr[i];
        }
    }
}

int main() {
    const int SIZE = 7;
    int arr[SIZE] = { 5, 7, 1, 4, 3, 9, 10 };
    int result[SIZE];
    int resultSize; 

    int a, b;
    cout << "Enter the range [a, b]: ";
    cin >> a >> b;

    filterInRange(arr, SIZE, result, resultSize, a, b);

    cout << "Filtered array: ";
    for (int i = 0; i < resultSize; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
