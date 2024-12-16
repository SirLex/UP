#include <iostream>
using namespace std;

int getLength(char* str) {
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

int CheckStr(char str[]) {
	if (str == nullptr ) {
		return -1;
	}

	if (str[0] == '0') {
		return 1;
	}

	int stringLength = getLength(str);
	char leftSymbol = str[0];
	for (int i = 1; i < stringLength; i++)
	{
		leftSymbol = leftSymbol ^ str[i];
	}

	if (leftSymbol == 0 && stringLength % 2 == 0) {
		return 1;
	}
	else if (stringLength % 2 == 0) {
		return 0;
	}

	int count = 0;
	for (int i = 0; i < stringLength; i++)
	{
		if (str[i] == leftSymbol) {
			count++;
		}
	}

	return count % 2 == 1 ? 1 : 0;
}

int main()
{
	char str[] = "beblehl";
	cout << CheckStr(str) << endl;
}