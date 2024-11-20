#include <iostream>
using namespace std;

const int MAXARRAYCAPACITY = 100;

int askForArrayLengthInput() {
	int n;
	do {
		cout << "Enter number [0, " << MAXARRAYCAPACITY << "]: ";
		cin >> n;
	} while (n < 0 || MAXARRAYCAPACITY < n);

	return n;
}

int maxNum(int a, int b) {
	return a > b ? a : b;
}

void enterMatrix(int arr[][MAXARRAYCAPACITY], const int ROWS, const int COLS) {
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void transposeMatrix(int arr[][MAXARRAYCAPACITY], const int ROWS, const int COLS) {
	int max = maxNum(ROWS, COLS);

	for (int i = 0; i < max; i++)
	{
		for (int j = i; j < max; j++)
		{
			int swap = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = swap;
		}
	}
}

void printMatrix(int arr[][MAXARRAYCAPACITY], int ROWS, int COLS) {

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << " ";
		}

		cout << endl;
	}

}


int main()
{
	const int ROWS = askForArrayLengthInput();
	const int COLS = askForArrayLengthInput();


	int arr[MAXARRAYCAPACITY][MAXARRAYCAPACITY];
	enterMatrix(arr, ROWS, COLS);
	transposeMatrix(arr, ROWS, COLS);
	printMatrix(arr, COLS, ROWS); // transposed

}