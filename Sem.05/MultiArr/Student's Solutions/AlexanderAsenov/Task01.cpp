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

int getSmallestItem(int arr[][CAPACITY], int rows, int cols) {
	if (rows == 0 || cols == 0) {
		return 0;
	}
	
	int min = arr[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] < min) {
				min = arr[i][j];
			}
		}
	}

	return min;
}

int main()
{
    int rows = enterNumberOfRows();
    int cols = enterNumberOfCols();

    int arr[CAPACITY][CAPACITY] = {};
    enterMatrix(arr, rows, cols);
	cout << getSmallestItem(arr, rows, cols) << endl;
}
