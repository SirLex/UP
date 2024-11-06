#include <iostream>
using namespace std;

void makeNonIndexElementsZero(int arr[], int n)
{
    if (arr == NULL)
    {
        return;
    }

    for (int i = 0; i < n; i++)
    {
        bool containsIndex = false;
        int el = arr[i];
        while (el != 0)
        {
            if (el % 10 == i)
            {
                containsIndex = true;
                break;
            }
            el /= 10;
        }

        if (!containsIndex)
        {
            arr[i] = 0;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int arr[10]{};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    makeNonIndexElementsZero(arr, n);

    printArray(arr, n);
}
