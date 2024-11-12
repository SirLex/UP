int* intersection(int arr[], int arr2[], int result[], int size1, int size2, int &size3)
{
	int currResInd = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (arr[i] == arr2[j])
			{
				result[currResInd++] = arr[i];
				break;
			}
		}
	}
	size3 = currResInd;
	return result;
}

int* Union(int arr[], int arr2[], int result[], int size1, int size2, int& size3)
{
	int currResInd = 0;
	for (int i = 0; i < size1; i++)
	{
		result[currResInd++] = arr[i];
	}
	for (int i = 0; i < size2; i++)
	{
		bool isPart = false;
		for (int j = 0; j < size1; j++)
		{
			if (arr2[i]==arr[j])
			{
				isPart = true;
				break;
			}
		}
		if (!isPart) result[currResInd++] = arr2[i];
	}
	size3 = currResInd;
	return result;
}