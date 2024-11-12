int lengthReduction(int arr[], int size) {
	int maxLgth = 0;
	int currlength = 0;

	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] > arr[i+1]) currlength++;
		else {
			if (currlength > maxLgth) {
				maxLgth = currlength;
			}
			currlength = 0;
		}
	}
	if (currlength > maxLgth) maxLgth = currlength;
	return ++maxLgth;
}