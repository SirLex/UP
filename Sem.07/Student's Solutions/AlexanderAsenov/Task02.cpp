#include <iostream>
using namespace std;

const int BUFFER = 100;

void toUpper(char* arr) {
	if (arr == nullptr) {
		return;
	}

	while (*arr != '\0') {
		
		if ('a' < *arr && *arr < 'z') {
			*arr += 'A' - 'a';
		}

		arr++;
	}
}

void toLower(char* arr) {
	if (arr == nullptr) {
		return;
	}

	while (*arr != '\0') {
		if ('A' < *arr && *arr < 'Z') {
			*arr += 'a' - 'A';
		}
		arr++;
	}
}

int main()
{
	char str[BUFFER];
	cin.getline(str, BUFFER);
	
	toUpper(str);
	cout << str << endl;

	toLower(str);
	cout << str << endl;
}