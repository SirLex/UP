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

void printMainDiagonal(int arr[][CAPACITY], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i][i] << " ";
	}
	cout << endl;
}

void printSecondDiagonal(int arr[][CAPACITY], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i][size - i - 1] << " ";
	}
	cout << endl;
}

void printDiagonals(int arr[][CAPACITY], int size) {
	printMainDiagonal(arr, size);
	printSecondDiagonal(arr, size);
}

int main()
{
	int size = enterNumberOfRows();

	int arr[CAPACITY][CAPACITY] = {};
	enterMatrix(arr, size, size);
	printDiagonals(arr, size);
}