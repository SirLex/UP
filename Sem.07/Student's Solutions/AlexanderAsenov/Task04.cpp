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

int strLen(char* str) {
	int index = 0;
	while (str[index] != '\0') {
		index++;
	}

	return index;
}

bool isLetter(char symbol) {
	return ('a' <= symbol && symbol <= 'z') || ('A' <= symbol && symbol <= 'Z');
}

void toLower(char* arr) {
	if (arr == nullptr) {
		return;
	}

	while (*arr != '\0') {
		if ('A' < *arr && *arr < 'Z') {
			*arr += 'a' - 'A';
		}
		arr++;
	}
}

void getNextWordIndexes(char* text, int& start, int& end) {
	if (text == nullptr) {
		start = -1;
		end = -1;
		return;
	}

	while (!isLetter(text[start]) && text[start] != '\0') {
		start++;
	}

	if (text[start] == '\0') {
		start = -1;
		end = -1;
		return;
	}
	
	int i = start;
	while (isLetter(text[i])) {
		i++;
	}
	end = i;
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

char* getMostCommonWord(char* text) {
	int wordsLength = countWords(text);

	char** words = new char*[wordsLength];

	int i = 0;
	int start = 0;
	while (true) {
		int end = 0;

		getNextWordIndexes(text, start, end);

		if (start == -1) {
			break;
		}

		words[i] = new char[end - start + 1];
		for (size_t j = start, k = 0; j < end; j++, k++)
		{
			words[i][k] = text[j];
		}

		words[i][end - start] = '\0';

		start = end;
		i++;
	}

	int* arr = new int[wordsLength];
	for (size_t j = 0; j < wordsLength; j++)
	{
		arr[j] = 0;
	}

	for (size_t j = 0; j < wordsLength; j++)
	{
		for (size_t k = 0; k < wordsLength; k++)
		{
			int l = 0;
			while (words[j][l] == words[k][l] && words[j][l] != '\0' && words[k][l] != '\0') {
				l++;
			}

			if (words[j][l] == '\0' && words[k][l] == '\0') {
				arr[j]++;
			}
		}
	}

	int resultIndex = 0;
	for (int i = 0; i < wordsLength; i++)
	{
		if (arr[resultIndex] < arr[i]) {
			resultIndex = i;
		}
	}


	char* result = new char[strLen(words[resultIndex])+1];
	strcpy(result, words[resultIndex]);


	for (size_t i = 0; i < wordsLength; i++)
	{
		delete[] words[i];
	}
	delete[] words;

	return result;
}

int main()
{
	char text[BUFFER];
	cin.getline(text, BUFFER);

	char* result = getMostCommonWord(text);
	cout << result << endl;
	delete[] result;
}