#include <iostream>
using namespace std;

const int TABLELENGTH = 256;

char* CheckStr(char str[]) {
	char* result = new char[TABLELENGTH];
	if (str == nullptr) {
		result[0] = '\0';
		return result;
	}

	int table[TABLELENGTH] = {};

	int i = 0;
	while (str[i] != '\0') {
		table[str[i]]++;
		i++;
	}

	i = 0;
	int j = 0;
	while (str[i] != '\0') {
		if (table[str[i]] > 1) {
			table[str[i]] = 0;
			result[j] = str[i];
			j++;
		}

		i++;
	}

	result[j] = '\0';

	return result;
}

int main()
{
	char str[] = "aif8sltt8f";
	char* result = CheckStr(str);
	cout << result << endl;
	delete[] result;
}