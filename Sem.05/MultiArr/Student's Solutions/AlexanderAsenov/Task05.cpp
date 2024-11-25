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

void transponateMatrix(int arr[][CAPACITY], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = i; j < size; j++)
		{
			int swap = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = swap;
		}
	}
}



int main()
{
	int size = enterNumberOfRows();
	int arr[CAPACITY][CAPACITY];
	enterMatrix(arr, size, size);
	transponateMatrix(arr, size);
	cout << endl;
	printMatrix(arr, size, size);
}