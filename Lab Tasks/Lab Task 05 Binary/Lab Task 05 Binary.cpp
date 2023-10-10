// Lab Task 05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file("matrices.txt", ios::in);
	if (file)
	{
		int rowsize, colsize, i, j, x;
		int** matrix1, ** matrix2, ** resultmat;
		file >> rowsize;
		file >> colsize;
		matrix1 = new int* [rowsize];
		matrix2 = new int* [rowsize];
		resultmat = new int* [rowsize];
		for (i = 0; i < rowsize; i++)
		{
			matrix1[i] = new int[colsize];
			matrix2[i] = new int[colsize];
			resultmat[i] = new int[colsize];
		}



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
		fstream myfile("resultmat", ios::out | ios::binary );
		for (i = 0; i < rowsize; i++)
		{
			for (j = 0; j < colsize; j++)
			{
				resultmat[i][j] = matrix1[i][j] + matrix2[i][j];
				
			}
			cout << endl;
		}
		for (i = 0; i < rowsize; i++)
		{
			myfile.write((char*)resultmat[i], sizeof(resultmat));
		}
		myfile.close();
		for (i = 0; i < rowsize; i++)
		{
			delete matrix1[i];
			delete matrix2[i];
			delete resultmat[i];
		}
		delete[]matrix1;
		delete[]matrix2;
		delete[]resultmat;
	}
	else
	{
		cout << "File Not Found";
	}

}
