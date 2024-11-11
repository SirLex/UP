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

void findInInterval(int arr[], int result[], int a, int b, int sizeArr, int& sizeResult) {
    for (int i = 0, j = 0; i < sizeArr; i++)
    {
        if (a <= arr[i] && arr[i] <= b) {
            result[j] = arr[i];
            sizeResult++;
            j++;
        }
    }
}

int main()
{
    int size;
    size = enterNumber();

    int arr[CAPACITY];
    enterArray(arr, size);

    int a, b;
    cout << "Enter numbers a and b: ";
    cin >> a >> b;

    int result[CAPACITY];
    int sizeResult = 0;
    findInInterval(arr, result, a, b, size, sizeResult);
    printArray(result, sizeResult);
}