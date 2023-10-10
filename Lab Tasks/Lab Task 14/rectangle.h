#pragma once
#include<iostream>
using namespace std;
#include"shape.h"
class Rectangle :public Shape
{
	double length;
	double breadth;
public:
	Rectangle() :Shape()
	{
		length = 0;
		breadth = 0;
	}
	Rectangle(double l,double b) :Shape()
	{
		length = l;
		breadth = b;
	}
	void disarea()
	{
		cout << "The Area is : " << calarea();
	}
	virtual void printarea()
	{
		cout << "The Area is : " << calarea();
	}
	virtual double calarea()
	{
		return  length * breadth;
	}
	virtual ~Rectangle() {};
};