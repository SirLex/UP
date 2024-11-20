#include <iostream>
using namespace std;

const int N = 3;
const char FREESPACESYMBOL = ' ';
char playerSymbols[] = { 'X', 'O' };

void initializeArrayGame(char arr[][N]) {
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = FREESPACESYMBOL;
		}
	}
}

void printGame(char arr[][N], const int SIZE) {
	
	for (int i = 1; i <= SIZE; i++)
	{
		if (i == 1) {
			cout << "  ";
		}
		cout << " " << i;
		if (i < 10) {
			cout << "  ";
		}
		else {
			cout << " ";
		}
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (j == 0) {
				if (i < 9) {
					cout << i + 1 << " ";
				}
				else {
					cout << i + 1 << "";
				}
			}

			cout << " " << arr[i][j];
		
			if (j != SIZE - 1) {
					cout << " |";
			}
		}
		cout << endl;

		if (i != SIZE - 1) {
			for (int j = 0; j < SIZE; j++)
			{
				if (j == 0) {
					cout << "  ---+";
				}
				else if(j == SIZE - 1) {
					cout << "---" << endl;

				}
				else  {
					cout << "---+";
				}
			}
		}
	}
}

void printGame(char arr[][N]) {
	printGame(arr, N);
}

bool coordinatesAreValid(char arr[][N], int x, int y, int MAXSIZE) {
	return 1 <= x && x <= MAXSIZE && 1 <= y && y <= MAXSIZE && arr[x - 1][y - 1] == FREESPACESYMBOL;
}

void putAtCoordinates(char arr[][N], int x, int y, char playerSymbol) {
	arr[x][y] = playerSymbol;
}

bool checkPlayerHasWonOnARow(int x, char arr[][N], const int SIZE) {
	for (int i = 0; i < SIZE - 1; i++)
	{
		if (arr[x][i] == FREESPACESYMBOL || arr[x][i] != arr[x][i + 1]) {
			return false;
		}
	}

	return true;
}

bool checkPlayerHasWonOnACol(int y, char arr[][N], const int SIZE) {
	for (int i = 0; i < SIZE - 1; i++)
	{
		if (arr[i][y] == FREESPACESYMBOL || arr[i][y] != arr[i + 1][y]) {
			return false;
		}
	}
	return true;
}

bool checkPlayerHasWonOnMainDiagonal(char arr[][N], const int SIZE) {
	for (int i = 0; i < SIZE - 1; i++)
	{
		if (arr[i][i] == FREESPACESYMBOL || arr[i][i] != arr[i + 1][i + 1]) {
			return false;
		}
	}

	return true;
}

bool checkPlayerHasWonOnSecondDiagonal(char arr[][N], const int SIZE) {
	for (int i = 0; i < SIZE - 1; i++)
	{
		if (arr[i][SIZE - i - 1] == FREESPACESYMBOL || arr[i][SIZE - i - 1] != arr[i + 1][SIZE - i - 2]) {
			return false;
		}
	}

	return true;
}

bool checkPlayerHasWon(char arr[][N], int x, int y, const int SIZE) {
	if (checkPlayerHasWonOnARow(x, arr, SIZE)) {
		return true;
	}

	if (checkPlayerHasWonOnACol(y, arr, SIZE)) {
		return true;
	}
	
	if (checkPlayerHasWonOnMainDiagonal(arr, SIZE)) {
		return true;
	}

	if (checkPlayerHasWonOnSecondDiagonal(arr, SIZE)) {
		return true;
	}
	
	return false;
}

bool checkPlayerHasWon(char arr[][N], int x, int y) {
	return checkPlayerHasWon(arr, x, y, N);
}

bool squaresAreFull(char arr[][N], const int SIZE) {
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (arr[i][j] == FREESPACESYMBOL) {
				return false;
			}
		}
	}
	return true;
}

bool squaresAreFull(char arr[][N]) {
	return squaresAreFull(arr, N);
}

void changePlayerTurn(char& playerTurn) {
	if (playerTurn == playerSymbols[0]) {
		playerTurn = playerSymbols[1];
	}
	else {
		playerTurn = playerSymbols[0];
	}
}

void askUserForCoordinates(int &x, int &y, char arr[][N], char playerSymbol) {
	cout << "It's " << playerSymbol << " turn! Type coordinate! Ex: \"2 3\": ";
	cin >> x >> y;
	while (!coordinatesAreValid(arr, x, y, N)) {
		cout << "Invalid coordinate!" << endl;
		cout << "It's " << playerSymbol << " turn! Type coordinate! Ex: \"2 3\": ";
		cin >> x >> y;
	};
	x--;
	y--;

}

void startGame() {
	char playerSymbol = playerSymbols[0];
	bool hasWon = false;
	char arr[N][N];
	initializeArrayGame(arr);
	printGame(arr);

	while (true) {
		int x, y;

		askUserForCoordinates(x, y, arr, playerSymbol);
		putAtCoordinates(arr, x, y, playerSymbol);
		printGame(arr);

		if (checkPlayerHasWon(arr, x, y)) {
			hasWon = true;
			break;
		}
		else if(squaresAreFull(arr)) {
			break;
		}

		changePlayerTurn(playerSymbol);
	}
	if (hasWon) {
		cout << playerSymbol << " has won!" << endl;
	}
	else {
		cout << "Tie" << endl;
	}

}

int main()
{
	char shouldStartGame = 'y';
	while (shouldStartGame == 'y' || shouldStartGame == 'Y') {
		startGame();
		cout << "Start another game (y/n)? ";
		cin >> shouldStartGame;
	}
}