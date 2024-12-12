#include <iostream>
bool AnalyzeArr(int* arr, int length)
{
	if (length < 0) {
		std::cout << "Incorrect length value";
		return false;
	}

	int counter = 0;
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == i) counter++;
		if (counter > 1) return true;
	}
	return counter > 1;
}
int main() {

}