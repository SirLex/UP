bool AnalyzeArr(int* arr, int length)
{
	if (arr == nullptr || length < 2)
	{
		return -1;
	}
	int check = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == i)
		{
			check++;
			if (check == 2)
			{
				return true;
			}
		}
	}
	return false;
}
