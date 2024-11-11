#include <iostream>
using namespace std;

const int CAPACITY = 1000;

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

bool allElementsAreZeroes(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0) {
            return false;
        }
    }

    return true;
}

bool isEqualTo(double num1, double num2) {
    const double EPSILON = 0.0001;
    return ((num1 - EPSILON) < num2) && (num2 < (num1 + EPSILON));
}

bool areLinearlyIndependent(int arr1[], int arr2[], int n, int m) {
    if (n != m) {
        return false;
    }

    if (n == 0) {
        return true;
    }

    if (arr1[0] == 0) {
        return allElementsAreZeroes(arr1, n);
    }

    if (arr2[0] == 0) {
        return allElementsAreZeroes(arr2, m);
    }

    double ratio = arr1[0] / (arr2[0] * 1.0);

    for (int i = 0; i < n; i++)
    {
        if (!isEqualTo(arr2[i] * ratio, arr1[i])) {
            return false;
        }
    }

    return true;
}

int main()
{
    int n = enterNumber();
    int m = enterNumber();

    int arr1[CAPACITY];
    int arr2[CAPACITY];

    enterArray(arr1, n);
    enterArray(arr2, m);

    if (areLinearlyIndependent(arr1, arr2, n, m)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}