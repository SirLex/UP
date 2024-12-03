#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = ROWS + 1;

void solveEquatios(double arr[ROWS][COLS])
{

    for (int i = 0; i < ROWS; i++)
    {
        double oldValue = arr[i][i];
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] /= oldValue;
        }

        for (int j = 0; j < ROWS; j++)
        {
            if (j == i)
            {
                continue;
            }
            double ratio = arr[j][i];
            for (int k = 0; k < COLS; k++)
            {
                arr[j][k] -= arr[i][k] * ratio;
            }
        }

        for (int j = 0; j < ROWS; j++)
        {
            bool isZeros = true;
            for (int k = 0; k < COLS - 1; k++)
            {
                if (arr[j][k] != 0)
                {
                    isZeros = false;
                }
            }
            if (isZeros)
            {
                if (arr[j][COLS - 1] == 0)
                {
                    cout << "Infinate solutions";
                }
                else
                {
                    cout << "No solutions";
                }
                return;
            }
        }
    }

    for (int i = 0; i < ROWS; i++)
    {
        cout << "X" << i + 1 << " = " << arr[i][COLS - 1] << endl;
    }
}

int main()
{
    double arr[ROWS][COLS] = {{3, 2, 5, 0}, {2, -3, 4, 10}, {2, 1, 1, 4}};

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    solveEquatios(arr);
}