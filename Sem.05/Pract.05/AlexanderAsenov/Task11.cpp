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
        cout << "Enter number [1, " << CAPACITY << "]: ";
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

int linearSearchInArray(int arr[], const int SIZE, int searchedItem, int startIndex = 0) {
    for (int i = startIndex; i < SIZE; i++)
    {
        if (arr[i] == searchedItem) {
            return i;
        }
    }
    return -1;
}

void unionOfArrays(int arr1[], int arr2[], int n, int m, int result[], int& resultSize) {
    int intersectionLength = 0;
    int i = 0, j = 0;
    for (; i < n && j < m;)
    {
        if (arr1[i] > arr2[j]) {

            result[i + j - intersectionLength] = arr2[j];
            j++;
        }
        else if(arr1[i] < arr2[j])
        {
            result[i + j - intersectionLength] = arr1[i];
            i++;
        }
        else {
            result[i + j - intersectionLength] = arr1[i];
            intersectionLength++;
            i++;
            j++;
        }
    }

    while (i < m) {
        result[i + j - intersectionLength] = arr1[i];
        i++;
    }

    while (j < m) {
        result[i + j - intersectionLength] = arr2[j];
        j++;
    }

    resultSize = n + m - intersectionLength;
}

void removeArrayElement(int arr[], int& size, int index) {
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
}

void removeRepeatingElements(int arr[], int& size) {
    for (int i = 0; i < size; i++)
    {
        if (linearSearchInArray(arr, size, arr[i], i + 1) != -1) {
            removeArrayElement(arr, size, i);
            i--;
        }
    }
}

int main()
{
    int n = enterNumber();
    int m = enterNumber();

    int arr1[CAPACITY];
    int arr2[CAPACITY];

    enterArray(arr1, n);
    enterArray(arr2, m);

    removeRepeatingElements(arr1, n);
    removeRepeatingElements(arr2, m);

    int result[CAPACITY * 2];
    int resultSize = 0;


    unionOfArrays(arr1, arr2, n, m, result, resultSize);

    cout << "Union: ";
    printArray(result, resultSize);

}