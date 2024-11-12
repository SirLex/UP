int* indexValueCh(int arr[], int size) {
	int currNum;
	bool isPart;
	for (int i = 0; i < size; i++)
	{
		isPart = false;
		if (arr[i] == i) continue;
		else {
			currNum = arr[i];
			while (currNum != 0)
			{
				if (currNum % 10 == i)
				{
					isPart = true;
					break;
				}
				currNum /= 10;
			}
		}
		if (!isPart) arr[i] = 0;
	}
	return arr;
}