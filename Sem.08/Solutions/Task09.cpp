#include <iostream>

bool isWhiteSpace(char ch) {
	return ch == ' ' || ch == '\t' || ch == '\n';
}

void GetWord(char str[], char* result) {
	if (!str || !result) return;

	int longestWordLen = 0;
	char* longestWordBeg = nullptr;
	int currentWordLen = 0;

	while (*str) {
		if (isWhiteSpace(*str)) {
			if (currentWordLen > longestWordLen) {
				longestWordLen = currentWordLen;
				longestWordBeg = str - longestWordLen;
			}
			currentWordLen = 0;
		}
		else {
			currentWordLen++;
		}

		str++;
	}

	/* Check last word length */
	if (currentWordLen > longestWordLen) {
		longestWordLen = currentWordLen;
		longestWordBeg = str - longestWordLen;
	}


	if (!longestWordBeg) return;

	int resultIdx = 0;

	/* Cannot check for white space because if longest
	word is last word then no white space at the end */
	while (longestWordLen > 0) {
		result[resultIdx++] = *longestWordBeg;
		longestWordBeg++;
		longestWordLen--;
	}
	result[resultIdx] = '\0';
}

int main() {
	char src[] = "hi my name is teodor angelovdichev";
	char wor[64];
	GetWord(src, wor);
	std::cout << wor;
}