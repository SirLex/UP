// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int MATRIZ_SIZE = 3;

bool isTriangle(int matrix[][MATRIZ_SIZE]) {


	for (int i = 0; i < MATRIZ_SIZE; i++)
	{
		for (int j = 0; j < MATRIZ_SIZE; j++)
		{
			if (i> j && matrix[i][j] != 0)
			{
				return false;
			}
		}
	}
	return true;
}


int main()
{

}
