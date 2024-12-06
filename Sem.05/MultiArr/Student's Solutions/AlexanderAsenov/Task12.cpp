#include <iostream>
using namespace std;

const int MIN = 1;
const int CAPACITYROWS = 50;
const int CAPACITYCOLS = CAPACITYROWS + 1;
const double EPSILON = 0.000001;

void printMatrix(double arr[][CAPACITYCOLS], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int enterNumberOfRows() {
    int result;

    do {
        cout << "Enter the n [" << MIN << ", " << CAPACITYROWS << "]: ";
        cin >> result;
    } while (result <= MIN || CAPACITYROWS <= result);

    return result;
}

void enterMatrix(double arr[][CAPACITYCOLS], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void swapRowWithNonZeroCoefficient(double arr[][CAPACITYCOLS], int rows, int cols, int i) {
    for (int j = 0; j < rows; j++)
    {
        if (arr[i][j] != 0) {
            for (int k = 0; k < cols; k++)
            {
                int swap = arr[i][k];
                arr[i][k] = arr[i][j];
                arr[i][j] = swap;
            }

            return;
        }
    }
}

void addRowsWithCoefficient(double arr[][CAPACITYCOLS], double coefficient, int cols, int row1, int row2) {
    for (int i = 0; i < cols; i++)
    {
        arr[row1][i] += coefficient * arr[row2][i];
    }
}

void multiplyRowWithCoefficient(double arr[][CAPACITYCOLS], double coefficient, int cols, int row1) {
    for (int i = 0; i < cols; i++)
    {
        arr[row1][i] = coefficient * arr[row1][i];
    }
}


bool equalsTo(double num1, double num2) {
    return num1 < num2 + EPSILON && num2 < num1 + EPSILON;
}

bool checkIfRowAlmostAllZeroes(double arr[][CAPACITYCOLS], int cols, int row) {
    for (int i = 0; i < cols - 1; i++)
    {
        if (!equalsTo(arr[row][i], 0)) {
            return false;
        }
    }

    return true;
}

bool checkIfColAllZeroes(double arr[][CAPACITYCOLS], int rows, int col) {
    for (int i = 0; i < rows; i++)
    {
        if (!equalsTo(arr[i][col], 0)) {
            return false;
        }
    }

    return true;
}

double* solve(double arr[][CAPACITYCOLS], int rows, int cols) {
    static double solution[CAPACITYROWS] = {};
   
    for (int i = 0; i < rows; i++)
    {
        if (arr[i][i] == 0) {
            if (checkIfColAllZeroes(arr, rows, i)) {
                return nullptr;
            }

            swapRowWithNonZeroCoefficient(arr, rows, cols, i);
        }

        for (int j = i + 1; j < cols; j++)
        {
            if (arr[j][i] != 0)
            {
                double coefficient = (-1.0 * arr[j][i]) / arr[i][i];
                addRowsWithCoefficient(arr, coefficient, cols, j, i);

                if (checkIfRowAlmostAllZeroes(arr, cols, j)) {
                    return nullptr;
                }
            }
        }
    }

    for (int i = cols - 2; i > 0; i--)
    {
        multiplyRowWithCoefficient(arr, 1/arr[i][i], cols, i);

        for (int j = i - 1; j >= 0; j--)
        {
            double coefficient = (-1.0 * arr[j][i]) / arr[i][i];
            addRowsWithCoefficient(arr, coefficient, cols, j, i);
        }
    }

    multiplyRowWithCoefficient(arr, 1 / arr[0][0], cols, 0);

    for (int i = 0; i < rows; i++)
    {
        solution[i] = arr[i][cols - 1];
    }

    return solution;
}


int main()
{
    int rows = enterNumberOfRows();
    int cols = rows + 1;

    double arr[CAPACITYROWS][CAPACITYCOLS] = {};
    enterMatrix(arr, rows, cols);
    double* solution = solve(arr, rows, cols);

    if (solution == nullptr) {
        cout << "Too many or no solution" << endl;
        return 0;
    }


    for (int i = 0; i < rows; i++)
    {
        cout << solution[i] << " ";
    }

}

/*
1 2 3
4 5 6
7 8 9


*/