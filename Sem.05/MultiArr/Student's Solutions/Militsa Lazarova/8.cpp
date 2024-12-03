#include <iostream>
#include <iomanip>
using namespace std;

int const MAX_SIZE = 10;

void enterMatrixData(int matrix[MAX_SIZE][MAX_SIZE], int rowsSize, int clmnSize) {
	for (size_t i = 0; i < rowsSize; i++)
	{
		for (size_t j = 0; j < clmnSize; j++)
		{
			cin >> matrix[i][j];
		}
	}
}
bool areValid(int rows1,int clmn1, int rows2,int clmn2) {
	return (clmn1 != rows2 || rows1 > MAX_SIZE || clmn1 > MAX_SIZE || rows2 > MAX_SIZE || clmn2 > MAX_SIZE);
}

void multiplyMatrices(int fstMatrix[MAX_SIZE][MAX_SIZE], int secMatrix[MAX_SIZE][MAX_SIZE], int fstRowsSize, int fstClmnSize, int secRowsSize, int secClmnSize) {
	int currNum=0;
	for (size_t i = 0; i < fstRowsSize; i++)
	{
		for (int j = 0; j < secClmnSize; j++)
		{
			for (size_t z = 0; z < secRowsSize; z++)
			{
				currNum += (fstMatrix[i][z] * secMatrix[z][j]);
			}
			cout << setw(3) << currNum;
			currNum = 0;
		}
		cout << endl;
	}
}

int main() {
	int fstMatrixRowsCnt;
	int fstMatrixClmnCnt;
	int secMatrixRowsCnt;
	int sectMatrixClmnCnt;
	cin >> fstMatrixRowsCnt >> fstMatrixClmnCnt >> secMatrixRowsCnt >> sectMatrixClmnCnt;
	while (areValid(fstMatrixRowsCnt, fstMatrixClmnCnt, secMatrixRowsCnt, sectMatrixClmnCnt))
	{
		cout << "Invalid data! Please enter new sizes!";
		cin >> fstMatrixRowsCnt >> fstMatrixClmnCnt >> secMatrixRowsCnt >> sectMatrixClmnCnt;
	}
	int fstMatrix[MAX_SIZE][MAX_SIZE];
	int secMatrix[MAX_SIZE][MAX_SIZE];
	enterMatrixData(fstMatrix, fstMatrixRowsCnt, fstMatrixClmnCnt);
	enterMatrixData(secMatrix, secMatrixRowsCnt, sectMatrixClmnCnt);
	multiplyMatrices(fstMatrix, secMatrix, fstMatrixRowsCnt, fstMatrixClmnCnt, secMatrixRowsCnt, sectMatrixClmnCnt);

}