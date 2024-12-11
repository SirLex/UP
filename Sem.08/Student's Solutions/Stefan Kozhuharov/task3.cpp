#include <iostream>
using namespace std;

void ConvertNum(long& num) {

	long reversedNum = 0;
	while (num != 0) {

		reversedNum = reversedNum * 10 + num % 10;
		num /= 10;

	}

	num = reversedNum;

}

int main()
{
	
	long num = 12345678;
	ConvertNum(num);
	cout << num;

}
