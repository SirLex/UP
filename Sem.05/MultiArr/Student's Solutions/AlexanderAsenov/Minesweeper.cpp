#include <iostream>
using namespace std;

const char hiddenSymbol = (char)254; //Otherwise converts to Unicode for some reason
const char markedSymbol = '!';

const int maxGameSize = 30;
const int minGameSize = 3;
const int minMinesCount = 1;

const int possibleCommandsSize = 3;
const char possibleCommands[possibleCommandsSize] = {'o', 'm', 'u'};

const int valueForMine = 10;
const char symbolForMine = 'X';

int askUserForGameSize() {
	int result;
	do {
		cout << "Enter the size (" << minGameSize << ", " << maxGameSize << "): ";
		cin >> result;
	} while (result < minGameSize || maxGameSize < result);

	return result;
}

int askUserForNumberOfMines(int size) {
	int result;
	do {
		cout << "Enter the number of mines (" << minMinesCount << ", " << 3 * size << "): ";
		cin >> result;
	} while (result < minMinesCount || 3 * size < result);
	
	return result;
}

void getRandomCoordinates(int& x, int& y, int size) {
	x = rand() % size;
	y = rand() % size;
}

bool checkCoordinatesAreValid(int x, int y, int size) {
	return 0 <= x && x < size && 0 <= y && y < size;
}

void generateMatrix(int arr[][maxGameSize], int size, int numberOfmines) {
	int x, y;
	for (int i = 0; i < numberOfmines; i++)
	{
		do {
			getRandomCoordinates(x, y, size);
		} while (arr[x][y] == valueForMine);

		arr[x][y] = valueForMine;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] == valueForMine) {
				continue;
			}

			for (int k = -1; k <= 1; k++)
			{
				for (int l = -1; l <= 1; l++)
				{
					if (checkCoordinatesAreValid(i+k, j+l, size)) {
						if (arr[i + k][j + l] == valueForMine) {
							arr[i][j]++;
						}
					}
				}
			}
		}
	}

}

void printGame(int arr[][maxGameSize], bool isMarked[][maxGameSize], bool isOpen[][maxGameSize], int size) {
	
	cout << "   ";
	for (int i = 1; i <= size; i++)
	{
		if (i < 10) {
			cout << i << "  ";
		}
		else {
			cout << i << " ";
		}
	}
	cout << endl;

	for (int i = 0; i < size; i++)
	{
		if (i + 1 < 10) {
			cout << i + 1 << "  ";
		}
		else {
			cout << i + 1 << " ";
		}

		for (int j = 0; j < size; j++)
		{

			if (isOpen[i][j]) {
				if (arr[i][j] == valueForMine) {
					cout << symbolForMine << "  ";
				}
				else {
					cout << arr[i][j] << "  ";
				}
			}
			else if(isMarked[i][j]) {
				cout << markedSymbol << "  ";
			}
			else {
				cout << hiddenSymbol << "  ";
			}
		}
		cout << endl;
	}
}

bool checkCommandIsValid(char command) {
	for (size_t i = 0; i < possibleCommandsSize; i++)
	{
		if (command == possibleCommands[i]) {
			return true;
		}
	}

	return false;
}

void askForCommand(char& command, int& x, int& y, int size) {
	cout << "Enter command ('o' - open, 'm' - mark, 'u' - unmark) [x coordinate] [y coordinate]: ";
	cin >> command >> x >> y;
	x--;
	y--;

	if (!checkCommandIsValid(command) || !checkCoordinatesAreValid(x, y, size)) {
		cout << "Invalid command! Enter it again!" << endl;
		askForCommand(command, x, y, size);
	}
}

void mark(bool isMarked[][maxGameSize], int x, int y) {
	isMarked[x][y] = true;
}

void unmark(bool isMarked[][maxGameSize], int x, int y) {
	isMarked[x][y] = false;
}

void openAll(bool isOpened[][maxGameSize] = 0) {

}

void open(int arr[][maxGameSize], bool isOpened[][maxGameSize], bool isMarked[][maxGameSize], int size, int x, int y) {
	if (!checkCoordinatesAreValid(x, y, size)) {
		return;
	}

	if (isOpened[x][y]) {
		return;
	}

	if (isMarked[x][y]) {
		cout << "The field is marked! Unmark to open it!" << endl;
		return;
	}
	
	isOpened[x][y] = true;

	if (arr[x][y] == 0) {
		for (int i = -1; i <= 1; i++)
		{
			for (int j = -1; j <= 1; j++)
			{
				if (i == 0 && j == 0) {
					continue;
				}
				
				open(arr, isOpened, isMarked, size, x + i, y + j);
			}
		}
	}
}

bool playerHasMoreFieldsToOpen(int arr[][maxGameSize], bool isOpened[][maxGameSize], int size) {
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (!isOpened[i][j] && arr[i][j] != valueForMine) {
				return true;
			}
		}
	}

	return false;
}


void startGame() {
	srand(time(0));

	int size = askUserForGameSize();
	int numberOfMines = askUserForNumberOfMines(size);

	bool isMarked[maxGameSize][maxGameSize] = {};
	bool isOpened[maxGameSize][maxGameSize] = {};
	int game[maxGameSize][maxGameSize] = {};
	generateMatrix(game, size, numberOfMines);

	char command;
	int x, y;
	bool playerLost = false;

	while (playerHasMoreFieldsToOpen(game, isOpened, size)) {
		printGame(game, isMarked, isOpened, size);

		askForCommand(command, x, y, size);

		if (command == possibleCommands[0]) {
			
			
			open(game, isOpened, isMarked, size, x, y);
			
			if (game[x][y] == valueForMine) {
				open(game, isOpened, isMarked, size, x, y);
				playerLost = true;
				break;
			}

		}
		else if (command == possibleCommands[1]) {
			mark(isMarked, x, y);
		}
		else if (command == possibleCommands[2]) {
			unmark(isMarked, x, y);
		}
	}

	printGame(game, isMarked, isOpened, size);
	if (playerLost) {
		cout << "You lost" << endl;
	}
	else {
		cout << "You won" << endl;
	}
}

int main()
{
	char playerWantsToPlayAgain = 'y';

	do {
		startGame();
		cout << "Do you wnat to play again (y/n): ";
		cin >> playerWantsToPlayAgain;
	} while (playerWantsToPlayAgain == 'y');
}