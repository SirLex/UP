#include <iostream>
using namespace std;

const int CAPACITY = 1000;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int enterNumber() {
    int size;

    do {
        cout << "Enter n [1;  " << CAPACITY << "]: ";
        cin >> size;
    } while (size < 1 || CAPACITY < size);
    
    return size;
}

void enterArray(int arr[], const int SIZE) {
    cout << "Enter array: ";
    for (int i = 0; i < SIZE; i++)
    {
        cin >> arr[i];
    }
}

int enterIndex(int size) {
    int index;

    do {
        cout << "Enter index [1, " << size << "]: ";
        cin >> index;
    } while (index < 1 || size < index);

    return index;
}

void removeAtIndex(int arr[], int index, int& size) {
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main()
{
    int size;
    size = enterNumber();

    int arr[CAPACITY];

    enterArray(arr, size);

    int index = enterIndex(size);
    removeAtIndex(arr, index - 1, size);

    printArray(arr, size);
    
}