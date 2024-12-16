#include <iostream>
using namespace std;

bool AnalyzeArr(int arr[], int length) {
	if (length <= 0) {
		return false;
	}
	
	if (arr == nullptr) {
		return false;
	}

	int count = 0;
	for (size_t i = 0; i < length; i++)
	{
		if (arr[i] == i) {
			count++;
		}
	}

	return count >= 2;
}

int main()
{
	const int length = 3;
	int array[] = {0, 1, 3};
	cout << AnalyzeArr(array, length) << endl;
}