const int ARRAY_SIZE = 3;

void printZigZag(int array[ARRAY_SIZE][ARRAY_SIZE])
{
	for(int i = 0; i < ARRAY_SIZE; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = ARRAY_SIZE - 1; i >= 0; j--)
			{
				std::cout << array[i][j];
			}
		}

		else
		{
			for (int j = 0; j < ARRAY_SIZE; j++)
			{
				std::cout << array[i][j];
			}
		}
		
		std::cout << std::endl;
	}
}