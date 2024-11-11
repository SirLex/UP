#include <iostream>
using namespace std;

// This one is marked by second 4 in the tasks so just subtract by one for all the others

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

bool isSymmetric(int arr[], int size) {
    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] != arr[size - i - 1]) {
            return false;
        }
    }

    return true;
}

int main()
{
    int size;
    size = enterNumber();

    int arr[CAPACITY];
    enterArray(arr, size);

    if (isSymmetric(arr, size)) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}
