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

void enterMatrix(int arr[][CAPACITY], int rows, int cols) {
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void printArrayZigZag(int arr[][CAPACITY], int rows, int cols) {
	for (int i = 0; i < rows; i++)
	{
		if (i % 2 == 0) {
			for (int j = 0; j < cols; j++)
			{
				cout << arr[i][j] << " ";
			}
		}
		else {
			for (int j = cols - 1; j >= 0; j--)
			{
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
}

int main()
{
    int rows = enterNumberOfRows();
    int cols = enterNumberOfCols();

    int arr[CAPACITY][CAPACITY] = {};
    enterMatrix(arr, rows, cols);
	printArrayZigZag(arr, rows, cols);
}
