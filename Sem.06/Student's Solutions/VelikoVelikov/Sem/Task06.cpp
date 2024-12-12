
#include <iostream>

using namespace std;

void printSubsets(int arr[], int n)
{
    int totalSubsets = 1 << n;

    for (int i = 0; i < totalSubsets; i++) {
        cout << "[";
        bool first = true;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                if (!first) cout << ", ";
                cout << arr[j];
                first = false;
            }
        }
        cout << "]" << endl;
    }
}

int main()
{
    int arr[] = { 1, 2, 3 };
    int size = 3;
    printSubsets(arr, size);
}
