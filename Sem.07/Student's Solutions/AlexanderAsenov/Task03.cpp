#include <iostream>
using namespace std;

const int BUFFER = 100;

bool isLetter(char symbol) {
	return ('a' <= symbol && symbol <= 'z') || ('A' <= symbol && symbol <= 'Z');
}

int countWords(char* text) {
	if (text == nullptr) {
		return 0;
	}

	int count = 0;

	int i = 0;
	
	bool isNewWord = false;
	while (text[i] != '\0') {
		if (isLetter(text[i])) {
			isNewWord = true;
			while (isLetter(text[i])) {
				i++;
			}
		}
		
		if (isNewWord) {
			count++;
		}

		if (text[i] == '\0') {
			break;
		}

		i++;
		isNewWord = false;
	}

	return count;
}

int main()
{
	char text[BUFFER];
	cin.getline(text, BUFFER);
	cout << countWords(text) << endl;
}