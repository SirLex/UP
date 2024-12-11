#include <iostream>
int CheckStr(char* str) {
	if (str == nullptr) return -1;
	bool asciiSymbols[128] = { false };
	while (*str != '\0')
	{
		asciiSymbols[*str] = !asciiSymbols[*str];
		str++;
	}
	int oddCounter = 0;
	for (int i = 0; i < 128; i++)
	{
		if (oddCounter > 1)
		{
			return 0;
		}
		if (asciiSymbols[i])
		{
			oddCounter++;
		}
	}
	return oddCounter <= 1;
}
int main() {

}