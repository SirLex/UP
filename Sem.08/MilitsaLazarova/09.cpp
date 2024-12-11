#include <iostream>
char* getSubstring(char* str, char* result, int startingIndex, int maxLength) {
	if (str == nullptr) return result;
	for (int i = 0; i < maxLength; i++)
	{
		*result = str[startingIndex + i];
		result++;
	}
	*result = '\0';
	return result;
}

char* GetWord(char* str, char* result) {
	if (str == nullptr) return result;
	int maxLength = 0;
	int currLength = 0;
	int startingIndex = 0;
	int currIndex = 0;
	int rotations = 0;
	while (*str != '\0')
	{
		if (*str != ' ')
		{
			if (!currLength)
			{
				currIndex = rotations;
			}
			currLength++;
		}
		else
		{
			if (maxLength < currLength)
			{
				maxLength = currLength;
				startingIndex = currIndex;
			}
			currLength = 0;
		}
		rotations++;
		str++;
	}
	str -= rotations;
	getSubstring(str, result, startingIndex, maxLength);
	return result;
}

int main() {

}