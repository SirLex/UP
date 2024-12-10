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

int strLength(char* str) {
	if (str == nullptr) {
		return 0;
	}
	
	int count = 0;

	while (str[count] != '\0') {
		count++;
	}

	return count;
}

char* getSubstring(char* text, int start, int end) {
	if (start > end) {
		start = start ^ end;
		end = start ^ end;
		start = start ^ end;
	}
	
	int length = strLength(text);
	if (length < start) {
		return 0;
	}

	char result[BUFFER];

	if (length < end) {
		end = length;
	}

	for (int i = start, j = 0; i <= end; i++, j++)
	{
		result[j] = text[i];
	}

	result[end + 1] = '\0';

	return result;
}


int main()
{
	char text[BUFFER];
	cin.getline(text, BUFFER);
	int beg, end;
	cin >> beg >> end;

	char buff[BUFFER];
	strCopy(getSubstring(text, beg, end), buff);
	cout << buff << endl;
}