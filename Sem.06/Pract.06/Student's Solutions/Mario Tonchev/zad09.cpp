#include <iostream>
using namespace std;

int EncodeNumber(int number, int key) {
	return number ^ key;
}

int DecodeNumber(int code, int key) {
	return code ^ key;
}

int main()
{
	int number = 0;
	int key = 0;

	cin >> number >> key;

	int code = EncodeNumber(number, key);

	cout << code;
	cout << DecodeNumber(code, key);
}