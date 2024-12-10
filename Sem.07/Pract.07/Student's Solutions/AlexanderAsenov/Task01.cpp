#include <iostream>
using namespace std;

const int BUFFER = 100;

void strCopy(char* src, char* dest) {
	if (dest == nullptr || src == nullptr) {
		return;
	}

	int i = 0;

	while (*src != '\0') {
		dest[i++] = *src;
		src++;
	}

	dest[i] = '\0';
}

char* getOnlySmallLetters(char* text) {
	char result[BUFFER];
	int index = 0;

	while (*text != '\0') {		
		if ('a' <= *text && *text <= 'z') {
			result[index] = *text;
			index++;
		}

		text++;
	}
	
	result[index] = '\0';

	return result;
}

int main()
{
	char text[BUFFER];
	cin.getline(text, BUFFER);

	char buff[BUFFER];
	strCopy(getOnlySmallLetters(text), buff);
	cout << buff << endl;
}