#pragma once
#include<iostream>
using namespace std;
#include"shape.h"
class Square:public Shape
{
	double length;
public:
	Square(double l) :Shape()
	{
		length = l;
	}
	Square() :Shape()
	{
		length = 0;
	}
	void disarea()
	{
		cout << "The Area is : " << calarea() << endl;
	}
	virtual void printarea()
	{
		cout << "The Area is : " << calarea() << endl;
	}
	virtual double calarea()
	{
		return length * length;
	}
    virtual ~Square() {};
	
};