#include <iostream>
using namespace std;

int strlen(char* str) {
	int index = 0;
	while (str[index] != '\0') {
		index++;
	}

	return index;
}

int strcmp(char* str1, char* str2) {
	if (str1 == nullptr || str2 == nullptr) {
		return 2;
	}

	while (*str1 == *str2 && *str1 != '\0') {
		str1++;
		str2++;
	}

	if (*str1 == '\0' && *str2 == '\0') {
		return 0;
	}
	else if (*str1 == '\0') {
		return -1;
	}
	else if (*str2 == '\0') {
		return 1;
	}
	else if(*str1 > *str2) {
		return 1;
	}
	else {
		return -1;
	}
}

char* strcat(char* str1, char* str2) {
	if (str1 == nullptr || str2 == nullptr) {
		return new char[0];
	}

	char* result = new char[strlen(str1) + strlen(str2) + 1];

	int i = 0;
	while (str1[i] != '\0') {
		result[i] = str1[i];
		i++;
	}

	int j = 0;
	while (str2[j] != '\0') {
		result[i + j] = str2[j];
		j++;
	}

	result[i + j] = '\0';

	return result;
}


void strcpy(char* destination, char* source) {
	if (source == nullptr || destination == nullptr) {
		return;
	}

	int i = 0;
	while (source[i] != '\0') {
		destination[i] = source[i];
		i++;
	}

	destination[i] = '\0';
}

long long аtoi(char* str) {
	if (str == nullptr) {
		return -1;
	}

	long long num = 0;

	int i = 0;

	bool isNegative = false;
	if (str[i] == '-') {
		isNegative = true;
		i++;
	}

	while (str[i] != '\0') {
		num *= 10;
		
		if (str[i] < '0' || '9' < str[i]) {
			return -1;
		}

		num += str[i] - '0';
		i++;
	}

	if (isNegative) {
		return (-1)* num;
	}

	return num;
}

int searchInText(char* text, char* searched) {
	if (text == nullptr || searched == nullptr) {
		return -1;
	}

	int i = 0;
	while (text[i] != '\0') {
		int j = 0;

		while (text[i + j] == searched[j] && text[i + j] != '\0') {
			j++;
		}

		if (searched[j] == '\0') {
			return i;
		}

		i++;
	}

	return -1;

}

int getCharOccurrencesCount(char* str, char symbol) {
	if (str == nullptr) {
		return 0;
	}

	int count = 0;

	while (*str != '\0') {
		if (*str == symbol) {
			count++;
		}

		str++;
	}

	return count;
}

int main()
{

}