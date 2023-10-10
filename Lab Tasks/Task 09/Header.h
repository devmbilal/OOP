#pragma once
#include<iostream>
using namespace std;

class Integarset
{
	int set[101];
public:
	Integarset();
	Integarset(int arr[], int size);
	void emptyset();
	void insertelem();
	void delelem();
	Integarset operator+(const Integarset& s);
	Integarset operator*(const Integarset& s);
	Integarset operator-(const Integarset& s);
	Integarset operator~();
	friend istream& operator>>(istream& input, Integarset& s);
	friend ostream& operator<<(ostream& output, Integarset& s);
};