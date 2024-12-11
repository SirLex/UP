#include <iostream>
char* CheckStr(char* str, char* result) {
	if (str == nullptr)
	{
		return result;
	}
	int asciiTableSymbols[128] = { 0 };
	int counter = 0;
	while (*str != '\0')
	{
		asciiTableSymbols[*str]++;
		str++;
		counter++;
	}
	str -= counter;
	while (*str != '\0')
	{
		if (asciiTableSymbols[*str] > 1)
		{
			*result = *str;
			asciiTableSymbols[*str] = 0;
			result++;

		}
		str++;
	}
	*result = '\0';
	return result;
}
int main() {

}