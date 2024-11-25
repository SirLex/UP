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

bool isTriangular(int arr[][CAPACITY], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i][j] != 0) {
				return false;
			}
		}
	}

	return true;
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

int main()
{
	int size = enterNumberOfRows();
	int arr[CAPACITY][CAPACITY];
	enterMatrix(arr, size, size);
	cout << isTriangular(arr, size) << endl;
}