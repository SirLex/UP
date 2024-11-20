const int ARRAY_SIZE = 4;

bool isMagicCube(int array[ARRAY_SIZE][ARRAY_SIZE])
{
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    int rowsSums[ARRAY_SIZE] = {};

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        mainDiagonalSum += array[i][i];
        secondaryDiagonalSum += array[i][ARRAY_SIZE - i - 1];

        int currentRowSum = 0;
        for (int j = 0; j < ARRAY_SIZE; j++)
        {
            currentRowSum += array[i][j];
        }
        rowsSums[i] = currentRowSum;
    }

    if (mainDiagonalSum != secondaryDiagonalSum)
    {
        return false;
    }

    for (int i = 0; i < ARRAY_SIZE - 1; i++)
    {
        if (rowsSums[i] != rowsSums[i + 1])
        {
            return false;
        }
    }

    return true;
}