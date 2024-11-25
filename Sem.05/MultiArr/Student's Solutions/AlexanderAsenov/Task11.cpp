#include <iostream>
using namespace std;

const int MIN = 1;
const int CAPACITY = 50;

int enterNumberOfRows() {
    int result;

    do {
        cout << "Enter the number of rows and cols [" << MIN << ", " << CAPACITY << "]: ";
        cin >> result;
    } while (result <= MIN || CAPACITY <= result);

    return result;
}

void enterMatrix(int arr[][CAPACITY], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

int getSumOfRow(int arr[][CAPACITY], int size, int row) {
    int sum = 0;
    
    for (int i = 0; i < size; i++)
    {
        sum += arr[row][i];
    }

    return sum;
}

int getSumOfCol(int arr[][CAPACITY], int size, int col) {
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i][col];
    }

    return sum;
}

bool checkRowsSumIsEqual(int arr[][CAPACITY], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        if (getSumOfRow(arr, size, i) != getSumOfRow(arr, size, i + 1)) {
            return false;
        }
    }

    return true;
}

bool checkColsSumIsEqual(int arr[][CAPACITY], int size) {
    for (int i = 0; i < size - 1; i++)
    {
        if (getSumOfCol(arr, size, i) != getSumOfCol(arr, size, i + 1)) {
            return false;
        }
    }

    return true;
}

int getMainDiagonalSum(int arr[][CAPACITY], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i][i];
    }

    return sum;
}

int getSecondDiagonalSum(int arr[][CAPACITY], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i][size - i - 1];
    }

    return sum;
}


bool isMagicSquare(int arr[CAPACITY][CAPACITY], int size) {
    
    if (size == 0) {
        return false;
    }

    if (!checkRowsSumIsEqual(arr, size)) {
        return false;
    }

    if (!checkColsSumIsEqual(arr, size)) {
        return false;
    }

    int sum = getSumOfRow(arr, size, 0);

    if (sum != getMainDiagonalSum(arr, size)) {
        return false;
    }

    if (sum != getSecondDiagonalSum(arr, size)) {
        return false;
    }

    return true;
}

int main()
{
    int size = enterNumberOfRows();

    int arr[CAPACITY][CAPACITY] = {};
    enterMatrix(arr, size, size);

    if (isMagicSquare(arr, size)) {
        cout << "It is magic square!";
    }
    else {
        cout << "Not a magic square!";
    }
}