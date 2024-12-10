#include <iostream>
using namespace std;

const int BUFFER = 100;

int countSymbols(char* text, char symbol) {
	int counter = 0;
	while (*text != '\0') {
		if (*text == symbol) {
			counter++;
		}
		text++;
	}

	return counter;
}

int main()
{
	char text[BUFFER];
	cin.getline(text, BUFFER);
	char a;
	cin >> a;

	cout << countSymbols(text, a) << endl;
}

