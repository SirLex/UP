#include <iostream>

using namespace std;

void findMinAndMax(int arr[], int size, int& min, int& max) {
    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    const int SIZE = 9;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    int min, max;

    findMinAndMax(arr, SIZE, min, max);

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}
