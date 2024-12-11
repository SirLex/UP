#include <iostream>
double calculateMatrix(int** matr, int m) {
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum += (*matr[i] + *matr[m - 1 - i]);
	}
	return sum;
}

int main()
{

}

//kak се извиква функцията в main-a???