int sequenceLength(int arr[], int size) {
	int maxLgth = 1;
	int currlength = 1;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] == arr[i + 1]) currlength++;
		else {
			if (currlength > maxLgth) {
				maxLgth = currlength;
			}
			currlength = 1;
		}
	}
	if (currlength > maxLgth) maxLgth = currlength;
	return maxLgth;
}