#include <iostream>
using namespace std;

const int CAPACITY = 9;

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
        cout << "Enter n [1, " << CAPACITY <<"]: ";
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

bool digitIsInNumber(int digit, int number) {
    do {
        if (digit == number % 10) {
            return true;
        }
        number /= 10;
    } while (number > 0);

    return false;
}

void MakeNumbersThatDontHaveIndexAsDigitZeroes(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (!digitIsInNumber(i, arr[i])) {
            arr[i] = 0;
        }
    }
}

int main()
{
    int size;
    size = enterNumber();

    int arr[CAPACITY];
    enterArray(arr, size);

    MakeNumbersThatDontHaveIndexAsDigitZeroes(arr, size);
    printArray(arr, size);

}
