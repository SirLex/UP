#include <iostream>
using namespace std;

const int BUFFER = 100;

char* commonPrefix(char* text1, char* text2, char* text3) {
	int count = 0;

	while (text1[count] == text2[count] && text2[count] == text3[count] && text1[count] != '\0') {
		count++;
	}

	char* result = new char[BUFFER];

	for (int i = 0; i < count; i++)
	{
		result[i] = text1[i];
	}

	result[count] = '\0';
	return result;
}

int main()
{
	char text1[BUFFER];
	char text2[BUFFER];
	char text3[BUFFER];

	cin.getline(text1, BUFFER);
	cin.getline(text2, BUFFER);
	cin.getline(text3, BUFFER);

	char* result = commonPrefix(text1, text2, text3);
	cout << result << endl;
	delete[] result;
}