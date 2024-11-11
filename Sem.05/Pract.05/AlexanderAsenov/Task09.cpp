#include <iostream>
using namespace std;

const int CAPACITY = 1000;

int enterNumber() {
    int size;

    do {
        cout << "Enter n [1, " << CAPACITY << "]: ";
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

// May be if we sort it we may have better time complexity
// But it's linear with hashtable
int findMostCommonNumber(int arr[], int size) {
    if (size == 0) {
        return 0;
    }

    int result = arr[0];
    int numberOfTimesOfMostCommon = 0;
    for (int i = 0; i < size; i++)
    {
        int numberOfTimesOfCurrent = 0;
        for (int j = i; j < size; j++)
        {
            if (arr[i] == arr[j]) {
                numberOfTimesOfCurrent++;
            }
        }

        if (numberOfTimesOfMostCommon < numberOfTimesOfCurrent) {
            numberOfTimesOfMostCommon = numberOfTimesOfCurrent;
            result = arr[i];
        }
    }

    return result;
}

int main()
{
    int size;
    size = enterNumber();

    int arr[CAPACITY];
    enterArray(arr, size);

    cout << findMostCommonNumber(arr, size) << endl;
}
