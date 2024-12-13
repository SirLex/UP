#include <iostream>
using namespace std;

int **readMatrix(int& size) {
    cin >> size;
    int **matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }
    return matrix;
}

double calculateMatrix(int** matr, int m) {
    if (matr == nullptr || m < 1) return -1;

    double sum = 0;
    for (int i = 0; i < m; i++) {
        sum += matr[i][i] + matr[i][m - i - 1];
    }
    return sum;
}

void deleteMatrix(int **matrix, int size) {
    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int size = 0;
    int **matrix = readMatrix(size);

    cout << calculateMatrix(matrix, size);

    deleteMatrix(matrix, size);

    return 0;
}