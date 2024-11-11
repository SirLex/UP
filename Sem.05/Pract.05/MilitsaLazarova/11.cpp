int* mergeAndSort(int arr[], int arr2[], int result[], int size1, int size2, int &size3) {
	int arr1Ind = 0;
	int arr2Ind = 0;
	int resultInd = 0;

	while (arr1Ind < size1 || arr2Ind < size2) {
		if (arr1Ind < size1 && arr2Ind < size2)
		{
			if (arr[arr1Ind] < arr2[arr2Ind])
			{
				result[resultInd++] = arr[arr1Ind++];
			}
			else if (arr[arr1Ind] > arr2[arr2Ind])
			{
				result[resultInd++] = arr2[arr2Ind++];
			}
			else
			{
				result[resultInd++] = arr[arr1Ind++];
				arr2Ind++;
			}
		}
		else {
			if (arr1Ind<size1)
			{
				for (int i = arr1Ind; i < size1; i++)
				{
					result[resultInd++] = arr[arr1Ind++];
				}
			}
			else {
				for (int i = arr2Ind; i < size2; i++)
				{
					result[resultInd++] = arr2[arr2Ind++];
				}
			}
		}
	}
		size3 = resultInd;
	return result;
}