#include <iostream>

using namespace std;

const int Size = 3;

double calculateMatrix(int matr[][Size], int m) {
    if (matr == nullptr) {
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += matr[i][i] + matr[i][m - i - 1];
    }
    return sum;
}

int main()
{
    
    int matrix[Size][Size];
    

    for (int i = 0; i < Size; i++) {
        for (int j = 0; j < Size; j++) {
            cout << "Enter number:";
            cin >> matrix[i][j];
        }
    }

    cout << calculateMatrix(matrix,Size);
}
