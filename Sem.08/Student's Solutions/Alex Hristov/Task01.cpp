#include <iostream>

using namespace std;

const int arrSize = 20;


//ZAD 1
bool AnalyzeArr(int arr[], int length) {

	if (length < 0 || arr == nullptr) {
		return false;
	}
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (arr[i] == i) {
			count++;
		}
	}
	if (count >= 2) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int arr[arrSize];
	int length;

	cout << "Enter length:";
	cin >> length;

	for (int i = 0; i < length; i++) {
		cout << "Enter number:";
		cin >> arr[i];
	}
	cout << endl;
	if (AnalyzeArr(arr, length)) {
		cout << "Exist to fixed elements";
	}
	else {
		cout << "Does not exist to fixed elements";
	}

}
