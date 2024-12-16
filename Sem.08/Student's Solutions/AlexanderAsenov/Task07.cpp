#include <iostream>
using namespace std;

const int BUFFER = 100;

int strLength(char* str) {

	if (str == nullptr) {
		return 0;
	}

	int count = 0;

	while (*str != '\0') {
		str++;
		count++;
	}

	return count;
}

bool doExist(char* symbols, char* word) {
	if (symbols == nullptr || word == nullptr) {
		return false;
	}

	int length = strLength(symbols);

	for (int i = length - 1; i >= 0; i--)
	{
		int j = i;
		int k = 0;
		while (word[k] != '\0' && j >= 0 && symbols[j] == word[k]) {
			j--;
			k++;
		}

		if (word[k] == '\0') {
			return true;
		}
	}

	return false;
}

int main()
{
	char symbols[BUFFER];
	char word[BUFFER];

	cin.getline(symbols, BUFFER);
	cin.getline(word, BUFFER);

	cout << doExist(symbols, word) << endl;
}