#pragma once
#include"matrices.h"
class matrices
{
private:
	int rs, cs;
	int** matrix1;
	int** matrix2;
	int** resultmat;
public:
	matrices();
	~matrices();
	void valuesetter(int [][3]);
	void print(int[][3]);
	void add(int [][3], int [][3], int [][3]);
	void sub(int[][3], int[][3], int[][3]);
	void mul(int[][3], int[][3], int[][3]);

};