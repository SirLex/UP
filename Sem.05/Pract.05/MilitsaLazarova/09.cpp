int mostFrequent(int arr[], int size) {
	int maxFrL = 0;
	int mostFrEl;
	int currFrL = 0;
	int currEl;

	for (int i = 0; i < size; i++)
	{
		currEl = arr[i];
		for (int j = i; j < size; j++)
		{
			if (arr[j] == currEl) currFrL++;
		}
		if (currFrL > maxFrL) {
			maxFrL = currFrL;
			mostFrEl = currEl;
		}
		currFrL = 0;
	}
	return mostFrEl;
}