// Lab Task 14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include"circle.h"
#include"rectangle.h"
#include"shape.h"
#include"square.h"

int main()
{
    Shape *s1= new Square(12);
    Shape* s2 = new Circle(3);
    Shape* s3 = new Rectangle(12,12);
    s1->printarea();
    cout << s1->disarea() << endl;

}
