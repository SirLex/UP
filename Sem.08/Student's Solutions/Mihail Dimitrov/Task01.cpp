#include <iostream>
using namespace std;

bool AnalyzeArr(int arr[], int length)
{

    const int MINIMUM_ENCOUNTERS = 2;

    if (arr == nullptr)
    {
        return false;
    }

    if (length < MINIMUM_ENCOUNTERS)
    {
        return false;
    }

    int counter = 0;
    for (size_t i = 0; i < length; i++)
    {
        if (arr[i] == i)
        {
            counter++;
        }
    }
    return counter >= MINIMUM_ENCOUNTERS;
}

int main()
{
    const int length = 10;
    int arr[length] = {1, 2, 3, 3, 2, 5, 1, 2, 3, 2};
    cout << AnalyzeArr(arr, length);
}
