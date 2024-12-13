#include <iostream>
using namespace std;

bool AnalyzeArr(int arr[], int length) {
    int counter = 0;
    if (length < 0) {
        return false;
    }

    for (int i = 0; i < length; i++) {
        if (arr[i] == i) {
            counter++;
        }
    }

    if (counter >= 2) {
        return true;
    }
    return false;
}

int main() {
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    cout << AnalyzeArr(arr, len);
    return 0;
}