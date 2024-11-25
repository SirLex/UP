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

void sumMatricies(int arr1[][CAPACITY], int arr2[][CAPACITY], int rows, int cols, int result[][CAPACITY]) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void multiplyByNumber(int arr[][CAPACITY], int rows, int cols, int num) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) {
            arr[i][j] *= num;
        }
    }
}

int main()
{
    char symbol;
    do {
        cout << "Enter would you like to sum (s) matricies or multiply matrx with a number (m): ";
        cin >> symbol;
    } while (symbol != 's' && symbol != 'm');
    
    int rows = enterNumberOfRows();
    int cols = enterNumberOfCols();
    int arr1[CAPACITY][CAPACITY] = {};
    enterMatrix(arr1, rows, cols);
    
    if (symbol == 's') {
        
        int arr2[CAPACITY][CAPACITY] = {};
        enterMatrix(arr2, rows, cols);
        
        int result[CAPACITY][CAPACITY] = {};
        
        sumMatricies(arr1, arr2, rows, cols, result);
        cout << endl;
        printMatrix(result, rows, cols);
    }
    else {
        int num;
        cout << "Enter number: ";
        cin >> num;
        multiplyByNumber(arr1, rows, cols, num);

        cout << endl;
        printMatrix(arr1, rows, cols);
    }
}