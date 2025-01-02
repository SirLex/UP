#include <iostream>
using namespace std;

const int BUFFER = 100;

void strcpy(char* destination, char* source) {
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

int strlen(char* str) {
	int index = 0;
	while (str[index] != '\0') {
		index++;
	}

	return index;
}

void deleteAtPos(char* text, int pos, int length) {
	if (text == nullptr) {
		return;
	}

	int textLength = strlen(text);

	if (pos >= textLength) {
		return;
	}

	if (pos + length > textLength) {
		length = textLength - pos;
	}

	int i = 0;
	while (text[i + pos] != '\0') {
		text[i + pos] = text[i + pos + length];
		i++;
	}
}

char* insertAtPos(char* text, char* insertedText, int pos) {
	if (text == nullptr || insertedText == nullptr || pos < 0) {
		return nullptr;
	}

	int textLength = strlen(text);
	
	if (pos > textLength) {
		return nullptr;
	}

	int insertedLength = strlen(insertedText);
	char* result = new char[textLength + insertedLength + 1];

	int i = 0;
	while (i < pos) {
		result[i] = text[i];
		i++;
	}

	int j = 0;
	while (j < insertedLength) {
		result[i + j] = insertedText[j];
		j++;
	}

	while (i < textLength) {
		result[i + j] = text[i];
		i++;
	}

	result[textLength + insertedLength] = '\0';

	return result;
}

int searchInText(char* text, char* searched) {
	if (text == nullptr || searched == nullptr) {
		return -1;
	}

	int i = 0;
	while (text[i] != '\0') {
		int j = 0;

		while (text[i + j] == searched[j] && text[i + j] != '\0') {
			j++;
		}

		if (searched[j] == '\0') {
			return i;
		}

		i++;
	}

	return -1;
}

char* changeText(char* text, char* whereToChange, char* what) {
	if (text == nullptr || whereToChange == nullptr || what == nullptr) {
		return nullptr;
	}

	int whereToChangeLength = strlen(whereToChange);

	char* currentText = new char[strlen(text) + 1];

	strcpy(currentText, text);

	int i = searchInText(text, whereToChange);
	while (i != -1) {
		if (i > strlen(currentText)) {
			cout << "Impossible";
			break;
		}
		deleteAtPos(currentText, i, whereToChangeLength);
		char* insertedText = insertAtPos(currentText, what, i);
		delete[] currentText;
		currentText = insertedText;
		
		i = searchInText(currentText, whereToChange);
	}

	return currentText;
}

int main()
{
	char text[BUFFER];
	char whereToChange[BUFFER];
	char what[BUFFER];

	cin.getline(text, BUFFER);
	cin.getline(whereToChange, BUFFER);
	cin.getline(what, BUFFER);

	char* result = changeText(text, whereToChange, what);
	cout << result << endl;
	delete[] result;
}