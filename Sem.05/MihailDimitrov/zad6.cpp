#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    const int SIZE = 150;
    bool arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = true;
    }

    for (int i = 2; i < sqrt(SIZE); i++)
    {
        if (!arr[i])
        {
            continue;
        }

        for (int j = i * 2; j < SIZE; j += i)
        {
            arr[j] = false;
        }
    }

    for (int i = 2; i < SIZE; i++)
    {
        if (arr[i])
        {
            cout << i << " ";
        }
    }
}