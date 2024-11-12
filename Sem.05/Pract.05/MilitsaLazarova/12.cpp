#include <iostream>

const double epsiolon = 1e-10;
bool aritmOpr(int arr[], int size) {
	int diff = arr[0] - arr[1];
	for (int i = 1; i < size - 1; i++)
	{
		if (arr[i] - arr[i + 1] != diff)
		{
			return false;
		}
	}
	return true;
}

bool geomOpr(int arr[], int size) {
	double quotient = (double)arr[0] / arr[1];
	for (int i = 2; i < size - 1; i++)
	{
		double currQtnt = (double)arr[i] / arr[i + 1];
		if (abs(currQtnt - quotient) > epsiolon)
		{
			return false;
		}
	}
		return true;
}
void linearRelation(int arr[], int size, int arr2[], int size2) {
	
	bool arr1ThereIs=false;

	bool diffcheck = arr[0] - arr[1] == arr[1] - arr[2];
	bool quotCheck = abs((double)arr[0] / arr[1] - (double)arr[1] / arr[2]) < epsiolon;
	bool diffcheck2 = arr2[0] - arr2[1] == arr2[1] - arr2[2];
	bool quotCheck2 = abs((double)arr2[0] / arr2[1] - (double)arr2[1] / arr2[2]) < epsiolon;

	if ((!diffcheck && !quotCheck)||(!diffcheck2 && !quotCheck2))
	{
		std::cout << "no";
		return;
	}
	else {
		if ((aritmOpr(arr, size) || geomOpr(arr, size)) && (aritmOpr(arr2, size2) || geomOpr(arr2, size2))) std::cout << "yes";
		else std::cout << "no";
	}
}
