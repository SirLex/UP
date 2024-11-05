#include <iostream>
using namespace std;

const int M = 3;
const int N = 4;

void transposeMatrix(int arr[M][N], int arrT[N][M])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arrT[j][i] = arr[i][j];
        }
    }
}

int main()
{

    int arr[M][N];
    int arrT[N][M];

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = i * N + j + 1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    transposeMatrix(arr, arrT);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << arrT[i][j] << " ";
        }
        cout << endl;
    }
}