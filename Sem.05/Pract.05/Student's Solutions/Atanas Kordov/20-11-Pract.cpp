#include <iostream>

using namespace std;

int analyze(int* array, int arraySize, int& sum, int& index)
{
    for (int i = 0; i < arraySize - 1; i++)
    {
        int splitPointIndex = i; 

        int sumLeftPart = 0;
        int sumRightPart = 0;

        for (int j = 0; j <= splitPointIndex; j++) 
        {
            sumLeftPart += array[j];
        }

        for (int k = splitPointIndex + 1; k < arraySize; k++) 
        {
            sumRightPart += array[k];
        }

        if (sumLeftPart == sumRightPart)
        {
            sum = sumRightPart;
            index = splitPointIndex;

            return 1;
        }
    }

    return 0;
}

int main()
{
    const int ARR_SIZE = 5;
    int array[ARR_SIZE] = { 5, 1, 1, 2, 1 };

    int sum = -1; int indexSum = -1;

    cout << " cans split: " << analyze(array, ARR_SIZE, sum, indexSum) << "; sum: " << sum << "; index: " << indexSum;
}
