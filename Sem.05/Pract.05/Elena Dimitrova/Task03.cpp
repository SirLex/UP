#include <iostream>
using namespace std;

const int SIZE = 100;

void deleteIndex(int arr[SIZE], int size, int index) {
    int newSize = size - 1;
    for (int i = 0; i < newSize; i++) {
        if (i >= index) {
            arr[i] = arr[i + 1];
        }
    }
    for (int j = 0; j < newSize; j++) {
        cout << arr[j] << " ";
    }
}

int main() {
    int arr[SIZE];
    int index;
    int size;

    cout << "Enter size of array:";
    cin >> size;

    cout << "Enter array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter index to delete:";
    cin >> index;

    deleteIndex(arr, size, index);
    return 0;
}