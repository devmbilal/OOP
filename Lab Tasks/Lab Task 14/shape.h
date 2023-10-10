#pragma once
#include<iostream>
using namespace std;
class Shape
{
	double area;
public:
	Shape() { area = 0; }
	virtual double calarea() = 0;
	double disarea()
	{
		return area;
	}
	virtual void printarea()
	{
		cout << "The Area is : " << area << endl;
	}
	virtual ~Shape() {};
};