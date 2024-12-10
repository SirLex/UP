#include <iostream>
using namespace std;

const int BUFFER = 100;
const int NUMBEROFLETTERS = 26;

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

void removeCharAt(char* str, int index) {
	if (str == nullptr) {
		return;
	}

	int length = getStrLength(str);
	if (index >= length) {
		return;
	}
	
	while (str[index] != '\0') {
		str[index] = str[index + 1];
		index++;
	}

	index--;
	str[index] = '\0';
}

void removeRepeatingCharachters(char* str) {
	if (str == nullptr) {
		return;
	}

	int i = 0;

	bool isAlreadyMet[NUMBEROFLETTERS] = {};

	while (str[i] != '\0') {
		

		if (isAlreadyMet[str[i] - 'a']) {
			removeCharAt(str, i);
			i--;
		}
		else {
			isAlreadyMet[str[i] - 'a'] = true;
		}

		i++;
	}
}

bool isValid(char* str) {
	while (*str != '\0') {
		if (*str < 'a' || 'z' < *str) {
			return false;
		}
			
		str++;
	}

	return true;
}

int main()
{
	char str[BUFFER];

	cin.getline(str, BUFFER);

	if (isValid(str)) {
		removeRepeatingCharachters(str);
		cout << str << endl;
	}
	else {
		cout << "Invalid input";
	}
}