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
		} else {
			currentWordLen++;
		}

		str++;
	}

	if (!longestWordBeg) return;

	int resultIdx = 0;
	while (!isWhiteSpace(*longestWordBeg)) {
		result[resultIdx++] = *longestWordBeg;
		longestWordBeg++;
	}
	result[resultIdx] = '\0';
}