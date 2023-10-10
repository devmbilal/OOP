// Lab Task O6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include"matrices.h"
using namespace std;
int main()
{
	int rowsize, colsize;
	
	int matrix1[3][3], matrix2[3][3],matrix3[3][3], i, j, x;
	
	for (i = 0; i < rowsize; i++)
	{
		for (j = 0; j < colsize; j++)
		{
			file >> x;
			matrix1[i][j] = x;
		}
	}
	for (i = 0; i < rowsize; i++)
	{
		for (j = 0; j < colsize; j++)
		{
			file >> x;
			matrix2[i][j] = x;
		}
	}
		file.close();
		matrices m1(rowsize,colsize);
		matrices m2(rowsize,colsize);
		matrices m3(rowsize, colsize);
		m1.valuesetter(matrix1);
		m2.valuesetter(matrix2);
		cout << "Matrix 1 " << endl;
	    m1.print(matrix1);
		cout << "Matrix 2 " << endl;
	    m2.print(matrix2);
		cout << "Addition " << endl;
		m3.add(matrix1, matrix2, matrix3);
	    m3.print(matrix3);
		cout << "Subtraction" << endl;
		m3.sub(matrix1, matrix2, matrix3);
		m3.print(matrix3);
		cout << "Multiplication" << endl;
		m3.mul(matrix1, matrix2, matrix3);
		m3.print(matrix3);
}
