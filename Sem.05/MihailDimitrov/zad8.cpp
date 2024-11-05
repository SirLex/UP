#include <iostream>
using namespace std;

const int n = 3;

void drawBoard(char board[n][n])
{
    cout << "  ";
    for (int i = 0; i < n; i++)
    {
        cout << "  " << i + 1 << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " " << i + 1 << " ";
        for (int j = 0; j < n; j++)
        {
            cout << " " << board[i][j] << " ";
            if (j != n - 1)
            {
                cout << "|";
            }
        }
        cout << endl;

        if (i != n - 1)
        {
            cout << "   ";
            for (int j = 0; j < n; j++)
            {
                cout << "---";
                if (j != n - 1)
                {
                    cout << "+";
                }
            }
            cout << endl;
        }
    }
}

bool hasGameEnded(char board[n][n])
{

    // check each row
    for (int i = 0; i < n; i++)
    {
        if (board[i][0] == ' ')
        {
            continue;
        }

        bool hasEnded = true;

        for (int j = 1; j < n; j++)
        {
            if (board[i][j - 1] != board[i][j])
            {
                hasEnded = false;
                break;
            }
        }
        if (hasEnded)
        {
            cout << board[i][0] << " wins!";
            return true;
        }
    }

    // check each col
    for (int i = 0; i < n; i++)
    {
        if (board[0][i] == ' ')
        {
            continue;
        }
        bool hasEnded = true;

        for (int j = 1; j < n; j++)
        {
            if (board[j - 1][i] != board[j][i])
            {
                hasEnded = false;
                break;
            }
        }
        if (hasEnded)
        {
            cout << board[0][i] << " wins!";
            return true;
        }
    }

    // check diagonals
    bool hasEnded = true;
    if (board[0][0] != ' ')
    {
        for (int i = 1; i < n; i++)
        {
            if (board[i - 1][i - 1] != board[i][i])
            {
                hasEnded = false;
                break;
            }
        }
        if (hasEnded)
        {
            cout << board[0][0] << " wins!";
            return true;
        }
    }

    if (board[0][n - 1] != ' ')
    {
        hasEnded = true;
        for (int i = 1; i < n; i++)
        {
            if (board[i - 1][n - i] != board[i][n - i - 1])
            {
                hasEnded = false;
                break;
            }
        }
        if (hasEnded)
        {
            cout << board[0][n - 1] << " wins!";
            return true;
        }
    }

    return false;
}

bool areCoordinatesValid(char board[n][n], int x, int y)
{
    if (x >= 1 && x <= n && y >= 1 && y <= n)
    {
        return board[x - 1][y - 1] == ' ';
    }
    return false;
}

int main()
{
    char board[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = ' ';
        }
    }

    char currentPlayer = 'X';

    drawBoard(board);
    do
    {
        cout << "It's " << currentPlayer << " turn! Type a coordinate! Ex: \"2 3\" " << endl;
        int x, y;
        cin >> x >> y;
        while (!areCoordinatesValid(board, x, y))
        {
            cout << "Enter valid coordinates" << endl;
            cin >> x >> y;
        }
        board[x - 1][y - 1] = currentPlayer;
        currentPlayer = currentPlayer == 'X' ? 'O' : 'X';
        drawBoard(board);
    } while (!hasGameEnded(board));
}