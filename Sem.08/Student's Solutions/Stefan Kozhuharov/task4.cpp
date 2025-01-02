#include <iostream>
using namespace std;

int StrLen(char arr[]) {

	int counter = 0;

	while (*arr != '\0') {

		counter++;
		arr++;

	}

	return counter;

}


int CheckTimeStr(char arr[]) {

	int length = StrLen(arr);

	if (arr == nullptr || length != 8) {

		return -1;

	}

	if (*arr < '0' || *arr > '2') {

		return 0;

	}
	if (*arr == '2') {

		arr++;
		if (*arr < '0' || *arr > '3') {

			return 0;

		}

	} else {

		arr++;
		if (*arr < '0' || *arr > '9') {

			return 0;

		}

	}

	arr++;
	if (*arr != ':') {

		return 0;

	}

	arr++;
	if (*arr < '0' || *arr > '5') {

		return 0;

	}
	arr++;
	if (*arr < '0' || *arr > '9') {

		return 0;

	}

	arr++;
	if (*arr != ':') {

		return 0;

	}

	arr++;
	if (*arr < '0' || *arr > '5') {

		return 0;

	}
	arr++;
	if (*arr < '0' || *arr > '9') {

		return 0;

	}

	return 1;

}

int main()
{
	
	int const MAX_SIZE = 9;
	char time[MAX_SIZE] = "12:00:00";
	cout << CheckTimeStr(time);

}
