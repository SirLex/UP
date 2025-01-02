#include <iostream>
using namespace std;

bool AnalyzeArr(int arr[], int length){

    if (length < 2 || arr == nullptr) {

        return false;

    }

    int counter = 0;

    for (int i = 0; i < length; i++) {

        if (arr[i] == i) {

            counter++;

            if (counter == 2) {

                return true;

            }

        }

    }

    return false;

}

int main()
{

    int const size = 10;
    int arr[size];

    for (int i = 0; i < size; i++) {

        cin >> arr[i];

    }

    AnalyzeArr(arr, size);

}
