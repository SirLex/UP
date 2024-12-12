#include <iostream>
int getStrLength(char* str) {
	int length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return length;
};

void reverseStr(char* str) {
	if (str == nullptr) return;
	int strLen = getStrLength(str);
	char swap;
	for (int i = 0; i < strLen / 2; i++)
	{
		swap = str[i];
		str[i] = str[strLen - 1 - i];
		str[strLen - 1 - i] = swap;
	}
	str[strLen] = '\0';
}

bool doExist(char* symbols, char* word) {
	reverseStr(word);
	int counter = 0;
	bool isContinuing = false;

	while (*symbols != '\0')
	{
		if (*word == '\0')
		{
			return 1;
		}
		if (*symbols == *word)
		{
			counter++;
			word++;
		}
		else
		{
			word -= counter;
			counter = 0;
		}
		symbols++;
	}
	return *word == '\0';
}
int main() {

}
