#include <iostream>
using namespace std;

const size_t BUFFER = 100;

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

char* changeSymbols(char* text, char x, char a, char b) {
	
	if (text == nullptr) {
		return nullptr;
	}
	
	int i = 0;
	int counter = 0;
	char result[BUFFER];
	
	while (text[i] != '\0') {
		if (text[i] == x) {
			if (counter % 2 == 0) {
				result[i] = a;
			}
			else {
				result[i] = b;
			}

			counter++;
		}
		else {
			result[i] = text[i];
		}

		i++;
	}

	result[i] = '\0';

	return result;
}

int main()
{
	char text[BUFFER];
	cin.getline(text, BUFFER);
	char x, a, b;
	cin >> x >> a >> b;

	char buff[BUFFER];
	strCopy(changeSymbols(text, x, a, b), buff);
	cout << buff << endl;
}