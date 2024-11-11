#include <iostream>

using namespace std;

void removeAtIndex(int arr[], int& size, int index) {

    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main() {
    const int INITIAL_SIZE = 8;
    int arr[INITIAL_SIZE] = { 33, 1, 23, 8, 54, 5, 1, 6 };
    int size = INITIAL_SIZE;

    int index;
    cout << "Enter the index to remove: ";
    cin >> index;

    if (index >= 0 && index < size) {

        removeAtIndex(arr, size, index);

        cout << "Updated array: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else {
        cout << "Invalid index!" << endl;
    }

    return 0;
}
