int myStrlen(const char* str) {
	if (!str) return -1;

	int len = 0;
	while (str[len++]);

	return len - 1;
}

int myAbs(int a) {
	return a >= 0 ? a : -a;
}

int myStrcmp(const char* lhs, const char* rhs) {
	if (!lhs || !rhs) return -2; // -1 is reserved for when lhs < rhs in lexicographic order

	while (*lhs && *rhs && *lhs == *rhs) {
		lhs++;
		rhs++;
	}

	if (*lhs == '\0' || *rhs == '\0') return 0;
	else if (*lhs < *rhs) return -1;
	else return 1;
}

int searchInText(const char* text, const char* what) {
	if (!text || !what) return -1;

	int textLen = myStrlen(text);
	int whatLen = myStrlen(what);
	int lastValidIndex = textLen - whatLen;

	if (lastValidIndex < 0) return -1;

	for (int i = 0; i <= lastValidIndex; i++) {
		if (myStrcmp(text + i, what) == 0) return i;
	}

	return -1;
}

void shiftText(char* text, bool leftShift, unsigned shiftAmount) {
	if (!text || !shiftAmount) return;

	int textLen = myStrlen(text);

	if (leftShift) {
		for (int i = 0; i < shiftAmount; i++) {
			for (int j = 0; j < textLen; j++) {
				text[j] = text[j + 1];
			}
			textLen--;
		}
		text[textLen + 1] = '\0';
	} else {
		for (int i = 0; i < shiftAmount; i++) {
			for (int j = textLen - 1; j >= i; j--) {
				text[j + 1] = text[j];
			}
			textLen++;
		}
		text[textLen] = '\0';
	}
}

void myStrcat(char* dest, const char* src) {
	if (!dest || !src) return;

	while (*src) {
		*dest = *src;

		dest++;
		src++;
	}
}

void replace(char* text, const char* where, const char* what) {
	if (!text || !where || !what) return;

	int whereLen = myStrlen(where);
	int whatLen = myStrlen(what);
	int whereWhatLenDiff = myAbs(whereLen - whatLen);
	bool shiftDirection = whereLen > whatLen;

	int matchIndex = searchInText(text, where);
	while (matchIndex != -1) {
		if (whereWhatLenDiff) {
			if (shiftDirection) {
				shiftText(text + matchIndex + whatLen - 1, shiftDirection, whereWhatLenDiff);
			} else {
				shiftText(text + matchIndex + whereLen - 1, shiftDirection, whereWhatLenDiff);

			}
		}
		myStrcat(text + matchIndex, what);
		matchIndex = searchInText(text, where);
	}
}