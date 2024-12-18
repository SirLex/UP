#include <iostream>

using namespace std;

int* Rearrange(int arr[], int n, int el)
{
    int* rearranged = new int[n];
    int i = 0, beg = 0,  end = n-1;
    while (i < n)
    {
        if (arr[i] > el)
        {
            rearranged[end] = arr[i];
            end++;
        }
        if (arr[i] < el)
        {
            rearranged[beg] = arr[i];
            beg++;
        }
        i++;
    }
    rearranged[beg] = el;
    return rearranged;
}

void InputArray(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int main()
{
    int n; cin >> n;
    int* arr = new int[n];
    InputArray(arr, n);
    int el; cin >> el;

    int* rearranged = Rearrange(arr, n, el);

    delete[] arr;
    delete[] rearranged;

}