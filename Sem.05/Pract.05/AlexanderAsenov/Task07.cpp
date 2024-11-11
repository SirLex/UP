#include <iostream>
using namespace std;

const int CAPACITY = 1000;

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

int findLongestEqualNumbersSequenceLength(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    int maxEqualNumbersSequenceLength = 1;
    int currentEqualNumbersSequenceLength = 1;
    for (int i = 1; i < size; i++)
    {
        if (arr[i - 1] == arr[i]) {
            currentEqualNumbersSequenceLength++;
            if (maxEqualNumbersSequenceLength < currentEqualNumbersSequenceLength) {
                maxEqualNumbersSequenceLength = currentEqualNumbersSequenceLength;
            }
        }
        else {
            currentEqualNumbersSequenceLength = 1;
        }
    }

    return maxEqualNumbersSequenceLength;
}

int main()
{
    int size;
    size = enterNumber();

    int arr[CAPACITY];
    enterArray(arr, size);

    cout << findLongestEqualNumbersSequenceLength(arr, size) << endl;
}