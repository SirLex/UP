#include <iostream>
using namespace std;

const int BUFFER = 100;

const int NUMBEROFSEPARATORS = 2;
char separators[NUMBEROFSEPARATORS] = { ' ', '\t'};

bool symbolIsContained(char* arr, int length, char symbol) {
	if (arr == nullptr) {
		return false;
	}

	for (int i = 0; i < length; i++)
	{
		if (arr[i] == symbol) {
			return true;
		}
	}

	return false;
}


int getNextWordEnd(char* str, int& start) {
	if (str == nullptr) {
		return -1;
	}

	while (symbolIsContained(separators, NUMBEROFSEPARATORS, str[start])) {
		start++;
	}

	int end = start;

	while (str[end] != '\0' && !symbolIsContained(separators, NUMBEROFSEPARATORS, str[end])) {
		end++;
	}

	return end;
}

char* GetWord(char str[]) {
	if (str == nullptr) {
		return nullptr;
	}

	int currentStart = 0;
	int currentEnd = 0;
	int currentMax = 0;

	int start = 0;
	int end = 0;
	while (str[start] != '\0') {
		end = getNextWordEnd(str, start);
		if (end - start > currentMax) {
			currentStart = start;
			currentEnd = end;
			currentMax = end - start;
		}

		if (str[start] == '\0' || str[end] == '\0') {
			break;
		}

		start = end + 1;
	}

	char* result = new char[BUFFER];

	for (int i = 0; i < currentMax; i++)
	{
		result[i] = str[currentStart + i];
	}

	result[currentMax] = '\0';

	return result;
}

int main()
{
	char str[BUFFER];
	cin.getline(str, BUFFER);

	char* result = GetWord(str);
	cout << result << endl;
	delete[] result;
}