#include <iostream>
using namespace std;

const int MIN = 1;
const int CAPACITY = 20;

int enterNumberOfRows() {
    int result;

    do {
        cout << "Enter the number of rows [" << MIN << ", " << CAPACITY << "]: ";
        cin >> result;
    } while (result <= MIN || CAPACITY <= result);

    return result;
}

int enterNumberOfCols() {
    int result;

    do {
        cout << "Enter the number of cols [" << MIN << ", " << CAPACITY << "]: ";
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

void printMatrix(int arr[][CAPACITY], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void rigthtTurnMatrix(int arr[][CAPACITY], int result[][CAPACITY], int rows, int cols) {
    
    int max = cols;
    if (rows < cols) {
        max = cols;
    }

    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            result[i][j] = arr[rows - j - 1][i];
        }
    }
}

int main()
{
    int rows = enterNumberOfRows();
    int cols = enterNumberOfCols();

    int arr[CAPACITY][CAPACITY] = {};
    int result[CAPACITY][CAPACITY] = {};
    enterMatrix(arr, rows, cols);

    rigthtTurnMatrix(arr, result, rows, cols);
    printMatrix(result, cols, rows);
}