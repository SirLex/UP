#include <iostream>
using namespace std;

const int BUFFER = 100;

int getStrLength(char* str) {
	if (str == nullptr) {
		return 0;
	}

	int count = 0;
	while (str[count] != '\0') {
		count++;
	}

	return count;
}

void toLower(char* str) {
	if (str == nullptr) {
		return;
	}

	int i = 0;
	while (str[i] != '\0') {
		if ('A' <= str[i] && str[i] <= 'Z') {
			str[i] = str[i] - 'A' + 'a';
		}

		i++;
	}
}

void stringCopy(char* destination, char* source) {
	if (source == nullptr || destination == nullptr) {
		return;
	}

	int i = 0;
	while (source[i] != '\0') {
		destination[i] = source[i];
		i++;
	}

	destination[i] = '\0';
}

int firstIndexOf(char* str, char* substring) {
	if (str == nullptr || substring == nullptr) {
		return -1;
	}

	char strCopy[BUFFER];
	char substringCopy[BUFFER];

	stringCopy(strCopy, str);
	stringCopy(substringCopy, substring);

	toLower(strCopy);
	toLower(substringCopy);

	int i = 0;

	while (strCopy[i] != '\0') {
		int j = 0;
		while (strCopy[i + j] != '\0' && strCopy[i + j] == substringCopy[j]) {
			j++;
			if (substringCopy[j] == '\0') {
				return i;
			}
		}

		i++;
	}

	return -1;
}

void changeWithAsterisksAt(char* str, int index, int length) {
	if (str == nullptr) {
		return;
	}

	while (length > 0) {
		str[index] = '*';
		
		index++;
		length--;
	}
}

void changeWithAsterisks(char* str, char* substring) {
	if (str == nullptr) {
		return;
	}
	
	int i = 0;
	int length = getStrLength(substring);
	toLower(substring);

	while(true) {
		i = firstIndexOf(str, substring);

		if (i == -1) {
			break;
		}

		changeWithAsterisksAt(str, i, length);
	}
}

int main()
{
	char str[BUFFER];
	char substring[BUFFER];
	
	cin.getline(str, BUFFER);
	cin.getline(substring, BUFFER);

	changeWithAsterisks(str, substring);

	cout << str << endl;
}