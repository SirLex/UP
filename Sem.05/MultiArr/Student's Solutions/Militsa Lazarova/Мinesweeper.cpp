#include <iostream>
#include <random>
#include <iomanip> 

const int size = 10;
using namespace std;
const int MAX_SIZE = 10;
const int ASCII_TABLE_ZERO = 48;

int* randomCoordinatesGenerator(int minesCoordinates[2], int size) {
	srand((unsigned)time(NULL));
	int x = rand() % (size);
	int y = rand() % (size);
	minesCoordinates[0] = x;
	minesCoordinates[1] = y;
	return minesCoordinates;
}
bool isValid(int x, int y, int size) {
	return (!(x < 0 || x >= size || y < 0 || y >= size));
}

int getSurroundingMinesCount(int matrix[MAX_SIZE][MAX_SIZE], int size, int x, int y) {
	int counter = 0;
	int surroundingCoord[8][2] = {
					{x,y + 1},
					{x,y - 1},
					{x + 1,y},
					{x - 1,y},
					{x - 1,y - 1},
					{x + 1,y + 1},
					{x + 1,y - 1},
					{x - 1,y + 1}
	};
	for (int i = 0; i < 8; i++)
	{
		int currX = surroundingCoord[i][0];
		int currY = surroundingCoord[i][1];
		if (isValid(currX, currY, size))
			if (matrix[currX][currY] == 10) counter++;
	}
	return counter;
}

void fieldValuesGenerator(int matrix[MAX_SIZE][MAX_SIZE], int size, int minesCount) {

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			matrix[i][j] = 0;
		}
	}
	int minescoordinates[2];
	for (int i = 0; i < minesCount; i++)
	{
		randomCoordinatesGenerator(minescoordinates, size);
		while (matrix[minescoordinates[0]][minescoordinates[1]] == 10)
		{
			randomCoordinatesGenerator(minescoordinates, size);
		}
		matrix[minescoordinates[0]][minescoordinates[1]] = 10;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (matrix[i][j] == 10)
				continue;
			matrix[i][j] = getSurroundingMinesCount(matrix, size, i, j);
		}
	}
}

void openEmptyCell(int matrix[MAX_SIZE][MAX_SIZE], int x, int y, int size, char gameProgress[MAX_SIZE][MAX_SIZE], int& openedCellsCnt) {
	int surroundingCoord[8][2] = {
					{x,y + 1},
					{x,y - 1},
					{x + 1,y},
					{x - 1,y},
					{x - 1,y - 1},
					{x + 1,y + 1},
					{x + 1,y - 1},
					{x - 1,y + 1}
	};
	for (int i = 0; i < 8; i++)
	{
		int currX = surroundingCoord[i][0];
		int currY = surroundingCoord[i][1];
		if (isValid(currX, currY, size))
		{
			if (gameProgress[currX][currY] != 'o')
			{
				gameProgress[currX][currY] = 'o';
				openedCellsCnt++;
				if (matrix[currX][currY] == 0) openEmptyCell(matrix, currX, currY, size, gameProgress, openedCellsCnt);
			}
		}
	}
}

void PrintCurrMatrx(int matrix[MAX_SIZE][MAX_SIZE], int size, char gameProgress[MAX_SIZE][MAX_SIZE]) {
	cout << "  ";
	for (size_t i = 0; i < size; i++)
	{
		cout << setw(3) << i;
	}
	cout << endl << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i << " ";
		for (int j = 0; j < size; j++)
		{
			if (gameProgress[i][j] == 'o')
			{
				cout << setw(3) << matrix[i][j];
			}
			else if (gameProgress[i][j] == 'm')
			{
				cout << setw(3) << 'm';
			}
			else cout << setw(3) << (char)42;
		}
		cout << endl;
	}
	cout << endl;
}

bool Playing(char cmnd,int cmndXYcoord[2], int matrix[MAX_SIZE][MAX_SIZE], int size, char gameProgress[MAX_SIZE][MAX_SIZE], int& openedCellsCnt, int minesCount)
{
	int x = cmndXYcoord[0];
	int y = cmndXYcoord[1];
	if (!isValid(x, y, size))
	{
		cout << "Invalid command!" << endl;
		return true;
	}


	switch (cmnd)
	{
	case 'o':
		if (matrix[x][y] == 10)
		{
			cout << "You lost the game!";
			return false;
		}
		if (gameProgress[x][y] == 'o')
		{
			cout << "You've already opened this cell!";
			return true;
		}
		gameProgress[x][y] = 'o';
		openedCellsCnt++;
		if (matrix[x][y] == 0)
		{
			openEmptyCell(matrix, x, y, size, gameProgress, openedCellsCnt);
		}
		break;
	case 'm':
		if (gameProgress[x][y] == 'm')
		{
			cout << "You've already marked this cell!" << endl;
			return true;
		}
		else if (gameProgress[x][y] == 'o')
		{
			cout << "You've already opened this cell!"<<endl;
			return true;
		}
		gameProgress[x][y] = 'm';
		break;
	case 'u':
		if (gameProgress[x][y] != 'm')
		{
			cout << "The cell you want to unmark is not marked!" << endl;
			return true;
		}
		gameProgress[x][y] = 'u';
		break;
	default:
		cout << "Invalid command!" << endl;
		break;
	}
	int progress = openedCellsCnt;
	if (progress == size * size - minesCount)
	{
		cout << "Congrats! You've won the game!";
		return false;
	}
	PrintCurrMatrx(matrix, size, gameProgress);
	return progress < size * size;
}


int main()
{

	int size;
	cin >> size;
	while (size <= 0 || size > 10)
	{
		cout << "Invalid size!"<<endl;
		cin >> size;
	}
	int minesCount;
	cin >> minesCount;
	while (minesCount < 1 || minesCount > 3 * size)
	{
		cout << "Invalid mines count!"<<endl;
		cin >> minesCount;
	}

	int matrix[MAX_SIZE][MAX_SIZE];
	char gameProgress[MAX_SIZE][MAX_SIZE] = {
	};
	for (size_t i = 0; i < size; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			gameProgress[i][j] = 'u';
		}
	}

	fieldValuesGenerator(matrix, size, minesCount);
	PrintCurrMatrx(matrix, size, gameProgress);
	int openedCellsCnt = 0;

	char cmnd;
	int xyCoordinates[2];
	do
	{
			cin >> cmnd;
	for (int i = 0; i < 2; i++)
		{
			cin >> xyCoordinates[i];
		}
	} while (Playing(cmnd,xyCoordinates, matrix, size, gameProgress, openedCellsCnt, minesCount));
}


