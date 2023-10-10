#pragma once
#include<iostream>
using namespace std;
#include"shape.h"
class Circle :public Shape
{
	double radius;
	const double PI;
public:
	Circle() :PI(3.1417),Shape()
	{
		radius = 0;
	}
	Circle(double r) :PI(3.1417), Shape()
	{
		radius = r;
	}
	double disarea()
	{
		cout << "The Area is : " << calarea();
	}
	virtual void printarea()
	{
		cout << "The Area is : " << calarea();
	}
	virtual double calarea()
	{
		return  PI * radius * radius;
	}
	virtual ~Circle() {};
};
