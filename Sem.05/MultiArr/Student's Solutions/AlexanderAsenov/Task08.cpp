#include <iostream>
using namespace std;

const int MIN = 1;
const int CAPACITY = 50;

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

void multiplyMatricies(int arr1[][CAPACITY], int arr2[][CAPACITY], int rows1, int cols1, int cols2, int result[][CAPACITY]) {
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < cols2; j++)
        {
            for (int k = 0; k < cols1; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

int main()
{
    int rows1 = enterNumberOfRows();
    int cols1 = enterNumberOfCols();
    int arr1[CAPACITY][CAPACITY] = {};
    
    int rows2 = cols1;
    int cols2 = enterNumberOfCols();
    int arr2[CAPACITY][CAPACITY] = {};

    enterMatrix(arr1, rows1, cols1);
    enterMatrix(arr2, rows2, cols2);

    int result[CAPACITY][CAPACITY] = {};
    multiplyMatricies(arr1, arr2, rows1, cols1, cols2, result);
    
    cout << endl;
    printMatrix(result, rows1, cols2);
}