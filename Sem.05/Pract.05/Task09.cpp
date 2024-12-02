// Task09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int mostCommon(int arr[], int size) {
    int maxCount = 0; 
    int mostFrequent = arr[0];

    for (int i = 0; i < size; ++i) {
        int count = 1; 

        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                count++; 
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostFrequent = arr[i];
        }
    }

    return mostFrequent;
}

void readArray(int arr[], int size) {

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int main()
{
    int arr[100] = {};

    cout << "Enter the size of the array: ";

    int size;
    cin >> size;

    readArray(arr, size);

    cout << "The first most common element is " << mostCommon(arr,size);
}
