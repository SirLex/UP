#include <iostream>
using namespace std;

// RULES
const int ROWS = 10;
const int COLS = 10;
const int MINES = 12;

// SYMBOLS
const char CLOSED = 219;
const char MINE = 'M';
const char MARKED = '>';
const char MARKED_MINE = 'B';

// COMMANDS
const char OPEN = 'o';
const char MARK = 'm';
const char UNMARK = 'u';

void drawBoard(char arr[ROWS][COLS], bool withMines = false)
{

    cout << "There are " << MINES << " mines.\n";
    cout << "   ";
    for (int i = 0; i < COLS; i++)
    {
        cout << " " << i << (i < 10 ? " " : "");
    }
    cout << endl
         << endl;

    for (int i = 0; i < ROWS; i++)
    {
        cout << i << (i > 9 ? "  " : "   ");
        for (int j = 0; j < COLS; j++)
        {
            if (!withMines && arr[i][j] == MINE)
            {
                cout << CLOSED;
            }
            else if (arr[i][j] == MARKED_MINE)
            {
                cout << MARKED;
            }
            else
            {
                cout << arr[i][j];
            }
            cout << "  ";
        }
        cout << endl;
    }
}

bool isInputValid(char command, int x, int y, char arr[ROWS][COLS])
{
    if (command != OPEN && command != MARK && command != UNMARK)
    {
        cout << "Invalid command\n";
        return false;
    }

    if (x < 0 || x >= ROWS)
    {
        cout << "Invalid row\n";
        return false;
    }

    if (y < 0 || y >= COLS)
    {
        cout << "Invalid column\n";
        return false;
    }

    if (command == OPEN && arr[x][y] != CLOSED && arr[x][y] != MINE)
    {
        cout << "Square can't be open\n";
        return false;
    }

    if (command == MARK && arr[x][y] != CLOSED && arr[x][y] != MINE)
    {
        cout << "Square can't be marked\n";
        return false;
    }

    if (command == UNMARK && arr[x][y] != MARKED && arr[x][y] != MARKED_MINE)
    {
        cout << "Square can't be unmarked\n";
        return false;
    }

    return true;
}

int countMines(int x, int y, char arr[ROWS][COLS])
{
    int counter = 0;

    int offsetX[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int offsetY[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 8; i++)
    {
        int newX = x + offsetX[i];
        int newY = y + offsetY[i];

        if (newX >= 0 && newX < ROWS && newY >= 0 && newY < COLS)
        {
            if (arr[newX][newY] == MINE || arr[newX][newY] == MARKED_MINE)
            {
                counter++;
            }
        }
    }

    return counter;
}

void openSquare(int x, int y, char arr[ROWS][COLS])
{
    if (x < 0 || x >= ROWS || y < 0 || y >= COLS || arr[x][y] != CLOSED)
    {
        return;
    }

    int minesCount = countMines(x, y, arr);
    arr[x][y] = '0' + minesCount;
    if (minesCount == 0)
    {
        openSquare(x - 1, y - 1, arr);
        openSquare(x, y - 1, arr);
        openSquare(x + 1, y - 1, arr);
        openSquare(x + 1, y, arr);
        openSquare(x + 1, y + 1, arr);
        openSquare(x, y + 1, arr);
        openSquare(x - 1, y + 1, arr);
        openSquare(x - 1, y, arr);
    }
}

bool hasGameEnded(char arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == CLOSED)
            {
                return false;
            }
        }
    }
    cout << "YOU WIN!";
    return true;
}

void revealBoard(char arr[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (arr[i][j] == MARKED)
            {
                arr[i][j] = CLOSED;
            }
            if (arr[i][j] == MARKED_MINE)
            {
                arr[i][j] = MINE;
            }
            openSquare(i, j, arr);
        }
    }
}

int main()
{
    char arr[ROWS][COLS]{};

    // fill the board
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = CLOSED;
        }
    }

    // place the mines on random places
    for (int i = 0; i < MINES; i++)
    {
        int x, y;
        do
        {
            x = rand() % ROWS;
            y = rand() % COLS;
        } while (arr[x][y] == MINE);
        arr[x][y] = MINE;
    }

    bool gameEnded = false;
    char command;
    int x, y;
    do
    {
        drawBoard(arr);
        cout << "Insert command and coordinates (o - open, m - mark, u - unmark)\n";
        do
        {
            cin.clear();
            cin >> command >> x >> y;
        } while (!isInputValid(command, x, y, arr));

        switch (command)
        {
        case OPEN:
            if (arr[x][y] == CLOSED)
            {
                openSquare(x, y, arr);
            }
            else if (arr[x][y] == MINE)
            {
                cout << "YOU LOST!\n";
                gameEnded = true;
            }
            break;
        case MARK:
            if (arr[x][y] == CLOSED)
            {
                arr[x][y] = MARKED;
            }
            else if (arr[x][y] == MINE)
            {
                arr[x][y] = MARKED_MINE;
            }
            break;
        case UNMARK:
            if (arr[x][y] == MARKED)
            {
                arr[x][y] = CLOSED;
            }
            else if (arr[x][y] == MARKED_MINE)
            {
                arr[x][y] = MINE;
            }
            break;
        }

        if (hasGameEnded(arr))
        {
            gameEnded = true;
        }
    } while (!gameEnded);

    revealBoard(arr);
    drawBoard(arr, true);
}