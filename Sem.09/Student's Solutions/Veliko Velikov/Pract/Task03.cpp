#include <iostream>

using namespace std;

void SortArray(int* arr, int count)
{
	int count = sizeof(arr);
	for (int i = 0; i < count - 1; i++)
	{
		for (int k = i; k < count - 1; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				arr[k] += arr[k + 1];
				arr[k + 1] = arr[k] - arr[k + 1];
				arr[k] -= arr[k + 1];
			}
		}
	}
}

int* MergeArray(int* arr1, int count1, int* arr2, int count2)
{
	int countMerged = count1 + count2;
	int* arrMerged = new int[countMerged];

	int iFirst = 0;
	int iSecond = 0;
	int iMerged = 0;

	while (iFirst < count1 || iSecond < count2)
	{
		if (arr1[iFirst] > arr2[iSecond])
		{
			arrMerged[iMerged] = arr1[iFirst];
			iFirst++;
		}
		else if (arr1[iFirst] < arr2[iSecond])
		{
			arrMerged[iMerged] = arr1[iSecond];
			iFirst++;
		}
		else
		{
			arrMerged[iMerged] = arr1[iFirst];
			iFirst++;
			iSecond++;

		}
		iMerged++;
	}

	return arrMerged;
}

int main()
{
	int count1; cin >> count1;
	int* arr1 = {};
	int count2; cin >> count2;
	int* arr2 = {};

	SortArray(arr1, count1);
	SortArray(arr2, count2);
	int* arrMerged = MergeArray(arr1, count1, arr2, count2);

	delete[] arrMerged;
}