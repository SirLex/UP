const int ARRAY_SIZE = 3;

bool isTriangleMatrix(int array[ARRAY_SIZE][ARRAY_SIZE])
{
    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (array[i][j] != 0)
            {
                return false;
            }
        }
    }

    return true;
}