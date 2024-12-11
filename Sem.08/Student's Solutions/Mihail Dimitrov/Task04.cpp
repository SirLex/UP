#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

int CheckTimeStr(char arr[]) {
	if (arr == nullptr)
	{
		return -1;
	}
	if (*arr < '0' || *arr > '2')
	{
		return 0;
	}

	if (*arr == '2')
	{
		arr++;
		if (*arr < '0' || *arr > '3') {
			return 0;
		}
	}
	else {
		arr++;
		if (*arr < '0' || *arr > '9') {
			return 0;
		}
	}

	arr++;
	if (*arr != ':')
	{
		return 0;
	}

	arr++;
	if (*arr < '0' || *arr > '5')
	{
		return 0;
	}

	arr++;
	if (*arr < '0' || *arr > '9')
	{
		return 0;
	}

	arr++;
	if (*arr != ':')
	{
		return 0;
	}

	arr++;
	if (*arr < '0' || *arr > '5')
	{
		return 0;
	}

	arr++;
	if (*arr < '0' || *arr > '9')
	{
		return 0;
	}

	arr++;
	if (*arr != '\0') {
		return 0;
	}
	return 1;

}

int main()
{
    char arr[MAX_SIZE] = "23:00:00";
    cout << CheckTimeStr(arr);
}
