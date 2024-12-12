#include <iostream>

using namespace std;

const int strTextSize = 1024;
const int asciiCodeSize = 256;

//ZAD 2
int strLen(char* strText) {
	cout << "strLen";
	int count = 0;

	while (*strText != '\0') {
		count++;
		strText++;


	}
	return count;

}

int CheckStr(char* strText) {

	int lenstrText = strLen(strText);

	if (strText == nullptr || lenstrText < 2) {
		return 0;
	}

	int* buff[asciiCodeSize];
	


	int countOfSymbols[256] = {};

	while (*strText != '\0') {
		countOfSymbols[*strText]++;
	}

	int oddCount=0;
	for (size_t i = 0; i < 256; i++)
	{
		if (countOfSymbols[i] % 2 == 1) {
			oddCount++;
		}
	}

	if (lenstrText % 2 == 0) {
		if (oddCount == 1) {
			return 0;
		}
		else {
			return 1;
		}
	}
	else {
		if (oddCount > 0) {
			return 1;
		}
		else {
			return 0;
		}
	}


}

int main() {

	char strText[strTextSize];

	cin.getline(strText, strTextSize);
	cout << endl;
	cout<<CheckStr(strText);
	

}
