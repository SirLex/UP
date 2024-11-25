#include <iostream>
using namespace std;

const int N = 50;
const char FREESPACESYMBOL = ' ';

char playerSymbols[] = { 'X', 'O', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
const int playersArraySize = 52;

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
				else if (j == SIZE - 1) {
					cout << "---" << endl;

				}
				else {
					cout << "---+";
				}
			}
		}
	}
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

int getIndex(char arr[], int size, char item) {
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == item) {
			return i;
		}
	}

	return -1;
}

void changePlayerTurn(char& playerTurn, int numberOfPlayers) {
	int index = getIndex(playerSymbols, playersArraySize, playerTurn);
	index++;

	if (index >= numberOfPlayers) {
		index = 0;
	}

	playerTurn = playerSymbols[index];
}

void askUserForCoordinates(int& x, int& y, char arr[][N], char playerSymbol, int size) {
	cout << "It's " << playerSymbol << " turn! Type coordinate! Ex: \"2 3\": ";
	cin >> x >> y;
	while (!coordinatesAreValid(arr, x, y, size)) {
		cout << "Invalid coordinate!" << endl;
		cout << "It's " << playerSymbol << " turn! Type coordinate! Ex: \"2 3\": ";
		cin >> x >> y;
	};
	x--;
	y--;

}

void startGame(int size, int numberOfPlayers) {
	char playerSymbol = playerSymbols[0];
	bool hasWon = false;
	char arr[N][N];
	initializeArrayGame(arr);
	printGame(arr, size);

	while (true) {
		int x, y;

		askUserForCoordinates(x, y, arr, playerSymbol, size);
		putAtCoordinates(arr, x, y, playerSymbol);
		printGame(arr, size);

		if (checkPlayerHasWon(arr, x, y, size)) {
			hasWon = true;
			break;
		}
		else if (squaresAreFull(arr, size)) {
			break;
		}

		changePlayerTurn(playerSymbol, numberOfPlayers);
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
		int numberOfSquares;
		do {
			cout << "Enter the number of squares [3, 50]: ";
			cin >> numberOfSquares;
		} while (numberOfSquares < 3 || 50 < numberOfSquares);

		int numberOfPlayers;
		do {
			cout << "Enter the number of players [2, 50]: ";
			cin >> numberOfPlayers;
		} while (numberOfPlayers < 2 || 50 < numberOfPlayers);

		startGame(numberOfSquares, numberOfPlayers);

		cout << "Start another game (y/n)? ";
		cin >> shouldStartGame;
	}
}