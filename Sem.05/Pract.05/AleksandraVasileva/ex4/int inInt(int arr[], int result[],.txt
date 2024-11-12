int* inInt(int arr[], int result[], int size, int &resultSize,int lowerB, int upperB) {
	int currInd = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= lowerB && arr[i] <= upperB)
		{
			result[currInd++] = arr[i];
		}
	}
	resultSize = currInd;
	return result;
}