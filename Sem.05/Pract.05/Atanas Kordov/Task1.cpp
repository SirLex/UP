const int ARRAY_SIZE = 3;

int smallestElement(int array[ARRAY_SIZE][ARRAY_SIZE])
{
    int smallest = array[0][0];
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = 0; j < ARRAY_SIZE; j++)
        {
            if (smallest > array[i][j]) smallest = array[i][j];
        }
    }
        return smallest;
}