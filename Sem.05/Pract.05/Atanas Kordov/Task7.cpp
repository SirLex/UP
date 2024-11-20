const int ARRAY_SIZE = 3;
int matrixSum[ARRAY_SIZE][ARRAY_SIZE] = {};

void sumOfMatrices(int matrix[ARRAY_SIZE][ARRAY_SIZE], int matrix2[ARRAY_SIZE][ARRAY_SIZE])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; j < ARRAY_SIZE; j++)
        {
            matrixSum[i][j] = matrix[i][j] + matrix2[i][j];
        }
    }
}

void matrixMultiplyByNum(int matrix[ARRAY_SIZE][ARRAY_SIZE], int number)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; j < ARRAY_SIZE; j++)
        {
            matrixSum[i][j] = matrix[i][j] * number;
        }
    }
}