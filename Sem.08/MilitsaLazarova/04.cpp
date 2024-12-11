#include <iostream>
bool isDigit(int symbol) {
	return symbol >= '0' && symbol <= '9';
}

int parseCharToInt(char symbol) {
	if (isDigit(symbol))
	{
		return symbol - '0';
	}
	return -1;
}

int parseStrToInt(char* str, int beginning) {
	int result = 0;
	int currNum = 0;
	for (int i = beginning; i < beginning + 2; i++)
	{
		currNum = parseCharToInt(str[i]);
		if (currNum < 0) return -1;
		result = result * 10 + currNum;
	}
	return result;
}

bool dataIsValid(int hours, int minutes, int seconds) {
	return hours >= 0 && hours <= 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60;
}

bool isRightLength(char* str, int length) {
	int counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return counter == length;
}

int CheckTimeStr(char* str) {
	if (str == nullptr) return -1;

	const int length = 8;
	if (!isRightLength(str, length)) return -1;

	const int firstColonInd = 2;
	const int secColonInd = 5;
	if (str[firstColonInd] != ':' || str[secColonInd] != ':') return -1;

	const int stepToNextBegInd = 3;
	int currBegInd = 0;

	int hours = parseStrToInt(str, currBegInd);
	currBegInd += stepToNextBegInd;
	int minutes = parseStrToInt(str, currBegInd);
	currBegInd += stepToNextBegInd;
	int seconds = parseStrToInt(str, currBegInd);

	return dataIsValid(hours, minutes, seconds);
}

int main() {
	char clock[] = "00:39:11";
	std::cout << CheckTimeStr(clock);
}