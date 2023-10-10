#include"matrices.h"
#include<fstream>
#include<iostream>
using namespace std;
//matrices::~matrices()
//{
//	for (int i=0;i<rs;i++)
//	{
//		delete arr[i];
//	} 
//	delete[] arr;
//}
matrices::matrices()
{
	fstream file("matrices.txt", ios::in);
	if (file)
	{
		file >> rs;
		file >> cs;
		matrix1 = new int* [rs];
		matrix2 = new int* [rs];
		resultmat = new int* [rs];
		for (int i = 0; i < rs; i++)
		{
			matrix1[i] = new int[cs];
			matrix2[i] = new int[cs];
			resultmat[i] = new int[cs];
		}
	}
	
}
void matrices::valuesetter(int matrix[][3])
{
	for (int i = 0; i < rs; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = matrix[i][j];
		}
	}
}
void matrices::print(int matrix[][3])
{
	for (int i = 0; i < rs; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
void matrices::add(int matrix[][3], int matrix2[][3], int matrix3[][3])
{
	for (int i = 0; i < rs; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			 matrix3[i][j]=matrix[i][j]+matrix2[i][j];
		}
	}
}
void matrices::sub(int matrix[][3], int matrix2[][3], int matrix3[][3])
{
	for (int i = 0; i < rs; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix3[i][j] = matrix[i][j] - matrix2[i][j];
		}
	}
}
void matrices::mul(int matrix[][3], int matrix2[][3], int matrix3[][3])
{
	for (int i = 0; i < rs; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix3[i][j] = matrix[i][j] * matrix2[i][j];
		}
	}
}
