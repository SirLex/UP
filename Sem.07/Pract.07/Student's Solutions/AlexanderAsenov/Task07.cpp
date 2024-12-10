#include <iostream>
using namespace std;

const int BUFFER = 100;

int stringCompare(char* str1, char* str2) {
	while (*str1 == *str2 && *str1 != '\0') {
		str1++;
		str2++;
	}

	if (*str1 == '\0' && *str2 == '\0') {
		return 0;
	}
	else if (*str1 == '\0') {
		return -1;
	}
	else if(*str2 == '\0') {
		return 1;
	}
	else if(*str1 > *str2) {
		return 1;
	}
	else {
		return -1;
	}
}

int main()
{
	char str1[BUFFER];
	char str2[BUFFER];

	cin.getline(str1, BUFFER);
	cin.getline(str2, BUFFER);

	cout << stringCompare(str1, str2) << endl;
}