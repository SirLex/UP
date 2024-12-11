#include <iostream>
void ConvertNum(long& num) {
	long reversed = 0;
	while (num != 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}
	num = reversed;
}
int main() {

}