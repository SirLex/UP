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

int sumArray(int arr[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }

    return result;
}

int sumCols(int arr[][CAPACITY], int size, int col) {
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i][col];
    }

    return result;
}

int sumMainDiagonal(int arr[][CAPACITY], int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i][i];
    }

    return result;
}

int sumSecondDiagonal(int arr[][CAPACITY], int size) {
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i][size - 1 -i];
    }

    return result;
}

bool isMagicSquare(int arr[][CAPACITY], int size) {
    if (size == 0) {
        return true;
    }

    int magicNumber = sumArray(arr[0], size);

    for (int i = 0; i < size; i++)
    {
        if (magicNumber != sumArray(arr[0], size)) {
            return false;
        }
    }

    for (int i = 0; i < size; i++){
        if (magicNumber != sumCols(arr, size, i)) {
            return false;
        }
    }

    if (magicNumber != sumMainDiagonal(arr, size)) {
        return false;
    }

    if (magicNumber != sumSecondDiagonal(arr, size)) {
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
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }
}