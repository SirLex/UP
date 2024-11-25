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

void changeDirection(int& x, int& y) {
    switch (x)
    {
    case 1:
        x = 0;
        y = -1;
        break;
    case -1:
        x = 0;
        y = 1;
        break;
    }

    switch (y)
    {
    case 1:
        x = 1;
        y = 0;
        break;
    case -1:
        x = -1;
        y = 0;
        break;
    }
}

bool isInSize(int i, int j, int rows, int cols) {
    return 0 <= i && 0 <= j && i < rows && j < cols;
}

bool isValid(int i, int j, int matrix[][CAPACITY], bool isChecked[][CAPACITY], int size) {
    if (i <= 0 || size <= i) {
        return false;
    }

    if (j <= 0 || size <= j) {
        return false;
    }

    return isChecked[i][j];
}

void printSpiral(int matrix[][CAPACITY], int rows, int cols) {
    bool isChecked[CAPACITY][CAPACITY] = {};

    int i = 0;
    int j = 0;

    const int MAXNUMBEROFVECTORS = 4;
    int vectors[MAXNUMBEROFVECTORS][2] = { {0, 1}, {1, 0}, {0, -1}, {-1, 0} };

    int indexOfCurrentVector = 0;
    int count = 0;

    //It gives warning C6385. Thinks isChecked is unsafe but it seems to be ok.
    while (isInSize(i, j, rows, cols) && !(isChecked[i][j])) {

        do {
            cout << matrix[i][j] << " ";
            isChecked[i][j] = true;
            i += vectors[indexOfCurrentVector][0];
            j += vectors[indexOfCurrentVector][1];
        } while (isInSize(i, j, rows, cols) && !(isChecked[i][j]));

        i -= vectors[indexOfCurrentVector][0];
        j -= vectors[indexOfCurrentVector][1];

        indexOfCurrentVector++;
        if (indexOfCurrentVector == MAXNUMBEROFVECTORS) {
            indexOfCurrentVector = 0;
        }

        i += vectors[indexOfCurrentVector][0];
        j += vectors[indexOfCurrentVector][1];
    }
}

int main()
{
    int rows = enterNumberOfRows();
    int cols = enterNumberOfCols();

    int arr[CAPACITY][CAPACITY] = {};
    enterMatrix(arr, rows, cols);
    printSpiral(arr, rows, cols);
}