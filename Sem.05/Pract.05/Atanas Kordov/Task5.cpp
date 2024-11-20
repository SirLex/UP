const int ARRAY_SIZE = 3;

void transponateMatrix(int array[ARRAY_SIZE][ARRAY_SIZE])
{
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = array[i][j];
            array[i][j] = array[j][i];
            array[j][i] = temp;
        }
    }
}
