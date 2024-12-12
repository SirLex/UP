int strLen(const char* str) {
	if (str == nullptr) return -1;

	int len = 0;
	while (str[len] != '\0') {
		len++;
	}

	return len;
}

bool doExist(const char* symbols, const char* word) {
	if (!symbols || !word) return false;

	int symbolsLen = strLen(symbols);
	int wordLen = strLen(word);

	if (wordLen > symbolsLen) return false;

	for (int i = symbolsLen - 1; i >= wordLen - 1; i--) {
		for (int j = 0; j < wordLen; j++) {
			if (word[j] != symbols[symbolsLen - i - j]) break;
			if (j == wordLen - 1) return true;
		}
	}

	return false;
}