#include <iostream>
using namespace std;

const int SIZE = 1000;

void readArray(int arr[], int size) {
    cout << "Enter array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void deleteAtIndex(int* arr, int& size, int index) {
    int newSize = size - 1;
    for (int i = 0; i < newSize; i++) {
        if (i >= index - 1) {
            arr[i] = arr[i + 1];
        }
        size = newSize;
    }
}

void printArray(int* arr, int& size) {
    for (int j = 0; j < size; j++) {
        cout << arr[j] << " ";
    }
}

int main() {
    int arr[SIZE];
    int index;
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    readArray(arr, size);

    cout << "Enter index to delete: ";
    cin >> index;


    deleteAtIndex(arr, size, index);
    printArray(arr, size);
    return 0;
}