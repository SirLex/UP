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

int indexOf(char* str, char* substring, int start) {
	if (str == nullptr || substring == nullptr) {
		return -1;
	}

	char strCopy[BUFFER];
	char substringCopy[BUFFER];

	stringCopy(strCopy, str);
	stringCopy(substringCopy, substring);

	toLower(strCopy);
	toLower(substringCopy);

	int i = start;

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

bool isWord(char* str, int start, int length){
	char strCopy[BUFFER];
	stringCopy(strCopy, str);
	toLower(strCopy);

	if (!(start == 0 || str[start - 1] <= 'a' || 'z' <= str[start - 1])) {
		return false;
	}

	int end = start + length - 1;
	if (!(str[end] == '\0' || str[end + 1] <= 'a' || 'z' <= str[end + 1])) {
		return false;
	}

	return true;
}

void changeWithAsterisks(char* str, char* substring) {
	if (str == nullptr) {
		return;
	}

	int i = 0;
	int length = getStrLength(substring);
	toLower(substring);

	while (true) {
		i = indexOf(str, substring, i);

		if (i == -1) {
			break;
		}

		if (isWord(str, i, length)) {
			changeWithAsterisksAt(str, i, length);
		}
		else {
			i++;
		}
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