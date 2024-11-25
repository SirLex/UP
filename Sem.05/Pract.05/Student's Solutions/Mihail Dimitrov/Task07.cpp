#include <iostream>
using namespace std;

int equal(int arr[], int n)
{
    if (arr == NULL)
    {
        return -1;
    }

    if (n == 0)
    {
        return 0;
    }

    int longest = 1;
    int current = 1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (longest < current)
        {
            longest = current;
        }
    }
    return longest;
}

int main()
{
    int n;
    cin >> n;

    int arr[1000]{};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << equal(arr, n);
}
